#include "../include/furniture.h"
#include "../furnitures/ar_export.h"
#include "../furnitures/camera_export.h"
#include "../furnitures/computador_export.h"
#include "../furnitures/gabinete_export.h"
#include "../furnitures/pia_export.h"
#include "../furnitures/sofa_export.h"
#include "../furnitures/cadeiraU_export.h"
#include "../furnitures/mesaR_export.h"
#include "../furnitures/privada_export.h"
#include "../furnitures/tcadeiras_export.h"
#include "../furnitures/cadeiraLow_export.h"
#include <GL/gl.h>
#include <commons.h>

void drawCube(float w, float h, float d)
{
    // desenha um cubo centrado na origem
    float x = w/2.0f, y = h/2.0f, z = d/2.0f;

    glBegin(GL_QUADS);

    // Frente
    glNormal3f(0, 0, 1);
    glVertex3f(-x, -y,  z);
    glVertex3f( x, -y,  z);
    glVertex3f( x,  y,  z);
    glVertex3f(-x,  y,  z);

    // Trás
    glNormal3f(0, 0, -1);
    glVertex3f( x, -y, -z);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x,  y, -z);
    glVertex3f( x,  y, -z);

    // Esquerda
    glNormal3f(-1, 0, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x, -y,  z);
    glVertex3f(-x,  y,  z);
    glVertex3f(-x,  y, -z);

    // Direita
    glNormal3f(1, 0, 0);
    glVertex3f( x, -y,  z);
    glVertex3f( x, -y, -z);
    glVertex3f( x,  y, -z);
    glVertex3f( x,  y,  z);

    // Topo
    glNormal3f(0, 1, 0);
    glVertex3f(-x,  y,  z);
    glVertex3f( x,  y,  z);
    glVertex3f( x,  y, -z);
    glVertex3f(-x,  y, -z);

    // Base
    glNormal3f(0, -1, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f( x, -y, -z);
    glVertex3f( x, -y,  z);
    glVertex3f(-x, -y,  z);

    glEnd();
}


void geladeira_draw()
{
    glPushMatrix();
    glTranslatef(base*8.85, 20, base*3.85);
    glScalef(20, 20, 20);
    glRotatef(180, 0, 1, 0);

    glColor3f(0.85f, 0.85f, 0.9f); 

    drawCube(1.0f, 2.0f, 0.8f);  

    glPushMatrix();
        glTranslatef(0.0f, 0.6f, 0.41f); // desloca para a frente
        glScalef(0.95f, 0.45f, 1.0f);
        glColor3f(0.92f, 0.92f, 0.95f);

        drawCube(1.0f, 0.8f, 0.05f);
    glPopMatrix();

    glPushMatrix();
        glTranslatef(0.0f, -0.3f, 0.41f);
        glScalef(0.95f, 0.9f, 1.0f);
        glColor3f(0.93f, 0.93f, 0.96f);

        drawCube(1.0f, 1.6f, 0.05f);
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.7f, 0.7f, 0.75f);

        glTranslatef(0.45f, -0.3f, 0.45f);
        glScalef(0.05f, 0.7f, 0.05f);

        drawCube(1.0f, 1.0f, 1.0f);
    glPopMatrix();

    glPushMatrix();
        glColor3f(0.7f, 0.7f, 0.75f);

        glTranslatef(0.45f, 0.65f, 0.45f);
        glScalef(0.05f, 0.4f, 0.05f);

        drawCube(1.0f, 1.0f, 1.0f);
    glPopMatrix();

    glPopMatrix();
}

