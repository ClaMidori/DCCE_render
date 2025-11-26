#ifndef DOOR_H
#define DOOR_H

#include "../include/commons.h"

typedef enum {
    DOOR_WOOD,
    DOOR_GRADE,
    DOOR_WHITE
} DoorType;

typedef enum {
    HANDLE_NONE,
    HANDLE_ROUND,
    HANDLE_VERTICAL,
    HANDLE_HORIZONTAL
} HandleType; //Tipo da maçaneta

typedef struct {
    float r, g, b;   // cor base da porta
} Color3;

typedef struct {
    HandleType type;
    float size;     // raio da esfera ou comprimento da barra
    Color3 color;   // cor da maçaneta
} DoorHandle;

typedef struct {
    DoorType type;     // madeira, grade, vidro...
    float width;       // largura
    float height;      // altura
    float thickness;   // profundidade da porta
    float openAngle;   // ângulo atual da porta (0=fechada)

    // características geométricas específicas
    int hasBars;       // porta com grades?
    int verticalBars;
    int horizontalBars;

    int hasBackground;//Tem o quadrado de fundo?

    int hasBorders;
    float borderSize;
    

    // cores
    Color3 borderColor;
    Color3 color;

    // maçaneta
    DoorHandle handle;

    // textura (opcional)
    //GLuint textureID;    
    //int useTexture;
} Door;

//Cria uma porta genérica passando as struct com as características especicas
void door(const Door *d);

//Cria variáveis globais para os tipos de portas:
extern Door woodDoor;
extern Door gradeDoor;
extern Door whiteDoor;
/*
// cria uma porta gradeada
void door(float angulo);
void woodDoor(float angulo);
*/

#endif