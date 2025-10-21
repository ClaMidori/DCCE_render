#include "../include/commons.h"
#include "../include/keyboard.h"
#include "../include/mouse.h"
#include "../include/controls.h"
#include "../include/building.h"

void Inicializa(void)
{
    // Define a cor de fundo da janela de visualização como preta
    glClearColor(0, 255, 255, 0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_SMOOTH);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glutWarpPointer(400,300);
    glutSetCursor(GLUT_CURSOR_NONE);
}

void Draw(){
    glColor3ub(100,200,0);
    glPushMatrix();
    glTranslatef(0,0,0);
    glScalef(60,0.01,60);
    glutSolidCube(20);
    glPopMatrix();
    ground_floor();
    //teste();
}

void DISPLAY(void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    if (projecao == 1) // Projeção Ortogonal
    {
        glOrtho(-200, 200, -200, 200, -200, 200);
    }
    else // Projeção Perspectiva
    {
        gluPerspective(90, 1.0, 1.0, 500.0); // Use 1.0 para o aspect ratio para evitar problemas
    }

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // 1. Converter ângulos de graus para radianos
    float anguloy_rad = anguloy * M_PI / 180.0f;
    float angulox_rad = angulox * M_PI / 180.0f;

    // 2. Calcular o vetor de direção a partir dos ângulos
    float dir_x = cos(angulox_rad) * sin(anguloy_rad);
    float dir_y = sin(angulox_rad);
    float dir_z = cos(angulox_rad) * cos(anguloy_rad) * -1.0f; // -1 no Z é padrão para OpenGL (olhar para frente)

    // 3. Calcular o ponto de destino (ox, oy, oz)
    // O ponto de destino é a posição da câmera + o vetor de direção
    ox = posx + dir_x;
    oy = posy - dir_y; // negativo para controle normal
    oz = posz + dir_z;
    // -----------------------------

    // Agora o gluLookAt usará os valores atualizados de ox, oy, oz
    gluLookAt(posx, posy, posz,   // Posição do olho
              ox, oy, oz,         // Ponto para onde o olho está olhando
              0.0, 1.0, 0.0);   // Vetor "para cima" (assumindo que seja esse)

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    Draw();
    
    glutSwapBuffers();
    // Remova o glutPostRedisplay daqui, ele não é necessário dentro da própria função de display.
    // As funções MOUSE e update_moviment já o chamam quando algo muda.
}

int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH | GLUT_STENCIL); /*Define as características do espaço vetorial.
                                                                        //  Nesse caso, permite animações (sem cintilações), cores compostas por Verm. Verde e Azul,
                                                                //  Buffer que permite trablhar com profundidade e elimina faces escondidas.*/
    glutInitWindowSize(800,600);
    glutInitWindowPosition(10, 10);
    glutCreateWindow("Projeto");
    Inicializa();
    glutDisplayFunc(DISPLAY);
    glutKeyboardFunc(pressed_keys);
    glutKeyboardUpFunc(released_keys);
    glutPassiveMotionFunc(MOUSE);
    glutIdleFunc(update_moviment);
    glutMainLoop();
    return 0;
}