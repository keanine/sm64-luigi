#include "CCS_luigi_data.h"
#include "CCS_character_data.h"

f32 CCS_luigi_singleJumpHeight = 52.0f;
f32 CCS_luigi_singleJumpMultiplier = 0.25f;

void CCS_set_luigi_data_to_character_data(void) {
    CCS_singleJumpHeight = CCS_luigi_singleJumpHeight;
    CCS_singleJumpMultiplier = CCS_luigi_singleJumpMultiplier;
}
