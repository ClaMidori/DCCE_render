#include "../include/furniture.h"
#include "../furnitures/ar_export.h"
#include "../furnitures/camera_export.h"
#include "../furnitures/computador_export.h"
#include "../furnitures/gabinete_export.h"
#include "../furnitures/pia_export.h"
#include "../furnitures/sofa_export.h"
#include "../furnitures/cestoLixo_export.h"
#include "../furnitures/canetas_export.h"
#include "../furnitures/tcadeiras_export.h"
#include "../furnitures/cadeiraLow_export.h"
#include "../furnitures/mesaL_export.h"
#include "../furnitures/mesaR_export.h"
#include "../furnitures/privada_export.h"
#include "../furnitures/vaso_export.h"
#include "../furnitures/botoesP_export.h"
#include "../furnitures/baseP_export.h"
#include "../furnitures/portasP_export.h"
#include "../include/commons.h"
#include <GL/gl.h>

void teste_objetos()
{
    // referencia
    // Y, Z, X

    /*glPushMatrix();
    glTranslatef(2.40 * base, (base + betw_height) + (3.5 * ground_offset), 5.17 * base);
    glScalef(0.5, 0.5, 0.5);
    glRotatef(-90, 0, 1, 0);
    pia_draw();
    glPopMatrix();
    */
}

void drawCube(float w, float h, float d)
{
    // desenha um cubo centrado na origem
    float x = w / 2.0f, y = h / 2.0f, z = d / 2.0f;

    glBegin(GL_QUADS);

    // Frente
    glNormal3f(0, 0, 1);
    glVertex3f(-x, -y, z);
    glVertex3f(x, -y, z);
    glVertex3f(x, y, z);
    glVertex3f(-x, y, z);

    // Trás
    glNormal3f(0, 0, -1);
    glVertex3f(x, -y, -z);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x, y, -z);
    glVertex3f(x, y, -z);

    // Esquerda
    glNormal3f(-1, 0, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x, -y, z);
    glVertex3f(-x, y, z);
    glVertex3f(-x, y, -z);

    // Direita
    glNormal3f(1, 0, 0);
    glVertex3f(x, -y, z);
    glVertex3f(x, -y, -z);
    glVertex3f(x, y, -z);
    glVertex3f(x, y, z);

    // Topo
    glNormal3f(0, 1, 0);
    glVertex3f(-x, y, z);
    glVertex3f(x, y, z);
    glVertex3f(x, y, -z);
    glVertex3f(-x, y, -z);

    // Base
    glNormal3f(0, -1, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f(x, -y, -z);
    glVertex3f(x, -y, z);
    glVertex3f(-x, -y, z);

    glEnd();
}

void geladeira_draw()
{
    glPushMatrix();
    glTranslatef(base * 8.85, 20, base * 3.85);
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
    float w = 2.0f; // largura = dobro da geladeira
    float h = 2.0f; // altura igual à geladeira
    float d = 5.0f; // comprimento solicitado

    float x = w / 2.0f;
    float y = h / 2.0f;
    float z = d / 2.0f;
    glPushMatrix();
    glTranslatef(base * 9.3, 10, base * 3.85);
    glScalef(4.9, 10, 10);
    glRotatef(90, 0, 1, 0);
    glBegin(GL_QUADS);

    // Frente
    glNormal3f(0, 0, 1);
    glVertex3f(-x, -y, z);
    glVertex3f(x, -y, z);
    glVertex3f(x, y, z);
    glVertex3f(-x, y, z);

    // Trás
    glNormal3f(0, 0, -1);
    glVertex3f(x, -y, -z);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x, y, -z);
    glVertex3f(x, y, -z);

    // Esquerda
    glNormal3f(-1, 0, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x, -y, z);
    glVertex3f(-x, y, z);
    glVertex3f(-x, y, -z);

    // Direita
    glNormal3f(1, 0, 0);
    glVertex3f(x, -y, z);
    glVertex3f(x, -y, -z);
    glVertex3f(x, y, -z);
    glVertex3f(x, y, z);

    // Topo
    glNormal3f(0, 1, 0);
    glVertex3f(-x, y, z);
    glVertex3f(x, y, z);
    glVertex3f(x, y, -z);
    glVertex3f(-x, y, -z);

    // Base
    glNormal3f(0, -1, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f(x, -y, -z);
    glVertex3f(x, -y, z);
    glVertex3f(-x, -y, z);

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
    glTranslatef(base * 9.5, 17, base * 3.85);
    glScalef(9, 10, 20);
    glRotatef(90, 0, 1, 0);
    glBegin(GL_QUADS);

    // Frente
    glNormal3f(0, 0, 1);
    glVertex3f(-x, -y, z);
    glVertex3f(x, -y, z);
    glVertex3f(x, y, z);
    glVertex3f(-x, y, z);

    // Trás
    glNormal3f(0, 0, -1);
    glVertex3f(x, -y, -z);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x, y, -z);
    glVertex3f(x, y, -z);

    // Esquerda
    glNormal3f(-1, 0, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f(-x, -y, z);
    glVertex3f(-x, y, z);
    glVertex3f(-x, y, -z);

    // Direita
    glNormal3f(1, 0, 0);
    glVertex3f(x, -y, z);
    glVertex3f(x, -y, -z);
    glVertex3f(x, y, -z);
    glVertex3f(x, y, z);

    // Topo
    glNormal3f(0, 1, 0);
    glVertex3f(-x, y, z);
    glVertex3f(x, y, z);
    glVertex3f(x, y, -z);
    glVertex3f(-x, y, -z);

    // Base
    glNormal3f(0, -1, 0);
    glVertex3f(-x, -y, -z);
    glVertex3f(x, -y, -z);
    glVertex3f(x, -y, z);
    glVertex3f(-x, -y, z);

    glEnd();

    glPopMatrix();
    glPopMatrix();
}

