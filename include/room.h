#ifndef HOUSE_H
#define HOUSE_H

#include "../include/commons.h"


void door(float angulo);
void parede(float tx, float ty,float angulo, float tz, float rx, float ry, float rz);
void parede_with_window(float tx, float ty,float angulo, float tz, float rx, float ry, float rz);
void parede_with_small_window(float tx, float ty,float angulo, float tz, float rx, float ry, float rz);
void parede_with_door(float tx, float ty,float angulo, float tz, float rx, float ry, float rz); 
void room(int fx, int fy); // fx e fy são as dimensões do retangulo que forma a sala, então room(4,2) corresponde a uma sala com 4*base de altura e 2*base de largura
void room_with_small_window(int fx, int fy);
void room_entrance(int fx, int fy);

#endif