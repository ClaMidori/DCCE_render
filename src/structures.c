#include "../include/structures.h"
#include "../include/commons.h"

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

void escada(){
      ground(base*0.75-wall_thickness,base*0.15, base*0.15,0,0,0);
      ground(base*0.75-wall_thickness,base*0.15, base*0.3,0,0,base*0.15);
      ground(base*0.75-wall_thickness,base*0.15, base*0.45,0,0,base*0.3);
      ground(base*0.75-wall_thickness,base*0.15, base*0.6,0,0,base*0.45);
      ground(base*2-2*wall_thickness,base*0.9,  base*0.75,0,0,base*0.6);

      glTranslatef(base*1.25-wall_thickness,0,0);
      ground(base*0.75-wall_thickness,base*0.15, base*0.75,0,0,base*0.45);
      ground(base*0.75-wall_thickness,base*0.15, base*0.6+base*0.15,0,0,0.45);
      ground(base*0.75-wall_thickness,base*0.15, base*0.6+base*0.3,0,0,base*0.3);
      ground(base*0.75-wall_thickness,base*0.15, base*0.6+base*0.45,0,0,base*0.15);
      ground(base*0.75-wall_thickness,base*0.15, base*0.6+base*0.6,0,0,base*0.0);

}