#ifndef BLOCK_H
#define BLOCK_H

#include "../include/commons.h"
#include "../include/wall.h"
#include "../include/structures.h"
#include "../include/ground.h"

/* void room(int fx, int fy); // fx e fy são as dimensões do retangulo que forma a sala, então room(4,2) corresponde a uma sala com 4*base de altura e 2*base de largura
void lateral_room(int fx, int fy);
void room_with_small_window(int fx, int fy);
void room_entrance(int fx, int fy); */

void block(int front, int left, int right, int back);

void half_block(int front, int left, int right, int back);

void big_window_block(int front, int left, int right, int back);

void medium_window_block(int front, int left, int right, int back);

void small_window_block(int front, int left, int right, int back);

void front_door_block(int front, int left, int right, int back);

void lateral_door_block(int front, int left, int right, int back);

void left_entrance_door_block(int front, int left, int right, int back);

void right_entrance_door_block(int front, int left, int right, int back);

#endif