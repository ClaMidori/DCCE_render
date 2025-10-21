#ifndef WALL_H
#define WALL_H

#include "../include/commons.h"
#include "../include/door.h"

//* AQUI todas as paredes tem dimensão 50x50x0 
//* tx, ty, tz -> relativos a translação nos eixos
//* rx, ry, rz, angulo -> relativos a rotação nos eixos
//* padronizar funções de criação de paredes assim;

// cria meia parede
void wall_short(float tx, float ty,float angulo, float tz, float rx, float ry, float rz);

// cria parede para completar a espessura das paredes
void wall_fill(float tx, float ty,float angulo, float tz, float rx, float ry, float rz);

// cria uma parede comum
void wall(float tx, float ty,float angulo, float tz, float rx, float ry, float rz);

//cria uma parede com uma janela grande
void wall_with_big_window(float tx, float ty,float angulo, float tz, float rx, float ry, float rz);

// cria somente a moldura da janela para completar a espessura
void aux_wall_big_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz);

//cria uma parede com janela média
void wall_with_medium_window(float tx, float ty,float angulo, float tz, float rx, float ry, float rz);

// cria um molde para a parede para completar a espessura
void aux_wall_medium_window (float tx, float ty,float angulo, float tz, float rx, float ry, float rz);

//cria uma parede com uma janela pequena
void wall_with_small_window(float tx, float ty,float angulo, float tz, float rx, float ry, float rz);

// cria somente a moldura da janela para completar a espessura
void aux_wall_small_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz);

//cria uma parede com porta
void wall_with_door(float tx, float ty, float tz,float angulo, float rx, float ry, float rz); 

// cria o molde da parede ocm a porta
void aux_wall_door(float tx, float ty, float tz,float angulo, float rx, float ry, float rz); 

//cria a porta da frente
void wall_with_entrance_door(float tx, float ty, float tz,float angulo, float rx, float ry, float rz);

// auxiliar da porta da frente
void aux_entrance_door(float tx, float ty, float tz,float angulo, float rx, float ry, float rz);


#endif