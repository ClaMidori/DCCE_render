#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "../include/commons.h"

void pressed_keys(unsigned int tecla, int x, int y);
void released_keys(unsigned int tecla, int x, int y);
void update_moviment();
void TeclasEspeciaisUp(int key, int x, int y);
void TeclasEspeciais(int key, int x, int y);

#endif
