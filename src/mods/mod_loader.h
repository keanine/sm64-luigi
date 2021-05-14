#ifndef MOD_LOADER_H
#define MOD_LOADER_H

#include <PR/ultratypes.h>
#include "types.h"

#include "CCS_character_data.h"

void ml_load_character_mods(struct MarioState *m);

void ml_update_character_mods_all();
void ml_update_character_mods_airborne();
void ml_update_character_mods_automatic();
void ml_update_character_mods_cutscene();
void ml_update_character_mods_moving();
void ml_update_character_mods_object();
void ml_update_character_mods_stationary();
void ml_update_character_mods_submerged();

#endif // MOD_LOADER_H