void balcao_draw()
{
    float w = 2.0f;  // largura = dobro da geladeira
    float h = 2.0f;  // altura igual à geladeira
    float d = 5.0f;  // comprimento solicitado

    float x = w / 2.0f;
    float y = h / 2.0f;
    float z = d / 2.0f;
    glPushMatrix();
    glTranslatef(base*9.3, 10, base*3.85);
    glScalef(4.9, 10, 10);
    glRotatef(90, 0, 1, 0);
    glBegin(GL_QUADS);

    // Frente
    glNormal3f(0, 0, 1);
    glVertex3f(-x, -y,  z);
    glVertex3f( x, -y,  z);
    glVertex3f( x,  y,  z);
    glVertex3f(-x,  y,  z);

    // Trás
    glNormal3f(0, 0, -1);
    glVertex3f( x, -y, -z);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x,  y, -z);
    glVertex3f( x,  y, -z);

    // Esquerda
    glNormal3f(-1, 0, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x, -y,  z);
    glVertex3f(-x,  y,  z);
    glVertex3f(-x,  y, -z);

    // Direita
    glNormal3f(1, 0, 0);
    glVertex3f( x, -y,  z);
    glVertex3f( x, -y, -z);
    glVertex3f( x,  y, -z);
    glVertex3f( x,  y,  z);

    // Topo
    glNormal3f(0, 1, 0);
    glVertex3f(-x,  y,  z);
    glVertex3f( x,  y,  z);
    glVertex3f( x,  y, -z);
    glVertex3f(-x,  y, -z);

    // Base
    glNormal3f(0, -1, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f( x, -y, -z);
    glVertex3f( x, -y,  z);
    glVertex3f(-x, -y,  z);

    glEnd();
    glPopMatrix();
}

void balcao2_draw()
{
    float h_total = 2.0f;        
    float h = h_total / 4.0f;   
    float w = 2.0f / 3.0f;      
    float d = 5.0f;              

    float centerY = 1.0f - (h / 2.0f);

    float x = w / 2.0f;
    float y = h / 2.0f;
    float z = d / 2.0f;

    glPushMatrix();
    glTranslatef(0.0f, centerY, 0.0f);
    glPushMatrix();
    glTranslatef(base*9.5, 17, base*3.85);
    glScalef(9, 10, 20);
    glRotatef(90, 0, 1, 0);
    glBegin(GL_QUADS);

    // Frente
    glNormal3f(0, 0, 1);
    glVertex3f(-x, -y,  z);
    glVertex3f( x, -y,  z);
    glVertex3f( x,  y,  z);
    glVertex3f(-x,  y,  z);

    // Trás
    glNormal3f(0, 0, -1);
    glVertex3f( x, -y, -z);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x,  y, -z);
    glVertex3f( x,  y, -z);

    // Esquerda
    glNormal3f(-1, 0, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x, -y,  z);
    glVertex3f(-x,  y,  z);
    glVertex3f(-x,  y, -z);

    // Direita
    glNormal3f(1, 0, 0);
    glVertex3f( x, -y,  z);
    glVertex3f( x, -y, -z);
    glVertex3f( x,  y, -z);
    glVertex3f( x,  y,  z);

    // Topo
    glNormal3f(0, 1, 0);
    glVertex3f(-x,  y,  z);
    glVertex3f( x,  y,  z);
    glVertex3f( x,  y, -z);
    glVertex3f(-x,  y, -z);

    // Base
    glNormal3f(0, -1, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f( x, -y, -z);
    glVertex3f( x, -y,  z);
    glVertex3f(-x, -y,  z);

    glEnd();

    glPopMatrix();
    glPopMatrix();
}