void drawCubeUnit()
{
    glBegin(GL_QUADS);

    // Frente
    glNormal3f(0, 0, 1);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);

    // Trás
    glNormal3f(0, 0, -1);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);

    // Esquerda
    glNormal3f(-1, 0, 0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, -0.5);

    // Direita
    glNormal3f(1, 0, 0);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);

    // Topo
    glNormal3f(0, 1, 0);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, 0.5, -0.5);

    // Base
    glNormal3f(0, -1, 0);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(-0.5, -0.5, 0.5);

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
    glTranslatef(0.0f, 0.05f, 0.0f); // y = 0.05
    glScalef(0.8f, 0.1f, 0.5f);      // largura X, altura Y, profundidade Z
    drawCubeUnit();
    glPopMatrix();

    // ---------- SUPORTE (retângulo em pé) ----------
    // suporte estreito ligando base à tela
    glPushMatrix();
    glTranslatef(0.0f, 0.45f, 0.0f); // centro do suporte
    glScalef(0.08f, 0.8f, 0.06f);    // bem fino
    drawCubeUnit();
    glPopMatrix();

    // ---------- TELA (retângulo largo e fino) ----------
    // desenhar levemente à frente (z positivo) para parecer que está "na frente" do suporte
    // tela é fina em Z
    glPushMatrix();
    glColor3f(0.0f, 0.0f, 0.0f);      // cor da moldura/painel
    glTranslatef(0.0f, 1.05f, 0.08f); // centro da tela
    glScalef(1.2f, 0.9f, 0.06f);      // largura, altura, profundidade fina
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

static void cadeiraSimples_draw()
{

    // --- Assento ---
    glPushMatrix();
    glColor3f(0.7f, 0.6f, 0.4f);
    glTranslatef(0, 0.5, 0);
    glScalef(0.6f, 0.1f, 0.6f);
    drawCubeUnit();
    glPopMatrix();

    // --- Pernas (4) ---
    // posições em X e Z: ±0.25
    float px = 0.25f;
    float pz = 0.25f;

    for (int ix = -1; ix <= 1; ix += 2)
    {
        for (int iz = -1; iz <= 1; iz += 2)
        {
            glPushMatrix();
            glColor3f(0.4f, 0.3f, 0.2f);
            glTranslatef(px * ix, 0.25, pz * iz);
            glScalef(0.1f, 0.5f, 0.1f);
            drawCubeUnit();
            glPopMatrix();
        }
    }

    // --- Encosto ---
    glPushMatrix();
    glColor3f(0.7f, 0.6f, 0.4f);
    glTranslatef(0, 0.95, -0.25f);
    glScalef(0.6f, 0.8f, 0.1f);
    drawCubeUnit();
    glPopMatrix();
}

void mesaComCadeiras_draw()
{

    // ----- Mesa -----
    glPushMatrix();
    glColor3f(0.65f, 0.45f, 0.25f);

    // Tampo
    glPushMatrix();
    glTranslatef(0, 1.0, 0);
    glScalef(2.0f, 0.1f, 1.2f);
    drawCubeUnit();
    glPopMatrix();

    // Pernas da mesa
    float px = 0.8f, pz = 0.45f;
    for (int ix = -1; ix <= 1; ix += 2)
    {
        for (int iz = -1; iz <= 1; iz += 2)
        {
            glPushMatrix();
            glTranslatef(px * ix, 0.5, pz * iz);
            glScalef(0.1f, 1.0f, 0.1f);
            drawCubeUnit();
            glPopMatrix();
        }
    }
    glPopMatrix();

    // ----- 4 Cadeiras -----

    // Frente direita
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 1.2f);
    glRotatef(180, 0, 1, 0);
    cadeiraSimples_draw();
    glPopMatrix();

    // Frente esquerda
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, -1.2f);
    glRotatef(0, 0, 1, 0);
    cadeiraSimples_draw();
    glPopMatrix();

    // Trás direita
    glPushMatrix();
    glTranslatef(-1.7f, 0.0f, 0.0f);
    glRotatef(90, 0, 1, 0);
    cadeiraSimples_draw();
    glPopMatrix();

    // Trás esquerda
    glPushMatrix();
    glTranslatef(1.7f, 0.0f, 0.0f);
    glRotatef(270, 0, 1, 0);
    cadeiraSimples_draw();
    glPopMatrix();
}

