#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "../include/commons.h"

void pressed_keys(unsigned char tecla, int x, int y);
void released_keys(unsigned char tecla, int x, int y);
void TeclasEspeciaisUp(int key, int x, int y);
void TeclasEspeciais(int key, int x, int y);
void update_moviment();

#endif