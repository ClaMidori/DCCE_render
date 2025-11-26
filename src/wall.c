#include "../include/wall.h"

void wall_short(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/2-wall_thickness, base);
      glVertex2f( base/2-wall_thickness,0);
   glEnd();
   glPopMatrix();
}

void wall_fill(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( wall_thickness, base);
      glVertex2f( wall_thickness,0);
   glEnd();
   glPopMatrix();
}

void wall(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   int thickness = 5;
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white;
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base, base);
      glVertex2f( base,0);
   glEnd();
   glPopMatrix();
}

void wall_with_big_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float coefx = 0.3;
   float coefy = 0.1;
   float coefz = 0.025;
   float coef_window = 0.05;
   float coef_grade = 0.01;

   float offset_grade = base/6;

   //molde da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; 
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

   //molde esquerdo janela - moldura externa x e z
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz+base*coefz);
   red; //Define cor como azul
   glTranslatef(base*coefy,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glRotatef(90,0,1,0);
   red; //Define cor como azul
   glTranslatef(-base*coef_window+base*coefz,0,base*coefy);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coefz, base-base*coefy);
      glVertex2f( base*coefz,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glRotatef(90,0,1,0);
   red; //Define cor como azul
   glTranslatef(-base*coef_window+base*coefz,0,base*coefy+base*coef_window);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coefz, base-base*coefy);
      glVertex2f( base*coefz,base*coefx);
   glEnd();
   glPopMatrix();

   //molde esquerdo janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; //Define cor como azul
   glTranslatef(base*coefy,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   //molde direito janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; //Define cor como azul
   glTranslatef(base-base*coefy-base*coef_window,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   //molde direito janela - moldura externa x e z
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz+base*coefz);
   red; //Define cor como azul
   glTranslatef(base-base*coefy-base*coef_window,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx+base*0.8,ty,tz);
   glRotatef(90,0,1,0);
   red; //Define cor como azul
   glTranslatef(-base*coef_window+base*coefz,0,base*coefy);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coefz, base-base*coefy);
      glVertex2f( base*coefz,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx+base*0.8-base*coef_window,ty,tz);
   glRotatef(90,0,1,0);
   red; //Define cor como azul
   glTranslatef(-base*coef_window+base*coefz,0,base*coefy);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coefz, base-base*coefy);
      glVertex2f( base*coefz,base*coefx);
   glEnd();
   glPopMatrix();

   //1 divisão da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; //Define cor como azul
   glTranslatef((base-2*base*coef_window)/3,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   //segunda divisão da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(2*(base-2*base*coef_window)/3,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coef_window, base -base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   // subdivisão superior horizontal da janela - meio
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy,base*0.75);
      glVertex2f(base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy,base*0.75);
   glEnd();
   glPopMatrix();

   // horizontal inferior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(0,-base+2*base*coefx,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy,base*0.75);
      glVertex2f(base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy,base*0.75);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz+base*coefz);
   red; 
   glTranslatef(0,-base+2*base*coefx,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy,base*0.75);
      glVertex2f(base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy,base*0.75);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(0,base*coefx,-base+base*coefx-base*coefz);
   glBegin(GL_QUADS); //superior detalhe
      glVertex3f(base*coefy,0,base*0.75);
      glVertex3f(base*coefy,0, base*0.75 - base*(coefz));
      glVertex3f(base-base*coefy,-0, base*0.75 - base*(coefz));
      glVertex3f(base-base*coefy,-0,base*0.75);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(0,base*coefx+base*coef_window,-base+base*coefx-base*coefz);
   glBegin(GL_QUADS); //superior detalhe
      glVertex3f(base*coefy,0,base*0.75);
      glVertex3f(base*coefy,0, base*0.75 - base*(coefz));
      glVertex3f(base-base*coefy,-0, base*0.75 - base*(coefz));
      glVertex3f(base-base*coefy,-0,base*0.75);
   glEnd();
   glPopMatrix();

   //horizontal superior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(0,base*coefx-base*coef_window-base*coefy,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy,base*0.75);
      glVertex2f(base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy,base*0.75);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(0,base-base*coef_window-base*coefy,-base+base*coefx-base*coefz);
   glBegin(GL_QUADS); //superior detalhe
      glVertex3f(base*coefy,0,base*0.75);
      glVertex3f(base*coefy,0, base*0.75 - base*(coefz));
      glVertex3f(base-base*coefy,-0, base*0.75 - base*(coefz));
      glVertex3f(base-base*coefy,-0,base*0.75);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(0,base-base*coefy,-base+base*coefx-base*coefz);
   glBegin(GL_QUADS); //superior detalhe
      glVertex3f(base*coefy,0,base*0.75);
      glVertex3f(base*coefy,0, base*0.75 - base*(coefz));
      glVertex3f(base-base*coefy,-0, base*0.75 - base*(coefz));
      glVertex3f(base-base*coefy,-0,base*0.75);
   glEnd();
   glPopMatrix();

   //horizontal superior - molde externo
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz+base*coefz);
   red; 
   glTranslatef(0,base*coefx-base*coef_window-base*coefy,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy,base*0.75);
      glVertex2f(base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy, base*0.75 - base*(coef_window));
      glVertex2f( base-base*coefy,base*0.75);
   glEnd();
   glPopMatrix();

   //terceira divisão da janela - aqui já virou palhaçada

   //grades da janela primeira
   for (int i=0;i<2;i++){
      glPushMatrix();
      glRotatef(angulo,rx,ry,rz);
      glTranslatef(tx,ty,tz);
      red; //Define cor como azul
      glTranslatef((i+1)*base*coefx/4 + base*coefx*0.35,0,0); // nn questiona a lógica, funciona
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
      red; //Define cor como azul
      glTranslatef(base*0.26 +(i+1)*base*coefx/4 + base*coefx/3,0,0); // nn questiona a lógica, funciona
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
      red; //Define cor como azul
      glTranslatef(base*0.53 +(i+1)*base*coefx/4 + base*coefx/3,0,0); // nn questiona a lógica, funciona
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
   red; 
   glTranslatef(0,-base*0.2,0);
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
   red; 
   glTranslatef(0,-base*0.525,0);
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
   red; 
   glTranslatef(0,-base*0.425,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy, base);
      glVertex2f(base*coefy,base -base*coef_grade);
      glVertex2f( base-base*coefy, base -base*coef_grade );
      glVertex2f( base-base*coefy,base);
   glEnd();
   glPopMatrix();

}