void cadeiraEsc_draw()
{

    // --- Pernas ---
    glColor3f(0.2f, 0.15f, 0.05f); // cor madeira escura

    // perna frontal esquerda
    glPushMatrix();
    glTranslatef(-0.35f, -0.5f, 0.25f);
    glScalef(0.1f, 0.6f, 0.1f);
    drawCubeUnit();
    glPopMatrix();

    // perna frontal direita
    glPushMatrix();
    glTranslatef(0.35f, -0.5f, 0.25f);
    glScalef(0.1f, 0.6f, 0.1f);
    drawCubeUnit();
    glPopMatrix();

    // perna traseira esquerda
    glPushMatrix();
    glTranslatef(-0.35f, -0.5f, -0.25f);
    glScalef(0.1f, 0.8f, 0.1f);
    drawCubeUnit();
    glPopMatrix();

    // perna traseira direita
    glPushMatrix();
    glTranslatef(0.35f, -0.5f, -0.25f);
    glScalef(0.1f, 0.8f, 0.1f);
    drawCubeUnit();
    glPopMatrix();

    // --- Assento ---
    glPushMatrix();
    glColor3f(0.7f, 0.5f, 0.3f);
    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(0.9f, 0.12f, 0.7f);
    drawCubeUnit();
    glPopMatrix();

    // --- Encosto ---
    glPushMatrix();
    glColor3f(0.7f, 0.5f, 0.3f);
    glTranslatef(0.0f, 0.28f, -0.25f);
    glScalef(0.85f, 1.2f, 0.12f);
    drawCubeUnit();
    glPopMatrix();

    // --- Estrutura metálica (barras de suporte) ---
    glColor3f(0.45f, 0.45f, 0.45f);

    // barra frontal
    glPushMatrix();
    glTranslatef(0.0f, -0.35f, 0.35f);
    glScalef(0.8f, 0.06f, 0.06f);
    drawCubeUnit();
    glPopMatrix();

    // barra traseira
    glPushMatrix();
    glTranslatef(0.0f, -0.35f, -0.35f);
    glScalef(0.8f, 0.06f, 0.06f);
    drawCubeUnit();
    glPopMatrix();

    // lateral esquerda
    glPushMatrix();
    glTranslatef(-0.45f, -0.25f, 0.0f);
    glScalef(0.06f, 0.6f, 0.06f);
    drawCubeUnit();
    glPopMatrix();

    // lateral direita
    glPushMatrix();
    glTranslatef(0.45f, -0.25f, 0.0f);
    glScalef(0.06f, 0.6f, 0.06f);
    drawCubeUnit();
    glPopMatrix();

    // --- Braço metálico da prancheta ---

    glColor3f(0.45f, 0.45f, 0.45f);

    // vertical
    glPushMatrix();
    glTranslatef(0.65f, -0.1f, 0.15f);
    glScalef(0.06f, 0.6f, 0.06f);
    drawCubeUnit();
    glPopMatrix();

    // horizontal
    glPushMatrix();
    glTranslatef(0.4f, 0.15f, 0.15f);
    glScalef(0.5f, 0.06f, 0.06f);
    drawCubeUnit();
    glPopMatrix();

    // --- Prancheta ---
    glPushMatrix();
    glColor3f(0.6f, 0.45f, 0.3f);
    glTranslatef(0.3f, 0.22f, 0.15f);
    // glRotatef(-12.0f, 0, 0, 1);
    glScalef(0.45f, 0.02f, 0.28f);
    drawCubeUnit();
    glPopMatrix();
}

static void estante_drawPrateleira(float h, float largura, float profundidade, float espPrateleira)
{
    glPushMatrix();
    glTranslatef(0.0f, h, 0.0f);
    glScalef(largura, espPrateleira, profundidade);
    drawCubeUnit();
    glPopMatrix();
}

// ---- Estante com pés retangulares ----
void estanteFerro_draw()
{
    // Dimensões gerais
    float largura = 1.0f;       // X
    float profundidade = 0.30f; // Z
    float altura = 1.80f;       // Y

    // Pés retangulares
    float espPéX = 0.05f;
    float espPéZ = 0.05f;

    float espPrateleira = 0.04f;

    // Altura das prateleiras (valores para o centro das prateleiras)
    float h1 = 0.10f;
    float h2 = 0.90f;
    float h3 = 1.70f;

    // --------- PÉS RETANGULARES ---------
    glColor3f(0.25f, 0.25f, 0.25f); // ferro escuro

    // Note: quando escalamos o cubo (centro em y=0), deslocamos para altura/2
    // para que a base do pé fique no y=0 (chão).
    float péCenterY = altura * 0.5f;

    // Pé frontal esquerdo
    glPushMatrix();
    glTranslatef(-largura / 2.0f, péCenterY, -profundidade / 2.0f);
    glScalef(espPéX, altura, espPéZ);
    drawCubeUnit();
    glPopMatrix();

    // Pé frontal direito
    glPushMatrix();
    glTranslatef(largura / 2.0f, péCenterY, -profundidade / 2.0f);
    glScalef(espPéX, altura, espPéZ);
    drawCubeUnit();
    glPopMatrix();

    // Pé traseiro esquerdo
    glPushMatrix();
    glTranslatef(-largura / 2.0f, péCenterY, profundidade / 2.0f);
    glScalef(espPéX, altura, espPéZ);
    drawCubeUnit();
    glPopMatrix();

    // Pé traseiro direito
    glPushMatrix();
    glTranslatef(largura / 2.0f, péCenterY, profundidade / 2.0f);
    glScalef(espPéX, altura, espPéZ);
    drawCubeUnit();
    glPopMatrix();

    // --------- PRATELEIRAS ---------
    glColor3f(0.75f, 0.75f, 0.75f); // cor das prateleiras

    estante_drawPrateleira(h1, largura, profundidade, espPrateleira);
    estante_drawPrateleira(h2, largura, profundidade, espPrateleira);
    estante_drawPrateleira(h3, largura, profundidade, espPrateleira);
}

