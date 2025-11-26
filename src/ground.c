#include "../include/ground.h"

void ground(float sizex, float sizez,float sizey, float tx, float ty, float tz){
   glPushMatrix();
   glTranslatef(tx,ty,tz);
   gray;
    glBegin(GL_QUADS);
        glNormal3f(0.0f, 1.0f, 0.0f); 
        glVertex3f(0.0f, sizey, 0.0f);
        glVertex3f(sizex, sizey, 0.0f);
        glVertex3f(sizex, sizey, sizez);
        glVertex3f(0.0f, sizey, sizez);
    glEnd();

    // Bordas Laterais
   areia;
    glBegin(GL_QUADS);
        glNormal3f(-1.0f, 0.0f, 0.0f); // Normal para fora (X negativo)
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, sizey, 0.0f);
        glVertex3f(0.0f, sizey, sizez);
        glVertex3f(0.0f, 0.0f, sizez);
    glEnd();
    // Borda 2: Face ao longo do eixo Z (X=sizex)
    glBegin(GL_QUADS);
        glNormal3f(1.0f, 0.0f, 0.0f); // Normal para fora (X positivo)
        glVertex3f(sizex, 0.0f, 0.0f);
        glVertex3f(sizex, sizey, 0.0f);
        glVertex3f(sizex, sizey, sizez);
        glVertex3f(sizex, 0.0f, sizez);
    glEnd();
    // Borda 3: Face ao longo do eixo X (Z=0)
    glBegin(GL_QUADS);
        glNormal3f(0.0f, 0.0f, -1.0f); // Normal para fora (Z negativo)
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(sizex, 0.0f, 0.0f);
        glVertex3f(sizex, sizey, 0.0f);
        glVertex3f(0.0f, sizey, 0.0f);
    glEnd();

    // Borda 4: Face ao longo do eixo X (Z=sizez)
    glBegin(GL_QUADS);
        glNormal3f(0.0f, 0.0f, 1.0f); // Normal para fora (Z positivo)
        glVertex3f(0.0f, 0.0f, sizez);
        glVertex3f(sizex, 0.0f, sizez);
        glVertex3f(sizex, sizey, sizez);
        glVertex3f(0.0f, sizey, sizez);
    glEnd();
   areia_shadow;
    // Retângulo Inferior (na altura y=0)
    glBegin(GL_QUADS);
        glNormal3f(0.0f, -1.0f, 0.0f); // Normal para baixo (Y negativo)
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(sizex, 0.0f, 0.0f);
        glVertex3f(sizex, 0.0f, sizez);
        glVertex3f(0.0f, 0.0f, sizez);
    glEnd();

   glPopMatrix();
}

void especial_ground(float sizex, float sizez,float sizey, float tx, float ty, float tz){
   glPushMatrix();
   glTranslatef(tx,ty,tz);
   gray;
    glBegin(GL_QUADS);
        glNormal3f(0.0f, 1.0f, 0.0f); 
        glVertex3f(0.0f, sizey, 0.0f);
        glVertex3f(sizex, sizey, 0.0f);
        glVertex3f(sizex, sizey, sizez);
        glVertex3f(0.0f, sizey, sizez);
    glEnd();

    // Bordas Laterais
   white;
    glBegin(GL_QUADS);
        glNormal3f(-1.0f, 0.0f, 0.0f); // Normal para fora (X negativo)
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, sizey, 0.0f);
        glVertex3f(0.0f, sizey, sizez);
        glVertex3f(0.0f, 0.0f, sizez);
    glEnd();
    // Borda 2: Face ao longo do eixo Z (X=sizex)
    glBegin(GL_QUADS);
        glNormal3f(1.0f, 0.0f, 0.0f); // Normal para fora (X positivo)
        glVertex3f(sizex, 0.0f, 0.0f);
        glVertex3f(sizex, sizey, 0.0f);
        glVertex3f(sizex, sizey, sizez);
        glVertex3f(sizex, 0.0f, sizez);
    glEnd();
    // Borda 3: Face ao longo do eixo X (Z=0)
    glBegin(GL_QUADS);
        glNormal3f(0.0f, 0.0f, -1.0f); // Normal para fora (Z negativo)
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(sizex, 0.0f, 0.0f);
        glVertex3f(sizex, sizey, 0.0f);
        glVertex3f(0.0f, sizey, 0.0f);
    glEnd();

    // Borda 4: Face ao longo do eixo X (Z=sizez)
    glBegin(GL_QUADS);
        glNormal3f(0.0f, 0.0f, 1.0f); // Normal para fora (Z positivo)
        glVertex3f(0.0f, 0.0f, sizez);
        glVertex3f(sizex, 0.0f, sizez);
        glVertex3f(sizex, sizey, sizez);
        glVertex3f(0.0f, sizey, sizez);
    glEnd();
   white_shadow;
    // Retângulo Inferior (na altura y=0)
    glBegin(GL_QUADS);
        glNormal3f(0.0f, -1.0f, 0.0f); // Normal para baixo (Y negativo)
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(sizex, 0.0f, 0.0f);
        glVertex3f(sizex, 0.0f, sizez);
        glVertex3f(0.0f, 0.0f, sizez);
    glEnd();

   glPopMatrix();
}