void drawCubeUnit() {
    glBegin(GL_QUADS);

    // Frente
    glNormal3f(0, 0, 1);
    glVertex3f(-0.5, -0.5,  0.5);
    glVertex3f( 0.5, -0.5,  0.5);
    glVertex3f( 0.5,  0.5,  0.5);
    glVertex3f(-0.5,  0.5,  0.5);

    // Trás
    glNormal3f(0, 0, -1);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5,  0.5, -0.5);
    glVertex3f( 0.5,  0.5, -0.5);
    glVertex3f( 0.5, -0.5, -0.5);

    // Esquerda
    glNormal3f(-1, 0, 0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5,  0.5);
    glVertex3f(-0.5,  0.5,  0.5);
    glVertex3f(-0.5,  0.5, -0.5);

    // Direita
    glNormal3f(1, 0, 0);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5,  0.5, -0.5);
    glVertex3f(0.5,  0.5,  0.5);
    glVertex3f(0.5, -0.5,  0.5);

    // Topo
    glNormal3f(0, 1, 0);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5,  0.5);
    glVertex3f( 0.5, 0.5,  0.5);
    glVertex3f( 0.5, 0.5, -0.5);

    // Base
    glNormal3f(0, -1, 0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f( 0.5, -0.5, -0.5);
    glVertex3f( 0.5, -0.5,  0.5);
    glVertex3f(-0.5, -0.5,  0.5);

    glEnd();
}

void monitor_draw()
{
    glPushMatrix(); // tudo relativo a 0,0,0

    // Opcional: cor do corpo (base + suporte)
    glColor3f(0.2f, 0.2f, 0.2f);

    // ---------- BASE (retângulo deitado) ----------
    // queremos que a base toque o chão => altura da base = 0.1, centro em y = 0.05
    glPushMatrix();
        glTranslatef(0.0f, 0.05f, 0.0f);   // y = 0.05
        glScalef(0.8f, 0.1f, 0.5f);        // largura X, altura Y, profundidade Z
        drawCubeUnit();
    glPopMatrix();

    // ---------- SUPORTE (retângulo em pé) ----------
    // suporte estreito ligando base à tela
    glPushMatrix();
        glTranslatef(0.0f, 0.45f, 0.0f);   // centro do suporte
        glScalef(0.08f, 0.8f, 0.06f);      // bem fino
        drawCubeUnit();
    glPopMatrix();

    // ---------- TELA (retângulo largo e fino) ----------
    // desenhar levemente à frente (z positivo) para parecer que está "na frente" do suporte
    // tela é fina em Z
    glPushMatrix();
        glColor3f(0.0f, 0.0f, 0.0f);       // cor da moldura/painel
        glTranslatef(0.0f, 1.05f, 0.08f);  // centro da tela
        glScalef(1.2f, 0.9f, 0.06f);       // largura, altura, profundidade fina
        drawCubeUnit();
    glPopMatrix();

    // ---------- PANTALLA (área "ativa" dentro da moldura) ----------
    // pintar um retângulo um pouco mais fino e deslocado para frente para parecer a área da tela
    glPushMatrix();
        glColor3f(0.05f, 0.05f, 0.2f);     // "preto azulado" da tela
        glTranslatef(0.0f, 1.05f, 0.095f); // um pouco mais à frente que a moldura
        glScalef(1.05f, 0.75f, 0.02f);     // ligeiramente menor que a moldura
        drawCubeUnit();
    glPopMatrix();

    // reset de cor para evitar vazamento
    glColor3f(1.0f, 1.0f, 1.0f);

    glPopMatrix();
}

static void cadeiraSimples_draw() {

    // --- Assento ---
    glPushMatrix();
        glColor3f(0.7f,0.6f,0.4f);
        glTranslatef(0,0.5,0);
        glScalef(0.6f,0.1f,0.6f);
        drawCubeUnit();
    glPopMatrix();

    // --- Pernas (4) ---
    // posições em X e Z: ±0.25
    float px = 0.25f;
    float pz = 0.25f;

    for(int ix=-1; ix<=1; ix+=2) {
        for(int iz=-1; iz<=1; iz+=2) {
            glPushMatrix();
                glColor3f(0.4f,0.3f,0.2f);
                glTranslatef(px*ix,0.25,pz*iz);
                glScalef(0.1f,0.5f,0.1f);
                drawCubeUnit();
            glPopMatrix();
        }
    }

    // --- Encosto ---
    glPushMatrix();
        glColor3f(0.7f,0.6f,0.4f);
        glTranslatef(0,0.95,-0.25f);
        glScalef(0.6f,0.8f,0.1f);
        drawCubeUnit();
    glPopMatrix();
}