void bancoEspera_draw()
{
    // ====== DIMENSÕES ======
    float larguraAssento = 0.55f;
    float profundidadeAssento = 0.55f;
    float alturaAssento = 0.45f;

    float alturaEncosto = 0.40f;
    float espessuraAssento = 0.05f;
    float espessuraEncosto = 0.05f;

    float espessuraBarra = 0.06f;
    float alturaBarra = 0.30f;

    float larguraTotal = 3.0f * larguraAssento + 0.20f; // pequena folga

    // Dimensões dos pés
    float péLarg = 0.08f;
    float péProf = 0.25f;
    float péAlt = 0.35f;

    // ====== BARRA SUPERIOR ======
    glColor3f(0.25f, 0.25f, 0.25f); // ferro

    glPushMatrix();
    glTranslatef(0, alturaBarra, 0);
    glScalef(larguraTotal, espessuraBarra, espessuraBarra);
    drawCubeUnit();
    glPopMatrix();

    // ====== PÉS ======
    // Pé esquerdo
    glPushMatrix();
    glTranslatef(-larguraTotal / 2 + péLarg, péAlt / 2, 0);
    glScalef(péLarg, péAlt, péProf);
    drawCubeUnit();
    glPopMatrix();

    // Pé direito
    glPushMatrix();
    glTranslatef(larguraTotal / 2 - péLarg, péAlt / 2, 0);
    glScalef(péLarg, péAlt, péProf);
    drawCubeUnit();
    glPopMatrix();

    // ====== 3 ASSENTOS ======
    for (int i = 0; i < 3; i++)
    {
        float offsetX = -larguraTotal / 2 + larguraAssento / 2 + i * larguraAssento;

        // ---- Assento ----
        white_shadow

        glPushMatrix();
        glTranslatef(offsetX, alturaAssento, 0);
        glScalef(larguraAssento, espessuraAssento, profundidadeAssento);
        drawCubeUnit();
        glPopMatrix();

        // ---- Encosto ----
        glPushMatrix();
        glTranslatef(offsetX, alturaAssento + alturaEncosto / 2 + espessuraAssento / 2, -profundidadeAssento / 2 + espessuraEncosto / 2);
        glScalef(larguraAssento, alturaEncosto, espessuraEncosto);
        drawCubeUnit();
        glPopMatrix();
    }
}

