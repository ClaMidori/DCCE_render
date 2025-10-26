#include "../include/keyboard.h"
#include "../include/controls.h"

//controle de moovimento
unsigned int keys[3]={0,0,0}; // [0] -> movimento horizontal [1] -> movimento vertical [3] -> movimento perpendicular
float acc = 1;


void pressed_keys(unsigned int tecla, int x, int y)
{
   if (tecla == 'a' || tecla == 'd'){
    keys[0]= tecla;
   }else if (tecla == 'w' || tecla == 's'){
    keys[1] = tecla;
   }
}

void released_keys(unsigned int tecla, int x, int y)
{
   if (tecla == 'a' || tecla == 'd'){
    keys[0]= 0;
   }else if (tecla == 'w' || tecla == 's'){
    keys[1] = 0;
   }
}

void update_moviment(){
    // correct acc
    if(keys[0] !='\0' && keys[1] !='\0') acc= 0.41;

	// exemplo: mover verticalmente quando Page Up/Down está pressionada
    if(keys[2] == GLUT_KEY_PAGE_UP){//Page up = fn + seta pra cima
        posy += 5.0f; 
        oy += 5.0f;
        glutPostRedisplay();
    } else if(keys[2] == GLUT_KEY_PAGE_DOWN){//Page down = fn + seta pra baixo
        posy -= 5.0f;
        oy -= 5.0f;
        glutPostRedisplay();
    }

    switch(keys[0]){
    case 'd':
        posx=posx+(acc*sin((anguloy+90)/57.32));
        posz=posz-(acc*cos((anguloy+90)/57.32));
        ox=ox+(acc*sin((anguloy+90)/57.32));
        oz=oz-(acc*cos((anguloy+90)/57.32));
        glutPostRedisplay();
        break;

    case 'a':
        posx=posx-(acc*sin((anguloy+90)/57.32));
        posz=posz+(acc*cos((anguloy+90)/57.32));
        ox=ox-(acc*sin((anguloy+90)/57.32));
        oz=oz+(acc*cos((anguloy+90)/57.32));
        glutPostRedisplay();
        break;
    default:
        break;
    }

    switch(keys[1]){
    case 's':
        posx=posx+(acc*cos((anguloy+90)/57.32));
        posz=posz+(acc*sin((anguloy+90)/57.32));
        ox=ox+(acc*cos((anguloy+90)/57.32));
        oz=oz+(acc*sin((anguloy+90)/57.32));
        glutPostRedisplay();
        break;

    case 'w':
        posx=posx-(acc*cos((anguloy+90)/57.32));
        posz=posz-(acc*sin((anguloy+90)/57.32));
        ox=ox-(acc*cos((anguloy+90)/57.32));
        oz=oz-(acc*sin((anguloy+90)/57.32));
        glutPostRedisplay();
        break;
    default:
        break;
    }

}

void TeclasEspeciaisUp(int key, int x, int y)
{
	keys[2] = 0;


}
void TeclasEspeciais(int key, int x, int y)
{
	keys[2] = key;
}

