#include <GL/glut.h>
#include <GL/glu.h>

void Desenha(){
    glScalef(2, 2, 2); //aumenta o tamanho da casa

    //PAREDES
    glBegin(GL_QUADS); //parede esquerda da casa
        glColor3f(0,1,1); //define cor como azul claro
        glVertex3f(-15.0f, 15.0f, 15.0f);
        glVertex3f(-15.0f, 15.0f, -15.0f);
        glVertex3f(-15.0f, -15.0f, -15.0f);
        glVertex3f(-15.0f, -15.0f, 15.0f);
    glEnd();

    glBegin(GL_QUADS); //frente casa
        glColor3f(0,0,1); //define cor como azul
        glVertex3f(-15.0f, 15.0f, -15.0f);
        glVertex3f(15.0f, 15.0f, -15.0f);
        glVertex3f(15.0f, -15.0f, -15.0f);
        glVertex3f(-15.0f, -15.0f, -15.0f);
    glEnd();

    glBegin(GL_QUADS); //fundo casa
        glColor3f(0,0,1); //define cor como azul
        glVertex3f(-15.0f, 15.0f, 15.0f);
        glVertex3f(15.0f, 15.0f, 15.0f);
        glVertex3f(15.0f, -15.0f, 15.0f);
        glVertex3f(-15.0f, -15.0f, 15.0f);
    glEnd();

    glBegin(GL_QUADS); //parede direita da casa
        glColor3f(0,1,1); //define cor como azul claro
        glVertex3f(15.0f, 15.0f, 15.0f);
        glVertex3f(15.0f, 15.0f, -15.0f);
        glVertex3f(15.0f, -15.0f, -15.0f);
        glVertex3f(15.0f, -15.0f, 15.0f);
    glEnd();

    /* 
    //PORTA E JANELINHA
    glColor3f(1,1,1); //Altera cor para branca
    glBegin(GL_QUADS); //desenha a porta da casa
        glVertex2f(-4,-14.5);
        glVertex2f(-4, 0);
        glVertex2f( 4,0);
        glVertex2f( 4,-14.5);
        glVertex2f( 7,-5);
        glVertex2f( 7,-1);
        glVertex2f( 13,-1);
        glVertex2f( 13,-5);
    glEnd();

    //LINHAS DA JANELINHA
    glColor3f(0,0,1); //Define a cor como azul
    glBegin(GL_LINES); //define as linhas da janela
        glVertex2f(7,  -3);
        glVertex2f(13, -3);
        glVertex2f(10, -1);
        glVertex2f(10, -5);
    glEnd();

    //TELHADO
    glColor3f(0,1,0); //Define a cor como vermelha
    glBegin(GL_TRIANGLES); //desenha o telhadinho
        glVertex2f(-15, 5);
        glVertex2f(0, 17);
        glVertex2f(15, 5);
    glEnd(); 
    */
    glutSwapBuffers(); 
}

void DISPLAY (int x, int y){   
    //x é largura e y é altura (Janela)   
    // Define a cor de fundo da janela de visualização
    glClearColor(0.9, 0.9, 0.4, 0);
    if (y==0) y=1; //Evita divisão por zero
    if (x==0) x=1; //Evita divisão por zero
    glViewport(0,0,x,y); 

    glMatrixMode(GL_PROJECTION); //Ativa matriz de projeção
    glLoadIdentity(); //Define a matriz de Projeção como identidade.
    if (x>=y) //largura maior que altura
      glOrtho(-100*(x/y), 100*(x/y), -100*(x/y), 100*(x/y), -100*(x/y), 100*(x/y));//Define o volume com base no tamanho da janela
    else //altura aumentada
      glOrtho(-100*(y/x), 100*(y/x), -100*(y/x), 100*(y/x), -100*(y/x), 100*(y/x));//Define o volume com base no tamanho da janela*/
    gluPerspective(0, 1, 1, 0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity(); //Define a matriz de Visualização como identidade.
    gluLookAt(35, 15, 30, 0, 0, 0, 0, 1, 0);
    glClear(GL_COLOR_BUFFER_BIT); 

    glutSwapBuffers();
}

// Programa Principal 
int main(int argc,char **argv){
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600, 600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("ROBLOX VERSÃO DCCE");
	glutReshapeFunc(DISPLAY);
	glutDisplayFunc(Desenha);
	glutMainLoop();
    return(0);
}