void primeiro_andar_moveis()
{
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
    glTranslatef(base * 9.3, 20, base * 3.8);
    glScalef(0.8, 0.8, 0.8);
    glRotatef(90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 9, 5, base * 2.3);
    glRotatef(-90, 0, 1, 0);
    glScalef(0.5, 0.5, 0.5);
    sofa_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 9, 5, base * 3);
    glScalef(10, 10, 10);
    mesaComCadeiras_draw();
    glPopMatrix();

    // moveis internos fora de salas
    glPushMatrix();
    glTranslatef(base * 2.9, 20, base * 1.25); // armários
    glScalef(20, 20, 20);
    brown
        drawCube(0.5, 2, 1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 2.9, 20, base * 1.75);
    glScalef(20, 20, 20);
    white_shadow
        drawCube(0.5, 2, 1);
    glPopMatrix();

    glPushMatrix(); // quadros de avisos
    blue
        glTranslatef(base * 5.5, 30, base * 4);
    glScalef(30, 10, 5);
    drawCube(1, 3, 1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3, 30, base * 3.5);
    glScalef(5, 10, 30);
    drawCube(1, 3, 1);
    glPopMatrix();

    // cadeira recepção
    white_shadow
    glPushMatrix();
    glTranslatef(base * 3.2, 0, base * 3.5);
    glRotatef(90, 0, 1, 0);
    glScalef(20, 20, 20);
    bancoEspera_draw();
    glPopMatrix();

    // Banheiro F
    glPushMatrix();
    white_shadow
        glTranslatef(base * 0.75, 15, base * 3.125);
    glRotatef(-90, 0, 1, 0);
    glScalef(0.3, 0.75, 0.45);
    privada_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
        glTranslatef(base * 0.25, 15, base * 3.125);
    glRotatef(-90, 0, 1, 0);
    glScalef(0.3, 0.75, 0.45);
    privada_draw();
    glPopMatrix();

    glColor3f(0.2, 0.2, 0.2);
    glPushMatrix();
    glTranslatef(base * 0.5, 25, base * 3.3);
    glScalef(1, 50, 23);
    drawCubeUnit();
    glPopMatrix();

    brown
    glPushMatrix();
    glTranslatef(base * 0.5, 25, base * 3.5);
    glScalef(42, 40, 1);
    drawCubeUnit();
    glPopMatrix();

    glPushMatrix();
    white_shadow
        glTranslatef(base * 0.35, 20, base * 4.85);
    glScalef(0.4, 0.4, 0.4);
    glRotatef(90, 0, 1, 0);
    pia_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
        glTranslatef(base * 0.65, 20, base * 4.85);
    glRotatef(90, 0, 1, 0);
    glScalef(0.4, 0.4, 0.4);
    pia_draw();
    glPopMatrix();

    // Banheiro M
    glPushMatrix();
    white_shadow
        glTranslatef(base * 9.85, 15, base * 4.25);
    glRotatef(180, 0, 1, 0);
    glScalef(0.3, 0.75, 0.45);
    privada_draw();
    glPopMatrix();

    glColor3f(0.2, 0.2, 0.2);
    glPushMatrix();
    glTranslatef(base * 9.7, 25, base * 4.5);
    glScalef(23, 50, 1);
    drawCubeUnit();
    glPopMatrix();

    brown
    glPushMatrix();
    glTranslatef(base * 9.55, 25, base * 4.25);
    glScalef(1, 40, 23.5);
    drawCubeUnit();
    glPopMatrix();

    glPushMatrix();
    white_shadow
        glTranslatef(base * 9.1, 20, base * 4.25);
    glScalef(0.4, 0.4, 0.4);
    pia_draw();
    glPopMatrix();

    // LIPAI
    glPushMatrix();
    white_shadow
        glTranslatef(base * 0.5, 20, base * 1.75);
    glRotatef(180, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
        glTranslatef(base * 1.20, 20, base * 1.75);
    glRotatef(180, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
        glTranslatef(base * 1.70, 20, base * 1.15);
    glRotatef(270, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
        glTranslatef(base * 0.30, 20, base * 1.2);
    glRotatef(90, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
        glTranslatef(base * 0.30, 20, base * 0.5);
    glRotatef(90, 0, 1, 0);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    white_shadow
        glTranslatef(base * 1.20, 20, base * 0.25);
    glScalef(1.5, 1.5, 1.5);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 0.5, 25, base * 1.75);
    glScalef(10, 10, 10);
    glRotatef(180, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 1.2, 25, base * 1.75);
    glScalef(10, 10, 10);
    glRotatef(180, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 1.7, 25, base * 1.15);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 0.3, 25, base * 1.2);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 0.3, 25, base * 0.5);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 1.2, 25, base * 0.25);
    glScalef(10, 10, 10);
    // glRotatef(180, 0, 1, 0);
    monitor_draw();
    glPopMatrix();

    black
    glPushMatrix();
    glTranslatef(base * 0.5, 12, base * 1.52);
    // glRotatef(180, 0, 1, 0);
    glScalef(1.2, 1.2, 1.2);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 1.2, 12, base * 1.52);
    // glRotatef(180, 0, 1, 0);
    glScalef(1.2, 1.2, 1.2);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 1.47, 12, base * 1.15);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 0.53, 12, base * 1.2);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 0.53, 12, base * 0.5);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 1.2, 12, base * 0.48);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-180, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();

    // LIDIA
    glPushMatrix();
    white_shadow
        glTranslatef(base * 4.95, 20, base * 8);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 4.95, 20, base * 7.3);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 4.95, 20, base * 6.6);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 4.95, 20, base * 5.9);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 5.15, 20, base * 8);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 5.15, 20, base * 7.3);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 5.15, 20, base * 6.6);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 5.15, 20, base * 5.9);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix();
    black
        glTranslatef(base * 4.95, 25, base * 8);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 4.95, 25, base * 7.3);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 4.95, 25, base * 6.6);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 4.95, 25, base * 5.9);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 5.15, 25, base * 8);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 5.15, 25, base * 7.3);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 5.15, 25, base * 6.6);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 5.15, 25, base * 5.9);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();

    glPushMatrix();
    black
        glTranslatef(base * 4.72, 12, base * 8);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 4.72, 12, base * 7.3);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 4.72, 12, base * 6.6);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 4.72, 12, base * 5.9);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 5.38, 12, base * 8);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 5.38, 12, base * 7.3);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 5.38, 12, base * 6.6);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 5.38, 12, base * 5.9);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();

    white_shadow
    glPushMatrix();
    glTranslatef(base * 3.25, 20, base * 8);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3.25, 20, base * 7.3);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3.25, 20, base * 6.6);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3.25, 20, base * 5.9);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    black
    glPushMatrix();
    glTranslatef(base * 3.48, 12, base * 8);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3.48, 12, base * 7.3);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3.48, 12, base * 6.6);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3.48, 12, base * 5.9);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 3.25, 25, base * 8);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3.25, 25, base * 7.3);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3.25, 25, base * 6.6);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 3.25, 25, base * 5.9);
    glScalef(10, 10, 10);
    glRotatef(90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();

    glPushMatrix();
    white_shadow
        glTranslatef(base * 6.75, 20, base * 8);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 6.75, 20, base * 7.3);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 6.75, 20, base * 6.6);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 6.75, 20, base * 5.9);
    glScalef(1.5, 1.5, 1.5);
    glRotatef(270, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix();
    black
        glTranslatef(base * 6.75, 25, base * 8);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 6.75, 25, base * 7.3);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 6.75, 25, base * 6.6);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 6.75, 25, base * 5.9);
    glScalef(10, 10, 10);
    glRotatef(270, 0, 1, 0);
    monitor_draw();
    glPopMatrix();

    glPushMatrix();
    black
        glTranslatef(base * 6.52, 12, base * 8);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 6.52, 12, base * 7.3);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 6.52, 12, base * 6.6);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 6.52, 12, base * 5.9);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();

    // 4N
    for (int ai = 0; ai < 5; ai++)
    {
        for (int bi = 0; bi < 5; bi++)
        {
            glPushMatrix();
            glTranslatef(base * (9.25 - 0.5 * ai), 10, base * (7.5 - 0.5 * bi));
            glScalef(10, 10, 10);
            cadeiraEsc_draw();
            glPopMatrix();
        }
    }

    glPushMatrix();
    glTranslatef(base * 9.25, 16, base * 8);
    glScalef(1.2, 1.2, 1.2);
    // glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix(); // lousa
    green
        glTranslatef(base * 8.35, 30, base * 9);
    glScalef(75, 10, 5);
    drawCube(1, 3, 1);
    glPopMatrix();

    // guidolab
    white_shadow
    glPushMatrix();
    glTranslatef(base * 2.25, 16, base * 3.25);
    glScalef(1.2, 1.2, 1.2);
    // glRotatef(90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 1.75, 16, base * 2.5);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(-90, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 0.5, 16, base * 2.85); // z pra frente pra trás
    glScalef(1.2, 1.2, 1.2);
    glRotatef(180, 0, 1, 0);
    mesaR_draw();
    glPopMatrix();

    glPushMatrix();
    black
        glTranslatef(base * 2.25, 12, base * 3.48);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(180, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 1.52, 12, base * 2.5);
    glScalef(1.2, 1.2, 1.2);
    glRotatef(90, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 0.5, 12, base * 2.62);
    glScalef(1.2, 1.2, 1.2);
    // glRotatef(180, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 2.25, 20, base * 3.25);
    glScalef(10, 10, 10);
    // glRotatef(-90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 1.75, 20, base * 2.5);
    glScalef(10, 10, 10);
    glRotatef(-90, 0, 1, 0);
    monitor_draw();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(base * 0.5, 20, base * 2.85);
    glScalef(10, 10, 10);
    glRotatef(180, 0, 1, 0);
    monitor_draw();
    glPopMatrix();

    white_shadow
    glPushMatrix();
    glTranslatef(base * 0.25, 7.5, base * 2.25);
    glScalef(15, 15, 15);
    drawCubeUnit();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 2.25, 0, base * 3.85);
    glScalef(40, 27.5, 30);
    estanteFerro_draw();
    glPopMatrix();
}
//------------------------------separação-------------------------------------------