void aux_wall_big_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float coefx = 0.3;
   float coefy = 0.1;
   float coefz = 0.025;
   float coef_window = 0.05;
   float coef_grade = 0.01;

   float offset_grade = base/6;

   //molde da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; 
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
}

void wall_with_small_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float coefx = 0.6;
   float coefy = 0.1;
   float coefz = 0.025;
   float coef_window = 0.05;
   float coef_grade = 0.01;

   //molde da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; 
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
   glTranslatef(base-3*base*coefy,0,0);
   glBegin(GL_QUADS); //direito
      glVertex2f(0,base*coefx);
      glVertex2f(0, base);
      glVertex2f( 3*base*coefy, base);
      glVertex2f( 3*base*coefy,base*coefx);
   glEnd();
   glPopMatrix();

   //1a divisão da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red;
   glTranslatef(base*0.38,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base-base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red;
   glTranslatef(base*2*coef_window,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base-base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red;
   glTranslatef(base*coefx+base*coef_window,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base-base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   // divisão horizontal
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy,base*0.77);
      glVertex2f(base*coefy, base*0.77 - base*(coef_window));
      glVertex2f( base -3*base*coefy, base*0.77 - base*(coef_window));
      glVertex2f( base -3*base*coefy,base*0.77);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glTranslatef(0,base-1.93*(base-base*coefx+base*coef_window),0);
   red; 
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy,base*0.77);
      glVertex2f(base*coefy, base*0.77 - base*(coef_window));
      glVertex2f( base -3*base*coefy, base*0.77 - base*(coef_window));
      glVertex2f( base -3*base*coefy,base*0.77);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glTranslatef(0,base-2.49*(base-base*coefx+base*coef_window),0);
   red; 
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy,base*0.77);
      glVertex2f(base*coefy, base*0.77 - base*(coef_window));
      glVertex2f( base -3*base*coefy, base*0.77 - base*(coef_window));
      glVertex2f( base -3*base*coefy,base*0.77);
   glEnd();
   glPopMatrix();

   //grades verticais da janela primeira
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; //Define cor como azul
   glTranslatef(2.2*base*coefy + base*coefy/2,0,0); // nn questiona a lógica, funciona
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base*(1-coefy));
      glVertex2f( base*coef_grade, base*(1-coefy));
      glVertex2f( base*coef_grade,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; //Define cor como azul
   glTranslatef(5*base*coefy + base*coefy/2,0,0); // nn questiona a lógica, funciona
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base*(1-coefy));
      glVertex2f( base*coef_grade, base*(1-coefy));
      glVertex2f( base*coef_grade,base*coefx);
   glEnd();
   glPopMatrix();
   
   // grades horizontais da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(0,-base*0.19,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy, base);
      glVertex2f(base*coefy,base -base*coef_grade);
      glVertex2f( base-3*base*coefy, base -base*coef_grade );
      glVertex2f( base-3*base*coefy,base);
   glEnd();
   glPopMatrix();

   //a de baixo
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(0,-base*0.31,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy, base);
      glVertex2f(base*coefy,base -base*coef_grade);
      glVertex2f( base-3*base*coefy, base -base*coef_grade );
      glVertex2f( base-3*base*coefy,base);
   glEnd();
   glPopMatrix();

   //moldura externa
    /*   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz+base*coefz);
   red; //Define cor como azul
   glTranslatef(base*coefy,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glRotatef(90,0,1,0);
   red; //Define cor como azul
   glTranslatef(-base*coef_window+base*coefz,0,base*coefy);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coefz, base-base*coefy);
      glVertex2f( base*coefz,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glRotatef(90,0,1,0);
   red; //Define cor como azul
   glTranslatef(-base*coef_window+base*coefz,0,base*coefy+base*coef_window);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coefz, base-base*coefy);
      glVertex2f( base*coefz,base*coefx);
   glEnd();
   glPopMatrix();

      //molde direito janela - moldura externa x e z
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(-tx+base*0.75+base*coef_window,ty,tz+base*coefz);
   red; //Define cor como azul
   glTranslatef(base-base*coefy-base*coef_window,0,0);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coef_window, base-base*coefy);
      glVertex2f( base*coef_window,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx+base*0.6,ty,tz);
   glRotatef(90,0,1,0);
   red; //Define cor como azul
   glTranslatef(-base*coef_window+base*coefz,0,base*coefy);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coefz, base-base*coefy);
      glVertex2f( base*coefz,base*coefx);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx+base*0.6-base*coef_window,ty,tz);
   glRotatef(90,0,1,0);
   red; //Define cor como azul
   glTranslatef(-base*coef_window+base*coefz,0,base*coefy);
   glBegin(GL_QUADS); //divisao 1/3
      glVertex2f(0,base*coefx);
      glVertex2f(0, base -base*coefy);
      glVertex2f( base*coefz, base-base*coefy);
      glVertex2f( base*coefz,base*coefx);
   glEnd();
   glPopMatrix(); */

}

