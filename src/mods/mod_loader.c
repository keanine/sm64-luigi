#include "mod_loader.h"

void ml_load_character_mods(struct MarioState *m) {
    CCS_load_mod(m);
}


void ml_update_character_mods_all() {
    CCS_update();
}

void ml_update_character_mods_airborne() {
    ml_update_character_mods_all();
}
void ml_update_character_mods_automatic() {
    ml_update_character_mods_all();
}
void ml_update_character_mods_cutscene() {
    ml_update_character_mods_all();
}
void ml_update_character_mods_moving() {
    ml_update_character_mods_all();
}
void ml_update_character_mods_object() {
    ml_update_character_mods_all();
}
void ml_update_character_mods_stationary() {
    ml_update_character_mods_all();
}
void ml_update_character_mods_submerged() {
    ml_update_character_mods_all();
}