void placa_azul()
{

    // decoração parede esquerda
    glPushMatrix();
    blue_sing;
    glTranslatef(0, 0, 0);
    glScalef(15, 20, 2);
    drawCubeUnit();
    glPopMatrix();

    glPushMatrix();
    black;
    glTranslatef(-7.5, 0, 0.3);
    glScalef(1, 21, 2.2);
    drawCubeUnit();
    glPopMatrix();

    glPushMatrix();
    black;
    glTranslatef(7.5, 0, 0.3);
    glScalef(1, 21, 2.2);
    drawCubeUnit();
    glPopMatrix();

    glPushMatrix();
    black;
    glTranslatef(0, 10, 0.3);
    glScalef(16, 1, 2);
    drawCubeUnit();
    glPopMatrix();

    glPushMatrix();
    black;
    glTranslatef(0, -10, 0.3);
    glScalef(16, 1, 2);
    drawCubeUnit();
    glPopMatrix();
}

void cabine_recepção()
{
    // ---------------------------------------Recepção--------------------------------------
    // Parede esquerda do balcão
    glPushMatrix();
    white;
    glTranslatef(base * 3.85, (base + betw_height) + 25, base * 3);
    glScalef(35, 50, 1);
    drawCubeUnit();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 3.85, (base + betw_height) + 30, base * 3.011);
    placa_azul();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(base * 6.2, (base + betw_height) + 30, base * 3.011);
    placa_azul();
    glPopMatrix();

    // parede baixa
    glPushMatrix();
    white;
    glTranslatef(base * 5, (base + betw_height) + 10, base * 3);
    glScalef(85, 20, 1);
    drawCubeUnit();
    glPopMatrix();
    // mini balcão
    glPushMatrix();
    white;
    glTranslatef(base * 5, (base + betw_height) + 20, base * 3.10);
    glScalef(85, 2, 10);
    drawCubeUnit();
    glPopMatrix();

    // parede direita
    glPushMatrix();
    white;
    glTranslatef(base * 6.15, (base + betw_height) + 25, base * 3);
    glScalef(35, 50, 1);
    drawCubeUnit();
    glPopMatrix();
    // parede alta
    glPushMatrix();
    white;
    glTranslatef(base * 5, (base + betw_height) + 45, base * 3);
    glScalef(85, 10, 1);
    drawCubeUnit();
    glPopMatrix();

    // vidro da recepção
    glPushMatrix();
    glColor4f(0.8, 0.9, 1, 0.4);
    glTranslatef(base * 5, (base + betw_height) + 30, base * 3);
    glScalef(85, 20, 1);
    drawCubeUnit();
    glPopMatrix();
}

