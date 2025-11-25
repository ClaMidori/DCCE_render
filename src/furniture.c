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
#include "../furnitures/cadeiraU_export.h"
#include "../furnitures/mesaL_export.h"
#include "../furnitures/mesaR_export.h"
#include "../furnitures/privada_export.h"
#include "../include/commons.h"

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

void mobilia_recepcao()
{
    // ---------------------------------------Recepção--------------------------------------
    //  Cadeiras lado esquerdo na frente
    glPushMatrix();
    glTranslatef(3 * base, (base + betw_height) + (3.5 * ground_offset), 2.15 * base);
    tcad_draw();
    glPopMatrix();

    // Cadeiras lado direito da escada //correto
    glPushMatrix();
    glTranslatef(7 * base, (base + betw_height) + (3.5 * ground_offset), 4.95 * base);
    glRotatef(180, 0, 1, 0);
    tcad_draw();
    glPopMatrix();

    // Cesto da recepção
    glPushMatrix();
    glTranslatef(3 * base, (base + betw_height) + (ground_offset - 1.9), 4.90 * base);
    cesto_draw();
    glPopMatrix();

    // Mesa recepicionista
    glPushMatrix();
    glTranslatef(5 * base, (base + betw_height) + (2 * ground_offset), 2.8 * base);
    mesaL_draw();
    glPopMatrix();

    // Cadeira recepcionista
    glPushMatrix();
    glTranslatef(4.5 * base, (base + betw_height) + (1.50 * ground_offset), 2.3 * base);
    glRotatef(45, 0, 1, 0);
    cadeiraU_draw();
    glPopMatrix();

    // teste
}

void mobilia_banheiros()
{

    // -------------------------------------Banheiros ESQUERDO----------------------------------

    // Cesto de lixo
    glPushMatrix();
    glTranslatef(2.40 * base, (base + betw_height) + (ground_offset - 1.9), 5.15 * base);
    cesto_draw();
    glPopMatrix();

    // Pia
    glPushMatrix();
    glTranslatef(2.40 * base, (base + betw_height) + (3.5 * ground_offset), 5.17 * base);
    glScalef(0.5, 0.5, 0.5);
    glRotatef(-90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    // Privada 1
    glPushMatrix();
    glTranslatef(3.10 * base, (base + betw_height) + (2.10 * ground_offset), 5.10 * base);
    glRotatef(270, 0, 1, 0);
    privada_draw();
    glPopMatrix();

    // Banheiro 2
    // Cesto de lixo 2
    glPushMatrix();
    glTranslatef(2.40 * base, (base + betw_height) + (ground_offset - 1.9), 6.92 * base);
    cesto_draw();
    glPopMatrix();

    // Pia 2
    glPushMatrix();
    glTranslatef(2.40 * base, (base + betw_height) + (3.5 * ground_offset), 6.88 * base);
    glScalef(0.5, 0.5, 0.5);
    glRotatef(90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    // Privada 2
    glPushMatrix();
    glTranslatef(3.10 * base, (base + betw_height) + (2.10 * ground_offset), 7 * base);
    glRotatef(90, 0, 1, 0);
    privada_draw();
    glPopMatrix();

    // --------------------------------------Banheiros DIREITO----------------------------------
    // Cesto de lixo 1
    glPushMatrix();
    glTranslatef(7.50 * base, (base + betw_height) + (ground_offset - 1.9), 5.15 * base);
    cesto_draw();
    glPopMatrix();

    // Pia 1
    glPushMatrix();
    glTranslatef(7.50 * base, (base + betw_height) + (3.5 * ground_offset), 5.17 * base);
    glScalef(0.5, 0.5, 0.5);
    glRotatef(-90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    // Privada 1
    glPushMatrix();
    glTranslatef(6.90 * base, (base + betw_height) + (2.10 * ground_offset), 5.10 * base);
    glRotatef(270, 0, 1, 0);
    privada_draw();
    glPopMatrix();

    // Banheiro 2
    // Cesto de lixo 2
    glPushMatrix();
    glTranslatef(7.50 * base, (base + betw_height) + (ground_offset - 1.9), 6.92 * base);
    cesto_draw();
    glPopMatrix();

    // Pia 2
    glPushMatrix();
    glTranslatef(7.50 * base, (base + betw_height) + (3.5 * ground_offset), 6.88 * base);
    glScalef(0.5, 0.5, 0.5);
    glRotatef(90, 0, 1, 0);
    pia_draw();
    glPopMatrix();

    // Privada 2
    glPushMatrix();
    glTranslatef(6.90 * base, (base + betw_height) + (2.10 * ground_offset), 7 * base);
    glRotatef(90, 0, 1, 0);
    privada_draw();
    glPopMatrix();
}

void mobilia_salas()
{
    /*
    // Salas da Direita
    for (int i = 0; i < 10; i++)
    {
        // Mesa salas
        glPushMatrix();
        glTranslatef(0.25 * base, (base + betw_height) + (1.80 * ground_offset), (-0.35 + i) * base);
        mesaL_draw();
        glPopMatrix();

        // Cadeira salas
        glPushMatrix();
        glTranslatef(-0.15 * base, (base + betw_height) + (1.30 * ground_offset), (-0.70 + i) * base);
        glRotatef(45, 0, 1, 0);
        cadeiraU_draw();
        glPopMatrix();
    }

    // Salas da direita (BANHEIRO)
    for (int i = 0; i < 10; i++)
    {

        if (i == 3)
            i += 5;
        // Mesa salas
        glPushMatrix();
        glTranslatef(2.75 * base, (base + betw_height) + (1.80 * ground_offset), (-0.60 + i) * base);
        glRotatef(180, 0, 1, 0);
        mesaL_draw();
        glPopMatrix();

        // Cadeira salas
        glPushMatrix();
        glTranslatef(3.15 * base, (base + betw_height) + (1.30 * ground_offset), (-0.25 + i) * base);
        glRotatef(-135, 0, 1, 0);
        cadeiraU_draw();
        glPopMatrix();
    }
    // Código pausado
    */
    /*
    // Salas da Esquerda
    for (int i = 0; i < 10; i++)
    {
        // Mesa salas
        glPushMatrix();
        glTranslatef(9.75 * base, (base + betw_height) + (1.80 * ground_offset), (-0.60 + i) * base);
        glRotatef(180, 0, 1, 0);
        mesaL_draw();
        glPopMatrix();

        // Cadeira salas
        glPushMatrix();
        glTranslatef(10.15 * base, (base + betw_height) + (1.30 * ground_offset), (-0.25 + i) * base);
        glRotatef(-135, 0, 1, 0);
        cadeiraU_draw();
        glPopMatrix();
    }
    // Salas da esquerda (BANHEIRO)
    for (int i = 0; i < 10; i++)
    {

        if (i == 3)
            i += 5;
        // Mesa salas
        glPushMatrix();
        glTranslatef(7.25 * base, (base + betw_height) + (1.80 * ground_offset), (-0.35 + i) * base);
        mesaL_draw();
        glPopMatrix();

        // Cadeira salas
        glPushMatrix();
        glTranslatef(6.85 * base, (base + betw_height) + (1.30 * ground_offset), (-0.70 + i) * base);
        glRotatef(45, 0, 1, 0);
        cadeiraU_draw();
        glPopMatrix();
    }
    */
    // Código pausado
}