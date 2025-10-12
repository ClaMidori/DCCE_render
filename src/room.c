#include "../include/room.h"

void parede(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(0,0,1); //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base, base);
      glVertex2f( base,0);
   glEnd();
   glPopMatrix();
}

void parede_with_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(1,0,1); //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base, base);
      glVertex2f( base,0);
   glEnd();
   glPopMatrix();
}

void telhado(){
   glColor3f(0,1,0); 
   glBegin(GL_TRIANGLES); //define as linhas da janela
      glVertex3f(0, 50,0);
      glVertex3f(50, 50,0);
      glVertex3f(25, 75,-25);
   glEnd();
}

void door(float angulo){
    glPushMatrix();
    glRotatef(angulo,0,1,0);
    glTranslatef(0,0,0);
    	//Define uma casinha composta por um quadrado e um triângulo.
   glColor3f(1,0,0); //Define cor como azul
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,40);
      glVertex2f(15,40);
      glVertex2f(15,0);
   glEnd();
}


void parede_with_door(){
	//Define uma casinha composta por um quadrado e um triângulo.
   glColor3f(0,0,1); //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, 50); 
      glVertex2f(20,50);
      glVertex2f(20,0);

   glEnd();
   
   glBegin(GL_QUADS);
      glVertex2f(20,40);
      glVertex2f(20,50);
      glVertex2f(35,50);
      glVertex2f(35,40);
   glEnd();

   glBegin(GL_QUADS);
      glVertex2f(35,0);
      glVertex2f(35, 50);
      glVertex2f( 50, 50);
      glVertex2f( 50,0);
   glEnd();
}

// cria um retangulo de qualquer dimensão em 0x0x0
void room(int fx, int fy){
    for (int i=0;i<fx;i++){
      parede(i*base,0,0,0,0,0,0);
      parede_with_window(i*base,0,fy*base,0,0,0,0);
    }

   for (int i=0;i<fy;i++){
      parede(i*base,0,0,-90,0,1,0);
      parede(i*base,0,-fx*base,-90,0,1,0);
    }


    /*    glRotatef(90,0,1,0);
    parede_with_door();
    glPopMatrix();
    glTranslatef(0,0,50);
    parede();
    glPopMatrix();
    telhado();
    glPopMatrix();
    glRotatef(90,0,1,0);
    glTranslatef(0,0,50);
    telhado();
    glPopMatrix();
    glRotatef(180,0,1,0);
    glTranslatef(-50,0,50);
    telhado();
    glPopMatrix();
    glRotatef(270,0,1,0);
    glTranslatef(-50,0,0);    
    telhado();
    glPopMatrix();
    glTranslatef(-5,0,0); 
    glTranslatef(20,0,0);
    door(angulo);
    glPopMatrix(); */
}