void mobilia_recepcao()
{
    // ---------------------------------------Cabine_Recepção--------------------------------------

    //-----------------------------------------------------------------------------------
    //  Cadeiras lado esquerdo na frente
    glPushMatrix();
    glTranslatef(2.75 * base, (base + betw_height), 2.25 * base);
    glScalef(20, 20, 20);
    bancoEspera_draw();
    glPopMatrix();

    // Cadeiras lado direito da escada
    glPushMatrix();
    glTranslatef(7.5 * base, (base + betw_height), 4.80 * base);
    glScalef(20, 20, 20);
    glRotatef(180, 0, 1, 0);
    bancoEspera_draw();
    glPopMatrix();

    // Cesto da recepção
    glPushMatrix();
    black;
    glTranslatef(3 * base, (base + betw_height) + (ground_offset - 1.9), 4.90 * base);
    cesto_draw();
    glPopMatrix();

    // Mesa recepicionista
    glPushMatrix();
    brown;
    glTranslatef(5 * base, (base + betw_height) + (2 * ground_offset), 2.8 * base);
    mesaL_draw();
    glPopMatrix();

    // Pc recepção
    glPushMatrix();
    glTranslatef(4.9 * base, (base + betw_height) + 20, 2.7 * base);
    glRotatef(-135, 0, 1, 0);
    glScalef(10, 10, 10);
    monitor_draw();
    glPopMatrix();

    // Cadeira recepcionista
    glPushMatrix();
    black;
    glTranslatef(4.5 * base, (base + betw_height) + (2 * ground_offset), 2.3 * base);
    glRotatef(45, 0, 1, 0);
    cadeiraL_draw();
    glPopMatrix();
    //--------------------------------------------------------------------------
    // Armario recepção
    glPushMatrix();
    white_shadow;
    glTranslatef(7.10 * base, (base + betw_height) + (3 * ground_offset), 2.20 * base);
    glRotatef(90, 0, 1, 0);
    baseP_draw();
    glPopMatrix();
    // portas do armario
    glPushMatrix();
    white;
    glTranslatef(7.38 * base, (base + betw_height) + (1.50 * ground_offset), 2.29 * base);
    portasP_draw();
    glPopMatrix();
    // botoes do armario
    glPushMatrix();
    black;
    glTranslatef(7.28 * base, (base + betw_height) + (1.50 * ground_offset), 2.30 * base);
    glRotatef(90, 0, 1, 0);
    botoesP_draw();
    glPopMatrix();

    //---------------------------------------------------------------------------
    // peineis vermelhos
    glPushMatrix();
    red;
    glTranslatef(6.3 * base, (base + betw_height) + (5 * ground_offset), 5 * base);
    glRotatef(90, 0, 1, 0);
    glScalef(1, 4, 4);
    drawCube(1, 5, 5);
    glPopMatrix();

    // painel retangular
    glPushMatrix();
    red;
    glTranslatef(6.7 * base, (base + betw_height) + (5 * ground_offset), 5 * base);
    glRotatef(90, 0, 1, 0);
    glScalef(1, 6, 2);
    drawCube(1, 5, 5);
    glPopMatrix();

    // painel menor
    glPushMatrix();
    red;
    glTranslatef(7 * base, (base + betw_height) + (5 * ground_offset), 5 * base);
    glRotatef(90, 0, 1, 0);
    glScalef(1, 3, 3);
    drawCube(1, 5, 5);
    glPopMatrix();

    // painel retangular solitario
    glPushMatrix();
    red;
    glTranslatef(3 * base, (base + betw_height) + (5 * ground_offset), 5 * base);
    glRotatef(90, 0, 1, 0);
    glScalef(1, 5, 3);
    drawCube(1, 5, 5);
    glPopMatrix();

    cabine_recepção();
}

