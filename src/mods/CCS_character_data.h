#ifndef CCS_CHARACTER_DATA_H
#define CCS_CHARACTER_DATA_H

#include <PR/ultratypes.h>
#include "types.h"
#include "sm64.h"

#include "CCS_mario_data.h"
#include "CCS_luigi_data.h"

extern struct MarioState *CCS_marioState;

extern f32 CCS_singleJumpHeight;
extern f32 CCS_singleJumpMultiplier;

void CCS_initialise_character_data(void);

void CCS_load_mod(struct MarioState *m);
void CCS_update();


#endif // CCS_CHARACTER_DATA_H