void aux_wall_small_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float coefx = 0.6;
   float coefy = 0.1;
   float coefz = 0.025;
   float coef_window = 0.05;
   float coef_grade = 0.01;

   //molde da janela
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; 
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
   glTranslatef(base-3*base*coefy,0,0);
   glBegin(GL_QUADS); //direito
      glVertex2f(0,base*coefx);
      glVertex2f(0, base);
      glVertex2f( 3*base*coefy, base);
      glVertex2f( 3*base*coefy,base*coefx);
   glEnd();
   glPopMatrix();
}

void wall_with_medium_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float offset_janela = 0.05;
   float offset_grade = 0.01;

   //esquerda
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/4, base);
      glVertex2f( base/4,0);
   glEnd();
   glPopMatrix();

   //direita
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glTranslatef(base-base/4,0,0);
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/4, base);
      glVertex2f( base/4,0);
   glEnd();
   glPopMatrix();

   //superior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glTranslatef(0,base-base/6,0);
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base/6);
      glVertex2f( base, base/6);
      glVertex2f( base,0);
   glEnd();
   glPopMatrix();

   //inferior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base/4);
      glVertex2f( base, base/4);
      glVertex2f( base,0);
   glEnd();
   glPopMatrix();

   //inferior da janela - esquerda
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/4,base/4,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_janela);
      glVertex2f(base/2-base/4,base*offset_janela);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   // inferior da janela - direita
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/2,base/4,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_janela);
      glVertex2f(base/2-base/4,base*offset_janela);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   //superior da janela - esquerda
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/2,base-base/6-base*offset_janela,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_janela);
      glVertex2f(base/2-base/4,base*offset_janela);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   // superior da janela - direita
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/4,base-base/6-base*offset_janela,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_janela);
      glVertex2f(base/2-base/4,base*offset_janela);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   //janelinha- esquerda
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/2,base-base/3-base*offset_janela,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_janela);
      glVertex2f(base/2-base/4,base*offset_janela);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   // janelinha - direita
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/4,base-base/3-base*offset_janela,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_janela);
      glVertex2f(base/2-base/4,base*offset_janela);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   //lateral esquerda
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/4,base/4,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base-base/6-base/4-base*offset_janela);
      glVertex2f(base*offset_janela,base-base/6-base/4-base*offset_janela);
      glVertex2f(base*offset_janela,0);
   glEnd();
   glPopMatrix();

   // lateral direita
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base - base/4-base*offset_janela,base/4,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base-base/6-base/4-base*offset_janela);
      glVertex2f(base*offset_janela,base-base/6-base/4-base*offset_janela);
      glVertex2f(base*offset_janela,0);
   glEnd();
   glPopMatrix();

   // lateral meio
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base - base/2-base*offset_janela/2,base/4,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base-base/6-base/4-base*offset_janela);
      glVertex2f(base*offset_janela,base-base/6-base/4-base*offset_janela);
      glVertex2f(base*offset_janela,0);
   glEnd();
   glPopMatrix();

   // grades verticias
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/4 + base/8+2*base*offset_grade,base/4,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base-base/6-base/4-base*offset_grade);
      glVertex2f(base*offset_grade,base-base/6-base/4-base*offset_grade);
      glVertex2f(base*offset_grade,0);
   glEnd();
   glPopMatrix();

   // grades verticais
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/2 + base/8-base*offset_grade,base/4,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base-base/6-base/4-base*offset_grade);
      glVertex2f(base*offset_grade,base-base/6-base/4-base*offset_grade);
      glVertex2f(base*offset_grade,0);
   glEnd();
   glPopMatrix();

   // grades horizontais -direita
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/2,base-base/3+base/16-base*offset_grade,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_grade);
      glVertex2f(base/2-base/4,base*offset_grade);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/2,base-base/2+base/16-2*base*offset_grade,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_grade);
      glVertex2f(base/2-base/4,base*offset_grade);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/2,base-base/2-base/16-2*base*offset_grade,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_grade);
      glVertex2f(base/2-base/4,base*offset_grade);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   //grades horizontais - esquerda
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/4,base-base/3+base/16-base*offset_grade,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_grade);
      glVertex2f(base/2-base/4,base*offset_grade);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

      glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/4,base-base/2+base/16-2*base*offset_grade,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_grade);
      glVertex2f(base/2-base/4,base*offset_grade);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   red; 
   glTranslatef(base/4,base-base/2-base/16-2*base*offset_grade,0);
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*offset_grade);
      glVertex2f(base/2-base/4,base*offset_grade);
      glVertex2f(base/2-base/4,0);
   glEnd();
   glPopMatrix();
}