void mobilia_banheiros()
{
    // -------------------------------------Banheiros ESQUERDO----------------------------------

    // Cesto de lixo
    glPushMatrix();
    black;
    glTranslatef(2.40 * base, (base + betw_height) + (ground_offset - 1.9), 5.15 * base);
    cesto_draw();
    glPopMatrix();

    // Pia
    glPushMatrix();
    white_shadow;
    glTranslatef(2.40 * base, (base + betw_height) + (3.5 * ground_offset), 5.17 * base);
    glScalef(0.5, 0.5, 0.5);
    glRotatef(-90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    // Privada 1
    glPushMatrix();
    white_shadow;
    glTranslatef(3.10 * base, (base + betw_height) + (2.10 * ground_offset), 5.10 * base);
    glRotatef(270, 0, 1, 0);
    privada_draw();
    glPopMatrix();

    // Banheiro 2
    // Cesto de lixo 2
    glPushMatrix();
    black;
    glTranslatef(2.40 * base, (base + betw_height) + (ground_offset - 1.9), 6.92 * base);
    cesto_draw();
    glPopMatrix();

    // Pia 2
    glPushMatrix();
    white_shadow;
    glTranslatef(2.40 * base, (base + betw_height) + (3.5 * ground_offset), 6.88 * base);
    glScalef(0.5, 0.5, 0.5);
    glRotatef(90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    // Privada 2
    glPushMatrix();
    white_shadow;
    glTranslatef(3.10 * base, (base + betw_height) + (2.10 * ground_offset), 7 * base);
    glRotatef(90, 0, 1, 0);
    privada_draw();
    glPopMatrix();

    // --------------------------------------Banheiros DIREITO----------------------------------
    // Cesto de lixo 1
    glPushMatrix();
    black;
    glTranslatef(7.50 * base, (base + betw_height) + (ground_offset - 1.9), 5.15 * base);
    cesto_draw();
    glPopMatrix();

    // Pia 1
    glPushMatrix();
    white_shadow;
    glTranslatef(7.50 * base, (base + betw_height) + (3.5 * ground_offset), 5.17 * base);
    glScalef(0.5, 0.5, 0.5);
    glRotatef(-90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    // Privada 1
    glPushMatrix();
    white_shadow;
    glTranslatef(6.90 * base, (base + betw_height) + (2.10 * ground_offset), 5.10 * base);
    glRotatef(270, 0, 1, 0);
    privada_draw();
    glPopMatrix();

    // Banheiro 2
    // Cesto de lixo 2
    glPushMatrix();
    black;
    glTranslatef(7.50 * base, (base + betw_height) + (ground_offset - 1.9), 6.92 * base);
    cesto_draw();
    glPopMatrix();

    // Pia 2
    glPushMatrix();
    white_shadow;
    glTranslatef(7.50 * base, (base + betw_height) + (3.5 * ground_offset), 6.88 * base);
    glScalef(0.5, 0.5, 0.5);
    glRotatef(90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    // Privada 2
    glPushMatrix();
    white_shadow;
    glTranslatef(6.90 * base, (base + betw_height) + (2.10 * ground_offset), 7 * base);
    glRotatef(90, 0, 1, 0);
    privada_draw();
    glPopMatrix();
}

void mobilia_salas()
{

    // Salas da Direita
    for (int i = 0; i < 10; i++)
    {
        // Mesa salas
        glPushMatrix();
        brown;
        glTranslatef(0.25 * base, (base + betw_height) + (1.80 * ground_offset), (-0.35 + i) * base);
        mesaL_draw();
        glPopMatrix();

        // Pcs
        glPushMatrix();
        glTranslatef(0.15 * base, (base + betw_height) + 20, (-0.45 + i) * base);
        glRotatef(-135, 0, 1, 0);
        glScalef(10, 10, 10);
        monitor_draw();
        glPopMatrix();

        // Cadeira salas
        glPushMatrix();
        black;
        glTranslatef(-0.15 * base, (base + betw_height) + (2 * ground_offset), (-0.70 + i) * base);
        glRotatef(45, 0, 1, 0);
        cadeiraL_draw();
        glPopMatrix();
    }

    // Salas da direita (BANHEIRO)
    for (int i = 0; i < 10; i++)
    {

        if (i == 3)
            i += 5;
        // Mesa salas
        glPushMatrix();
        brown;
        glTranslatef(2.75 * base, (base + betw_height) + (1.80 * ground_offset), (-0.60 + i) * base);
        glRotatef(180, 0, 1, 0);
        mesaL_draw();
        glPopMatrix();

        // Pcs
        glPushMatrix();
        glTranslatef(2.85 * base, (base + betw_height) + 20, (-0.50 + i) * base);
        glRotatef(45, 0, 1, 0);
        glScalef(10, 10, 10);
        monitor_draw();
        glPopMatrix();

        // Cadeira salas
        glPushMatrix();
        black;
        glTranslatef(3.15 * base, (base + betw_height) + (2 * ground_offset), (-0.25 + i) * base);
        glRotatef(-135, 0, 1, 0);
        cadeiraL_draw();
        glPopMatrix();
    }

    // Salas da Esquerda
    for (int i = 0; i < 10; i++)
    {
        // Mesa salas
        glPushMatrix();
        brown;
        glTranslatef(9.75 * base, (base + betw_height) + (1.80 * ground_offset), (-0.60 + i) * base);
        glRotatef(180, 0, 1, 0);
        mesaL_draw();
        glPopMatrix();

        // Pcs
        glPushMatrix();
        glTranslatef(9.85 * base, (base + betw_height) + 20, (-0.50 + i) * base);
        glRotatef(45, 0, 1, 0);
        glScalef(10, 10, 10);
        monitor_draw();
        glPopMatrix();

        // Cadeira salas
        glPushMatrix();
        black;
        glTranslatef(10.15 * base, (base + betw_height) + (2 * ground_offset), (-0.25 + i) * base);
        glRotatef(-135, 0, 1, 0);
        cadeiraL_draw();
        glPopMatrix();
    }
    // Salas da esquerda (BANHEIRO)
    for (int i = 0; i < 10; i++)
    {

        if (i == 3)
            i += 5;
        // Mesa salas
        glPushMatrix();
        brown;
        glTranslatef(7.25 * base, (base + betw_height) + (1.80 * ground_offset), (-0.35 + i) * base);
        mesaL_draw();
        glPopMatrix();

        // Pcs
        glPushMatrix();
        glTranslatef(7.15 * base, (base + betw_height) + 20, (-0.45 + i) * base);
        glRotatef(-135, 0, 1, 0);
        glScalef(10, 10, 10);
        monitor_draw();
        glPopMatrix();

        // Cadeira salas
        glPushMatrix();
        black;
        glTranslatef(6.85 * base, (base + betw_height) + (2 * ground_offset), (-0.70 + i) * base);
        glRotatef(45, 0, 1, 0);
        cadeiraL_draw();
        glPopMatrix();
    }
}

void mobilia_corredor()
{
    glPushMatrix();
    green_flower;
    glTranslatef(8.40 * base, (base + betw_height) + (1.5 * ground_offset), (-0.72) * base);
    glRotatef(90, 0, 1, 0);
    vaso_draw();
    glPopMatrix();
}