#include "CCS_character_data.h"

f32 CCS_singleJumpHeight = 0;
f32 CCS_singleJumpMultiplier = 0;

struct MarioState *CCS_marioState;

u32 CCS_currentCharacterIndex = 0;

void CCS_initialise_character_data(void) {
    CCS_set_mario_data_to_character_data();
}

void CCS_load_mod(struct MarioState *m) {
    CCS_marioState = m;
    CCS_initialise_character_data();
}

void CCS_update(struct MarioState *m) {
    if (m->input & INPUT_Z_DOWN) {
        CCS_currentCharacterIndex += 1;
    }

    /* clang-format off */
    switch (CCS_currentCharacterIndex)
    {
        case 1: CCS_set_luigi_data_to_character_data(); break;
        default:
            CCS_currentCharacterIndex = 0;
            CCS_set_mario_data_to_character_data();
            break;
    }
    /* clang-format on */
}