void aux_wall_medium_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float offset_janela = 0.05;
   float offset_grade = 0.01;

   //esquerda
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/4, base);
      glVertex2f( base/4,0);
   glEnd();
   glPopMatrix();

   //direita
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glTranslatef(base-base/4,0,0);
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/4, base);
      glVertex2f( base/4,0);
   glEnd();
   glPopMatrix();

   //superior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glTranslatef(0,base-base/6,0);
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base/6);
      glVertex2f( base, base/6);
      glVertex2f( base,0);
   glEnd();
   glPopMatrix();

   //inferior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base/4);
      glVertex2f( base, base/4);
      glVertex2f( base,0);
   glEnd();
   glPopMatrix();
}

void wall_with_tall_grade_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   /*//Porta de grades sem maçaneta
Door gradeDoor = {
    .type = DOOR_GRADE,
    .width = base/2,
    .height = base*0.85,
    .thickness = 0.1,
    .openAngle = 0,
    .hasBars = 1,
    .verticalBars = 3,
    .horizontalBars = 4,
    .hasBackground = 0,
    .hasBorders = 1,
    .borderSize = 2.5,
    .borderColor = {0.6,0,0},
    .handle = {
        .type = HANDLE_NONE
    },
    .color = {0.6,0,0}
};
*/
   float offset_janela = 0.05;
   float offset_grade = 0.01;

   float width=(base/3)+1;
   float height=(3*base)/5;
   float borderSize = 2.5;
   int verticalBars = 2;
   int horizontalBars = 5;

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white;
   //esquerda
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/3, base);
      glVertex2f( base/3,0);
   glEnd();
   glPopMatrix();

   //direita
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; 
   //glTranslatef(base-base/3,0,0);
   glBegin(GL_QUADS); //quadrado
      glVertex2f((2*base)/3,0);
      glVertex2f(base, 0);
      glVertex2f( base, base);
      glVertex2f((2*base)/3,base);
   glEnd();
   glPopMatrix();

   //superior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   //glTranslatef(0,base-base/6,0);
   glBegin(GL_QUADS); //quadrado
      glVertex2f(base/3,(4*base)/5);
      glVertex2f((2*base)/3, (4*base)/5);
      glVertex2f((2*base)/3, base);
      glVertex2f(base/3,base);
   glEnd();
   glPopMatrix();

   //inferior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(base/3,0);
      glVertex2f((2*base)/3, 0);
      glVertex2f((2*base)/3, base/5);
      glVertex2f(base/3,base/5);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   red;
   glTranslatef((base/3),base/5,tz);
   //Borda esquerda
      glBegin(GL_QUADS);
         glVertex2f(0,0);
         glVertex2f(0,height);
         glVertex2f(borderSize,height);
         glVertex2f(borderSize,0);
      glEnd();
      //Borda direita
      glBegin(GL_QUADS);
         glVertex2f(width - borderSize,0);
         glVertex2f(width - borderSize,height);
         glVertex2f(width,height);
         glVertex2f(width,0);
      glEnd();
      //Borda superior
      glBegin(GL_QUADS);
         glVertex2f(borderSize,height);
         glVertex2f(width-borderSize,height);
         glVertex2f(width-borderSize,height-borderSize);
         glVertex2f(borderSize,height-borderSize);
      glEnd();
      //Borda inferior
      glBegin(GL_QUADS);
         glVertex2f(0-offset_janela,0-offset_janela);
         glVertex2f(width+offset_janela,0-offset_janela);
         glVertex2f(width+offset_janela,borderSize);
         glVertex2f(0-offset_janela,borderSize);
      glEnd();
       // grades
      for (int i = 0; i < verticalBars; i++) {
         float x = (i+1) * (width / (verticalBars + 1));
         glBegin(GL_QUADS);
               glVertex2f(x, 0);
               glVertex2f(x+0.08, 0);
               glVertex2f(x+0.08, height);
               glVertex2f(x, height);
         glEnd();
      }
      for (int i = 0; i < horizontalBars; i++) {
         float y = (i+1) * (height / (horizontalBars + 1));
         glBegin(GL_QUADS);
               glVertex2f(0, y);
               glVertex2f(width, y);
               glVertex2f(width, y+0.08);
               glVertex2f(0, y+0.08);
         glEnd();
      }
   glPopMatrix();

}

