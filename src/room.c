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

//cria uma parede com metade do tamanhao - da pra alterar depois e passar como paremetro o tamanho da parede
void parede_short(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(0,0,1); //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base/2, base);
      glVertex2f( base/2,0);
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

//cria uma parede com janela pequena no canto superior - janela inferior lateral 2 do dcce
void parede_with_small_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float coefx = 0.6;
   float coefy = 0.1;
   float coef_window = 0.05;
   float coef_grade = 0.01;

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
   glColor3f(1,0,0);
   glTranslatef(base*0.38,0,0);
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
   glColor3f(1,0,0); 
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
   glColor3f(1,0,0); //Define cor como azul
   glTranslatef(1.88*base*coefy + base*coefy/2,0,0); // nn questiona a lógica, funciona
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
   glColor3f(1,0,0); //Define cor como azul
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
   glColor3f(1,0,0); 
   glTranslatef(0,-base*0.17,0);
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
   glColor3f(1,0,0); 
   glTranslatef(0,-base*0.33,0);
   glBegin(GL_QUADS); //superior detalhe
      glVertex2f(base*coefy, base);
      glVertex2f(base*coefy,base -base*coef_grade);
      glVertex2f( base-3*base*coefy, base -base*coef_grade );
      glVertex2f( base-3*base*coefy,base);
   glEnd();
   glPopMatrix();

}

// cria as duas paredes com janelas verticais - default da frente do dcce
void parede_front_with_window(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(0,1,0); //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,0);
      glVertex2f(0, base);
      glVertex2f( base, base);
      glVertex2f( base,0);
   glEnd();
   glPopMatrix();
}

// cria uma parede com duas portas - default da frente do dcce
void parede_with_door(float tx, float ty, float tz,float angulo, float rx, float ry, float rz){
   float fy = 0.15;
   glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glColor3f(1,0,1); //Define cor como azul
   glBegin(GL_QUADS); //quadrado
      glVertex2f(0,base);
      glVertex2f(0, base-base*fy);
      glVertex2f( base, base-base*fy);
      glVertex2f( base,base);
   glEnd();
   glPopMatrix();

      glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   door(0);
   glPopMatrix();

      glPushMatrix();
   glRotatef(angulo,rx,ry,rz);
   glTranslatef(tx,ty,tz);
   glTranslatef(base/2,0,0);
   door(0);
   glPopMatrix();
}

// cria uma porta - default da entrada do dcce
void door(float angulo){
   float fx = 0.85;
   float fy = 0.1;
   float offset_superior = 0.05;
   float newbase = base/2;
   // min = 0 
   // max = base/2

   //coluna esquerda
   glPushMatrix();
   glRotatef(angulo,0,1,0);
   glColor3f(1,0,0); //Define cor como azul
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
}

//*funções de criação de salas: padronizar os parametros de x e y, transformações fazer em buildings

//cria uma sala com paredes externas com janelas e internas sem janelas
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

// cria uma sala com paredes externas com janelas pequenas e internas sem janelas
void room_with_small_window(int fx, int fy){
   for (int i=0;i<fx;i++){
      parede(i*base,0,0,0,0,0,0);
      parede_with_small_window(i*base,0,fy*base,0,0,0,0);
    }

   for (int i=0;i<fy;i++){
      parede(i*base,0,0,-90,0,1,0);
      parede(i*base,0,-fx*base,-90,0,1,0);
    }
}

// cria a sala de entrada do dcce
void room_entrance(int fx, int fy){

   //paredes laterais
   parede_front_with_window(0,0,1.5*fy*base,0,0,0,0);
   parede_with_door(base,0,fy*base,0,0,0,0);
   parede_front_with_window(2*base,0,1.5*fy*base,0,0,0,0);
   parede_short(-base*1.5,0,fy*base,90,0,1,0);
   parede_short(-base*1.5,0,2*fy*base,90,0,1,0);

   //porta
}