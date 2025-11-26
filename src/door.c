#include "../include/door.h"
#include "../include/texture.h"

void door(float angulo){
   float fx = 0.85;
   float fy = 0.1;
   float offset_superior = 0.05;
   float newbase = base/2;
   float coef_window = 0.05;
   float coef_grade = 0.01;

   //coluna esquerda
   glPushMatrix();
   glRotatef(angulo,0,1,0);
   glColor3f(1,0,0); //Define cor como vermelha
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*fx);
      glVertex2f(newbase*fy,base*fx);
      glVertex2f(newbase*fy,0);
   glEnd();
   glPopMatrix();

   //coluna direita
   glPushMatrix();
   glRotatef(angulo,0,1,0);
   glColor3f(1,0,0); 
   glTranslatef(newbase*(1-fy),0,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*fx);
      glVertex2f(newbase*fy,base*fx);
      glVertex2f(newbase*fy,0);
   glEnd();
   glPopMatrix();

   //parte superior
   glPushMatrix();
   glRotatef(angulo,0,1,0);
   glColor3f(1,0,0); 
   glBegin(GL_QUADS);
      glVertex2f(newbase*fy,base*fx);
      glVertex2f(newbase*fy,base*fx-base*fx*offset_superior);
      glVertex2f(newbase - newbase*fy,base*fx-base*fx*offset_superior);
      glVertex2f(newbase - newbase*fy,base*fx);
   glEnd();
   glPopMatrix();

   //parte inferior
   glPushMatrix();
   glRotatef(angulo,0,1,0);
   glColor3f(1,0,0); 
   glTranslatef(0,-base*fx+base*fx*offset_superior,0);
   glBegin(GL_QUADS);
      glVertex2f(newbase*fy,base*fx);
      glVertex2f(newbase*fy,base*fx-base*fx*offset_superior);
      glVertex2f(newbase - newbase*fy,base*fx-base*fx*offset_superior);
      glVertex2f(newbase - newbase*fy,base*fx);
   glEnd();
   glPopMatrix();

   //parte meio
   glPushMatrix();
   glRotatef(angulo,0,1,0);
   glColor3f(1,0,0); 
   glTranslatef(0,(-base*fx+base*fx*offset_superior)/2,0);
   glBegin(GL_QUADS);
      glVertex2f(newbase*fy,base*fx);
      glVertex2f(newbase*fy,base*fx-base*fx*offset_superior);
      glVertex2f(newbase - newbase*fy,base*fx-base*fx*offset_superior);
      glVertex2f(newbase - newbase*fy,base*fx);
   glEnd();
   glPopMatrix();

   //grades verticais
   for (int i=0;i<3;i++){
      glPushMatrix();
      glColor3f(1,0,0); //Define cor como azul
      glTranslatef((i+1)*newbase/4,0,0);
      glBegin(GL_QUADS); //divisao 1/3
         glVertex2f(0,base*fx);
         glVertex2f(0, base*fx*offset_superior);
         glVertex2f( base*coef_grade, base*fx*offset_superior);
         glVertex2f( base*coef_grade,base*fx);
      glEnd();
      glPopMatrix();
   }

   //grades horizontais superiores
   for (int i=0;i<4;i++){
      glPushMatrix();
      glRotatef(angulo,0,1,0);
      glColor3f(1,0,0); 
      glTranslatef(0,(i+1)*2*(-base*fx*offset_superior),0);
      glBegin(GL_QUADS);
         glVertex2f(newbase*fy,base*fx);
         glVertex2f(newbase*fy,base*fx-base*fx*coef_grade);
         glVertex2f(newbase - newbase*fy,base*fx-base*fx*coef_grade);
         glVertex2f(newbase - newbase*fy,base*fx);
      glEnd();
      glPopMatrix();
   }

      //grades horizontais inferiores
   for (int i=0;i<4;i++){
      glPushMatrix();
      glRotatef(angulo,0,1,0);
      glColor3f(1,0,0); 
      glTranslatef(0,(-base*fx +base*fx*offset_superior)/2,0);
      glTranslatef(0,(i+1)*2*(-base*fx*offset_superior),0);
      glBegin(GL_QUADS);
         glVertex2f(newbase*fy,base*fx);
         glVertex2f(newbase*fy,base*fx-base*fx*coef_grade);
         glVertex2f(newbase - newbase*fy,base*fx-base*fx*coef_grade);
         glVertex2f(newbase - newbase*fy,base*fx);
      glEnd();
      glPopMatrix();
   }
}

void madeira_door(float angulo){
   float fx = 0.85;
   float fy = 0.1;
   float offset_superior = 0.05;
   float newbase = base/2;
   float coef_window = 0.05;
   float coef_grade = 0.01;

   glPushMatrix();
   glRotatef(angulo,0,1,0);
   glBindTexture(GL_TEXTURE_2D, texID[0]);
   marrom;
   glBegin(GL_QUADS);
      glTexCoord2f(0,0);glVertex2f(0,0);
      glTexCoord2f(0,1);glVertex2f(0,base*fx);
      glTexCoord2f(1,0);glVertex2f(newbase,base*fx);
      glTexCoord2f(1,1);glVertex2f(newbase,0);
   glEnd();
   glPopMatrix();

   //MaÃ§aneta simplezinha
   glPushMatrix();
   gray;
   glTranslatef(newbase*fx, newbase, 0);
   glutSolidSphere(fx, 30, 10);
   glPopMatrix();
}