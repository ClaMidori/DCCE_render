#include "../include/door.h"

//Porta de madeira com maçaneta redonda
Door woodDoor = {
    .type = DOOR_WOOD,
    .width = base/2,
    .height = base*0.85,
    .thickness = 0.1,
    .openAngle = 0,
    .handle = {
        .type = HANDLE_ROUND,
        .size = 0.8,
        .color = {0.6, 0.6, 0.6}
    },
    .hasBars = 0,
    .verticalBars = 0,
    .horizontalBars = 0,
    .hasBackground = 1,
    .hasBorders = 0,
    .color = {0.6, 0.3, 0.1}
};

//Porta de grades sem maçaneta
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

//Porta branca com maçaneta vertical
Door whiteDoor = {
    .type = DOOR_WHITE,
    .width = base/2, 
    .height = base*0.85,
    .thickness = 0.1,
    .openAngle = 0,
    .handle = {
        .type = HANDLE_VERTICAL,
        .size = 2.5,
        .color = {0.6, 0.6, 0.6}
    },
    .hasBars = 0,
    .verticalBars = 0,
    .horizontalBars = 0,
    .hasBackground = 1,
    .hasBorders = 1,
    .borderSize = 1.5,
    .borderColor = {0.7, 0.7, 0.7},
    .color = {0.9, 0.9, 0.9},
    .professorName = ""
};

void drawPlaque(float width, float height, const char* name) {
    glPushMatrix();
    
    // w*0.5: centro da largura
    // h*0.75: um pouco acima da metade da altura
    glTranslatef(width * 0.5, height * 0.75, 0.1); 
    
    cinza_claro;
    
    // Desenhar um pequeno retângulo de fundo para a placa
    float plaqueWidth = width * 0.4;
    float plaqueHeight = height * 0.1;
    glBegin(GL_QUADS);
        glVertex3f(-plaqueWidth/2, -plaqueHeight/2, 0);
        glVertex3f( plaqueWidth/2, -plaqueHeight/2, 0);
        glVertex3f( plaqueWidth/2,  plaqueHeight/2, 0);
        glVertex3f(-plaqueWidth/2,  plaqueHeight/2, 0);
    glEnd();
    
    glTranslatef(0, 0, 0.01); 
    
    black;

    // Ajuste de escala para o texto caber na placa 
    float scale = width * 0.0003; 
    glScalef(scale, scale, scale);
    
    // Centralizar o texto:
    // Calcula o comprimento da string no sistema de coordenadas da fonte GLUT_STROKE_ROMAN
    int textLength = glutStrokeLength(GLUT_STROKE_ROMAN, (const unsigned char*)name);
    
    // Move a origem para a esquerda pela metade do comprimento do texto
    // e ajusta a altura para o centro 
    glTranslatef(-textLength / 2.0f, -100.0f, 0.0f);

    // Renderiza o texto
    glutStrokeString(GLUT_STROKE_ROMAN, (const unsigned char*)name);

    glPopMatrix();
}

Door createCustomDoor(const Door *baseDoor, const char *professorName) {
   Door newDoor = *baseDoor; 

   //Define o nome do professor no campo 
   strncpy(newDoor.professorName, professorName, sizeof(newDoor.professorName) - 1);

   //garante a terminação nula 
   newDoor.professorName[sizeof(newDoor.professorName) - 1] = '\0';

   return newDoor;
}

