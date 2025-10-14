#include "../include/room.h"

// funções de criação de paredes - padronizar parametros translação, rotação e angulo
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

// cria uma parede com uma janela gradeada - default janela inferior lateral do dcce 
void parede_with_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float coefx = 0.3;
   float coefy = 0.1;
   float coef_window = 0.05;
   float coef_grade = 0.01;

   float offset_grade = base/6;

   //molde da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(1,0,1); //Define cor como azul
   glBegin(GL_QUADS); //infeiror
      glVertex2f(0,0);
      glVertex2f(0, base*coefx);
      glVertex2f( base, base*coefx);
      glVertex2f( base,0);
   glEnd();
   glBegin(GL_QUADS); //superior
      glVertex2f(0,base);
      glVertex2f(0, base*(1-coefy));
      glVertex2f( base, base*(1-coefy));
      glVertex2f( base,base);
   glEnd();
   glBegin(GL_QUADS); //esquerdo
      glVertex2f(0,base*coefx);
      glVertex2f(0, base);
      glVertex2f( base*coefy, base);
      glVertex2f( base*coefy,base*coefx);
   glEnd();
   glTranslatef(base-base*coefy,0,0);
   glBegin(GL_QUADS); //direito
      glVertex2f(0,base*coefx);
      glVertex2f(0, base);
      glVertex2f( base*coefy, base);
      glVertex2f( base*coefy,base*coefx);
   glEnd();
   glPopMatrix();

   //1 divisão da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(1,0,1); //Define cor como azul
   glTranslatef(base*0.33,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base);
      glVertex2f( base*coef_window, base);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   //segunda divisão da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(1,0,1); 
   glTranslatef(2*base*0.33,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base);
      glVertex2f( base*coef_window, base);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   // subdivisão superior da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(1,0,1); 
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(0,base*0.75);
      glVertex2f(0, base*0.75 - base*(coef_window));
      glVertex2f( base, base*0.75 - base*(coef_window));
      glVertex2f( base,base*0.75);
   glEnd();
   glPopMatrix();

   //terceira divisão da janela - aqui já virou palhaçada

   //grades da janela primeira
   for (int i=0;i<2;i++){
      glPushMatrix();
      glRotatef(angulo,rx,ry,rz);
      glTranslatef(tx,ty,tz);
      glColor3f(1,0,0); //Define cor como azul
      glTranslatef((i+1)*base*coefx/4 + base*coefx/3,0,0); // nn questiona a lógica, funciona
      glBegin(GL_QUADS); //divisao 1/3
         glVertex2f(0,base*coefx);
         glVertex2f(0, base*(1-coefy));
         glVertex2f( base*coef_grade, base*(1-coefy));
         glVertex2f( base*coef_grade,base*coefx);
      glEnd();
      glPopMatrix();
   }

   // grades do meio
   for (int i=0;i<2;i++){
      glPushMatrix();
      glRotatef(angulo,rx,ry,rz);
      glTranslatef(tx,ty,tz);
      glColor3f(1,0,0); //Define cor como azul
      glTranslatef(base*0.3 +(i+1)*base*coefx/4 + base*coefx/3,0,0); // nn questiona a lógica, funciona
      glBegin(GL_QUADS); //divisao 1/3
         glVertex2f(0,base*coefx);
         glVertex2f(0, base*(1-coefy));
         glVertex2f( base*coef_grade, base*(1-coefy));
         glVertex2f( base*coef_grade,base*coefx);
      glEnd();
      glPopMatrix();
   }

   //grades finais
      for (int i=0;i<2;i++){
      glPushMatrix();
      glRotatef(angulo,rx,ry,rz);
      glTranslatef(tx,ty,tz);
      glColor3f(1,0,0); //Define cor como azul
      glTranslatef(base*0.59 +(i+1)*base*coefx/4 + base*coefx/3,0,0); // nn questiona a lógica, funciona
      glBegin(GL_QUADS); //divisao 1/3
         glVertex2f(0,base*coefx);
         glVertex2f(0, base*(1-coefy));
         glVertex2f( base*coef_grade, base*(1-coefy));
         glVertex2f( base*coef_grade,base*coefx);
      glEnd();
      glPopMatrix();
   }

   //agora vem oq? grades horizontais..
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(1,0,0); 
   glTranslatef(0,-base*0.18,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy, base);
      glVertex2f(base*coefy,base -base*coef_grade);
      glVertex2f( base-base*coefy, base -base*coef_grade );
      glVertex2f( base-base*coefy,base);
   glEnd();
   glPopMatrix();

   // duas pertencentes a janela maior
   //a de cima
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(1,0,0); 
   glTranslatef(0,-base*0.55,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy, base);
      glVertex2f(base*coefy,base -base*coef_grade);
      glVertex2f( base-base*coefy, base -base*coef_grade );
      glVertex2f( base-base*coefy,base);
   glEnd();
   glPopMatrix();

   //a de baixo
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(1,0,0); 
   glTranslatef(0,-base*0.4,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy, base);
      glVertex2f(base*coefy,base -base*coef_grade);
      glVertex2f( base-base*coefy, base -base*coef_grade );
      glVertex2f( base-base*coefy,base);
   glEnd();
   glPopMatrix();

}

//cria uma parede com janela pequena no canto superior
void parede_with_small_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){}

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
//funcções de criação de salas: padronizar os parametros de x e y, transformações fazer em buildings
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

void room_with_small_windows(int fx, int fy){
   
}