void mesaComCadeiras_draw() {

    // ----- Mesa -----
    glPushMatrix();
        glColor3f(0.65f,0.45f,0.25f);

        // Tampo
        glPushMatrix();
            glTranslatef(0,1.0,0);
            glScalef(2.0f,0.1f,1.2f);
            drawCubeUnit();
        glPopMatrix();

        // Pernas da mesa
        float px = 0.8f, pz = 0.45f;
        for(int ix=-1; ix<=1; ix+=2) {
            for(int iz=-1; iz<=1; iz+=2) {
                glPushMatrix();
                    glTranslatef(px*ix,0.5,pz*iz);
                    glScalef(0.1f,1.0f,0.1f);
                    drawCubeUnit();
                glPopMatrix();
            }
        }
    glPopMatrix();

    // ----- 4 Cadeiras -----

    // Frente direita
    glPushMatrix();
        glTranslatef(0.0f, 0.0f, 1.2f);
        glRotatef(180,0,1,0);
        cadeiraSimples_draw();
    glPopMatrix();

    // Frente esquerda
    glPushMatrix();
        glTranslatef(0.0f, 0.0f, -1.2f);
        glRotatef(0,0,1,0);
        cadeiraSimples_draw();
    glPopMatrix();

    // Trás direita
    glPushMatrix();
        glTranslatef(-1.7f, 0.0f, 0.0f);
        glRotatef(90,0,1,0);
        cadeiraSimples_draw();
    glPopMatrix();

    // Trás esquerda
    glPushMatrix();
        glTranslatef(1.7f, 0.0f, 0.0f);
        glRotatef(270,0,1,0);
        cadeiraSimples_draw();
    glPopMatrix();
}