void door(const Door *d){
   glPushMatrix();
   glRotatef(d->openAngle, 0, 1, 0);
   
   /*
   if (d->useTexture) {
      glEnable(GL_TEXTURE_2D);
      glBindTexture(GL_TEXTURE_2D, d->textureID);
   } else {
      glColor3f(d->color.r, d->color.g, d->color.b);
   }
      */
   glColor3f(d->color.r, d->color.g, d->color.b);

   float w = d->width;
   float h = d->height;

   // painel principal
   if (d->hasBackground){
      //Se as bordas da porta existirem
      if(d->hasBorders){
         //Painel principal em tamanho reduzido pras bordas aparecerem
         glBegin(GL_QUADS);
            glVertex2f(0+d->borderSize, 0+d->borderSize);
            glVertex2f(w-d->borderSize, 0+d->borderSize);
            glVertex2f(w-d->borderSize, h-d->borderSize);
            glVertex2f(0+d->borderSize, h-d->borderSize);
         glEnd();

         //Processo para desenhar as bordas
         glColor3f(d->borderColor.r, d->borderColor.g, d->borderColor.b);
         //Borda esquerda
         glBegin(GL_QUADS);
            glVertex2f(0,0);
            glVertex2f(0,h);
            glVertex2f(d->borderSize,h);
            glVertex2f(d->borderSize,0);
         glEnd();
         //Borda direita
         glBegin(GL_QUADS);
            glVertex2f(w - d->borderSize,0);
            glVertex2f(w - d->borderSize,h);
            glVertex2f(w,h);
            glVertex2f(w,0);
         glEnd();
         //Borda superior
         glBegin(GL_QUADS);
            glVertex2f(0,h);
            glVertex2f(w,h);
            glVertex2f(w,h-d->borderSize);
            glVertex2f(0,h-d->borderSize);
         glEnd();
         //Borda inferior
         glBegin(GL_QUADS);
            glVertex2f(0,0);
            glVertex2f(w,0);
            glVertex2f(w,d->borderSize);
            glVertex2f(0,d->borderSize);
         glEnd();
      }else{
         //Painel principal em tamanho normal
         glBegin(GL_QUADS);
            glVertex2f(0, 0);
            glVertex2f(w, 0);
            glVertex2f(w, h);
            glVertex2f(0, h);
         glEnd();
      } 
   //Se não tem o painel mas tem bordas  
   }else if(d->hasBorders){
      //Processo para desenhar as bordas
      glColor3f(d->borderColor.r, d->borderColor.g, d->borderColor.b);
      //Borda esquerda
      glBegin(GL_QUADS);
         glVertex2f(0,0);
         glVertex2f(0,h);
         glVertex2f(d->borderSize,h);
         glVertex2f(d->borderSize,0);
      glEnd();
      //Borda direita
      glBegin(GL_QUADS);
         glVertex2f(w - d->borderSize,0);
         glVertex2f(w - d->borderSize,h);
         glVertex2f(w,h);
         glVertex2f(w,0);
      glEnd();
      //Borda superior
      glBegin(GL_QUADS);
         glVertex2f(0,h);
         glVertex2f(w,h);
         glVertex2f(w,h-d->borderSize);
         glVertex2f(0,h-d->borderSize);
      glEnd();
      //Borda inferior
      glBegin(GL_QUADS);
         glVertex2f(0,0);
         glVertex2f(w,0);
         glVertex2f(w,d->borderSize);
         glVertex2f(0,d->borderSize);
      glEnd();
   }

   // grades (se existirem)
   if (d->hasBars) {
      glColor3f(d->color.r, d->color.g, d->color.b);
      for (int i = 0; i < d->verticalBars; i++) {
         float x = (i+1) * (w / (d->verticalBars + 1));
         glBegin(GL_QUADS);
               glVertex2f(x, 0);
               glVertex2f(x+0.4, 0);
               glVertex2f(x+0.4, h);
               glVertex2f(x, h);
         glEnd();
      }
      for (int i = 0; i < d->horizontalBars; i++) {
         float y = (i+1) * (h / (d->horizontalBars + 1));
         glBegin(GL_QUADS);
               glVertex2f(0, y);
               glVertex2f(w, y);
               glVertex2f(w, y+0.4);
               glVertex2f(0, y+0.4);
         glEnd();
      }
   }

   if (d->professorName[0] != '\0') { // Checa se o nome não está vazio
        drawPlaque(d->width, d->height, d->professorName);
    }

   glPopMatrix();

   // maçaneta
   glPushMatrix();
   glColor3f(d->handle.color.r, d->handle.color.g, d->handle.color.b);

   switch (d->handle.type) {
      case HANDLE_ROUND:
         glTranslatef(w * 0.8, h * 0.5, 0);
         glutSolidSphere(d->handle.size, 20, 20);
         break;

      case HANDLE_VERTICAL:
         glTranslatef(w * 0.85, h * 0.5, 0);
         glScalef(0.05, d->handle.size, 0.05);
         glutSolidCube(d->handle.size);
         break;

      case HANDLE_HORIZONTAL:
         glTranslatef(w * 0.8, h * 0.35, 0);
         glScalef(d->handle.size, 0.05, 0.05);
         glutSolidCube(2.0);
         break;

      default:
         break;
   }

   glPopMatrix();
}

/* void door(float angulo){
   float fx = 0.85;
   float fy = 0.1;
   float offset_superior = 0.05;
   float newbase = base/2;
   float coef_window = 0.05;
   float coef_grade = 0.01;

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

   //grades dverticais
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
void woodDoor(float angulo){
   float fx = 0.85;
   float fy = 0.1;
   float offset_superior = 0.05;
   float newbase = base/2;
   float coef_window = 0.05;
   float coef_grade = 0.01;

   glPushMatrix();
   glRotatef(angulo,0,1,0);
   brown; 
   glBegin(GL_QUADS);
      glVertex2f(0,0);
      glVertex2f(0,base*fx);
      glVertex2f(newbase,base*fx);
      glVertex2f(newbase,0);
   glEnd();
   glPopMatrix();
   //Maçaneta simplezinha
   glPushMatrix();
   gray;
   glTranslatef(newbase*fx, newbase, 0);
   glutSolidSphere(fx, 30, 10);
   glPopMatrix();

}*/
