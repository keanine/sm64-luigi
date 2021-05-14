#include "CCS_luigi_data.h"
#include "CCS_character_data.h"

f32 CCS_mario_singleJumpHeight = 42.0f;
f32 CCS_mario_singleJumpMultiplier = 0.25f;

void CCS_set_mario_data_to_character_data(void) {
    CCS_singleJumpHeight = CCS_mario_singleJumpHeight;
    CCS_singleJumpMultiplier = CCS_mario_singleJumpMultiplier;
}