void aux_wall_tall_grade_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   /*//Porta de grades sem maçaneta
Door gradeDoor = {
    .type = DOOR_GRADE,
    .width = base/2,
    .height = base*0.85,
    .thickness = 0.1,
    .openAngle = 0,
    .hasBars = 1,
    .verticalBars = 3,
    .horizontalBars = 4,
    .hasBackground = 0,
    .hasBorders = 1,
    .borderSize = 2.5,
    .borderColor = {0.6,0,0},
    .handle = {
        .type = HANDLE_NONE
    },
    .color = {0.6,0,0}
};
*/
   float offset_janela = 0.05;
   float offset_grade = 0.01;

   float width=base/3;
   float height=base*0.6;
   float borderSize = 2.5;
   int verticalBars = 2;
   int horizontalBars = 5;

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white;
   //esquerda
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/3, base);
      glVertex2f( base/3,0);
   glEnd();
   glPopMatrix();

   //direita
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; 
   //glTranslatef(base-base/3,0,0);
   glBegin(GL_QUADS); //quadrado
      glVertex2f((2*base)/3,0);
      glVertex2f(base, 0);
      glVertex2f( base, base);
      glVertex2f((2*base)/3,base);
   glEnd();
   glPopMatrix();

   //superior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   //glTranslatef(0,base-base/6,0);
   glBegin(GL_QUADS); //quadrado
      glVertex2f(base/3,(4*base)/5);
      glVertex2f((2*base)/3, (4*base)/5);
      glVertex2f((2*base)/3, base);
      glVertex2f(base/3,base);
   glEnd();
   glPopMatrix();

   //inferior
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(base/3,0);
      glVertex2f((2*base)/3, 0);
      glVertex2f((2*base)/3, base/5);
      glVertex2f(base/3,base/5);
   glEnd();
   glPopMatrix();

}

