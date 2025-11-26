#include "../include/structures.h"

void pilar(float x, float z, float tx, float ty, float tz){

   glPushMatrix();
   glRotatef(90,0,1,0);
   glTranslatef(tx-z,ty,tz+x);
   white
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( z, base);
      glVertex2f( z,0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(90,0,1,0);
   glTranslatef(tx-z,ty,tz+x);
   glTranslatef(0,0,x);
   white;
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( z, base);
      glVertex2f( z,0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(90,0,1,0);
   glTranslatef(tx-z,ty,tz+x);
   glRotatef(90,0,1,0);
   glTranslatef(-x,0,0);
   white;
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( x, base);
      glVertex2f( x,0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(90,0,1,0);
   glTranslatef(tx-z,ty,tz+x);
   glRotatef(90,0,1,0);
   glTranslatef(-x,0,z);
   white;
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( x, base);
      glVertex2f( x,0);
   glEnd();
   glPopMatrix();
}