void primeiro_andar_moveis(){
    // refeitorio
    glPushMatrix();
    geladeira_draw();
    glPopMatrix();

    glPushMatrix();
    balcao_draw();
    glPushMatrix();
    glTranslatef(0, 40, 0);
    glScalef(1, 0.5, 1);
    balcao_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(20, 40, 0);
    glScalef(1, 0.5, 1);
    balcao_draw();
    glPopMatrix();
    glPushMatrix();
    balcao2_draw();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base*9.3, 20, base*3.8);
    glScalef(0.8, 0.8, 0.8);
    glRotatef(90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base*9, 5, base*2.3);
    glRotatef(-90, 0, 1, 0);
    glScalef(0.5, 0.5, 0.5);
    sofa_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base*9, 5, base*3);
    glScalef(10, 10, 10);
    mesaComCadeiras_draw();
    glPopMatrix();

    // moveis internos fora de salas
    glPushMatrix();
    glTranslatef(base*2.9, 20, base*1.25); // armários
    glScalef(20, 20, 20);
    brown
    drawCube(0.5, 2, 1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*2.9, 20, base*1.75);
    glScalef(20, 20, 20);
    white_shadow
    drawCube(0.5, 2, 1);
    glPopMatrix();

    glPushMatrix(); // quadros de avisos
    blue
    glTranslatef(base*5.5, 30, base*4);
    glScalef(30, 10, 5);
    drawCube(1, 3, 1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*3, 30, base*3.5);
    glScalef(5, 10, 30);
    drawCube(1, 3, 1);
    glPopMatrix();

    // Banheiro F
    glPushMatrix();
    white_shadow
    glTranslatef(base*0.85, 15, base*3.75);
    glRotatef(180, 0, 1, 0);
    glScalef(0.3, 0.75, 0.45);
    privada_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
    glTranslatef(base*0.85, 15, base*3.5);
    glRotatef(180, 0, 1, 0);
    glScalef(0.3, 0.75, 0.45);
    privada_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
    glTranslatef(base*0.85, 15, base*3.25);
    glRotatef(180, 0, 1, 0);
    glScalef(0.3, 0.75, 0.45);
    privada_draw();
    glPopMatrix();

    glPushMatrix();
    white_shadow
    glTranslatef(base*0.2, 20, base*3.5);
    glScalef(0.4, 0.4, 0.4);
    pia_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
    glTranslatef(base*0.2, 20, base*3.25);
    glScalef(0.4, 0.4, 0.4);
    pia_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
    glTranslatef(base*0.2, 20, base*3.75);
    glScalef(0.4, 0.4, 0.4);
    pia_draw();
    glPopMatrix();

    // Banheiro M
    glPushMatrix();
    white_shadow
    glTranslatef(base*9.85, 15, base*4.25);
    glRotatef(180, 0, 1, 0);
    glScalef(0.3, 0.75, 0.45);
    privada_draw();
    glPopMatrix();

    glPushMatrix();
    white_shadow
    glTranslatef(base*9.1, 20, base*4.25);
    glScalef(0.4, 0.4, 0.4);
    pia_draw();
    glPopMatrix();

    // LIPAI
    glPushMatrix();
    white_shadow
    glTranslatef(base*0.5, 20, base*1.75);
    glRotatef(180, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
    glTranslatef(base*1.20, 20, base*1.75);
    glRotatef(180, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
    glTranslatef(base*1.70, 20, base*1.15);
    glRotatef(270, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
    glTranslatef(base*0.30, 20, base*1.2);
    glRotatef(90, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
    glTranslatef(base*0.30, 20, base*0.5);
    glRotatef(90, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
    glTranslatef(base*1.20, 20, base*0.25);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    

    glPushMatrix();
    glTranslatef(base*0.5, 25, base*1.75);
    glScalef(10, 10, 10);
    glRotatef(180, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*1.2, 25, base*1.75);
    glScalef(10, 10, 10);
    glRotatef(180, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*1.7, 25, base*1.15);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*0.3, 25, base*1.2);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*0.3, 25, base*0.5);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*1.2, 25, base*0.25);
    glScalef(10, 10, 10);
    //glRotatef(180, 0, 1, 0);
    monitor_draw();
    glPopMatrix();

    black
    glPushMatrix();
    glTranslatef(base*0.5, 12, base*1.52);
   // glRotatef(180, 0, 1, 0);
    glScalef(1.2, 1.2, 1.2);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*1.2, 12, base*1.52);
   // glRotatef(180, 0, 1, 0);
    glScalef(1.2, 1.2, 1.2);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*1.47, 12, base*1.15);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*0.53, 12, base*1.2);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*0.53, 12, base*0.5);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*1.2, 12, base*0.48);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-180, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();

    //LIDIA
    glPushMatrix();
    white_shadow
    glTranslatef(base*4.95, 20, base*8);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*4.95, 20, base*7.3);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*4.95, 20, base*6.6);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*4.95, 20, base*5.9);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base*5.15, 20, base*8);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*5.15, 20, base*7.3);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*5.15, 20, base*6.6);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*5.15, 20, base*5.9);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix();
    black
    glTranslatef(base*4.95, 25, base*8);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*4.95, 25, base*7.3);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*4.95, 25, base*6.6);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*4.95, 25, base*5.9);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base*5.15, 25, base*8);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*5.15, 25, base*7.3);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*5.15, 25, base*6.6);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*5.15, 25, base*5.9);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();

    glPushMatrix();
    black
    glTranslatef(base*4.72, 12, base*8);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*4.72, 12, base*7.3);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*4.72, 12, base*6.6);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*4.72, 12, base*5.9);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base*5.38, 12, base*8);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*5.38, 12, base*7.3);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*5.38, 12, base*6.6);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base*5.38, 12, base*5.9);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
}