void aux_wall_door(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
    float fy = 0.15;
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,base);
      glVertex2f(0, base-base*fy);
      glVertex2f( base, base-base*fy);
      glVertex2f( base,base);
   glEnd();

   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( wall_thickness, base);
      glVertex2f( wall_thickness,0);
   glEnd();
   glPopMatrix();
   wall_short( tx+base/2+wall_thickness,  ty,  tz, angulo,  rx,  ry,  rz);
}

void wall_with_door(const Door *d, float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float fy = 0.15;
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,base);
      glVertex2f(0, base-base*fy);
      glVertex2f( base, base-base*fy);
      glVertex2f( base,base);
   glEnd();

   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( wall_thickness, base);
      glVertex2f( wall_thickness,0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx+wall_thickness,ty,tz);
   door(d);
   glPopMatrix();

   wall_short( tx+base/2+wall_thickness,  ty,  tz, angulo,  rx,  ry,  rz);
}

void wall_with_entrance_door(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float fy = 0.15;
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,base);
      glVertex2f(0, base-base*fy);
      glVertex2f( base, base-base*fy);
      glVertex2f( base,base);
   glEnd();

   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/2, base);
      glVertex2f( base/2,0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx+base/2,ty,tz);
   door(&gradeDoor);
   glPopMatrix();
}

void aux_entrance_door(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
    float fy = 0.15;
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   white; //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,base);
      glVertex2f(0, base-base*fy);
      glVertex2f( base, base-base*fy);
      glVertex2f( base,base);
   glEnd();

   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/2, base);
      glVertex2f( base/2,0);
   glEnd();
   glPopMatrix();
}