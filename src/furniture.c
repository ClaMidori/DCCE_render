#include "../include/furniture.h"
#include "../furnitures/ar_export.h"
#include "../furnitures/camera_export.h"
#include "../furnitures/computador_export.h"
#include "../furnitures/gabinete_export.h"
#include "../furnitures/pia_export.h"
#include "../furnitures/sofa_export.h"

void teste_objetos(){
    glPushMatrix();
    glTranslatef(1000, 50, -100);
    //ar_draw();  FALHO -> FAZER EM OPENGL
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1000, 50, 100);
    camera_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1000, 50, 200);
    //computador_draw();  FALHO -> FAZER EM OPENGL
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1000, 50, 30);
    //gabinete_draw();  SIMPLES -> FAZER EM OPENGL
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1000, 50, 400);
    pia_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1000, 50, 500);
    sofa_draw();
    glPopMatrix();
}