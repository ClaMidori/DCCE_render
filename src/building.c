#include "../include/building.h"

void ground_floor(){

    //lateral esquerda (entrando no dcce)
    glPushMatrix();
    room(4,3);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(4*base,0,2*base);
    room_with_small_window(2,1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6*base,0,0);
    room(4,3);
    glPopMatrix();


    //outra lateral - direita (entrando no dcce) 
    glPushMatrix();
    glRotatef(180,0,1,0);
    glTranslatef(-4*base,0,3*base);
    room(4,3);
    glPopMatrix();

    glPushMatrix();
    glRotatef(180,0,1,0);
    glTranslatef(-6*base,0,5*base);
    room_with_small_window(2,1);
    glPopMatrix();

    glPushMatrix();
    glRotatef(180,0,1,0);
    glTranslatef(-10*base,0,3*base);
    room(4,3);
    glPopMatrix();

    //frente
    glPushMatrix();
    glRotatef(90,0,1,0);
    glTranslatef(0,0,6*base);
    //glTranslatef(-10*base,0,3*base);
    room_entrance(3,1);
    glPopMatrix();

    //fundos
    glPushMatrix();
    glRotatef(270,0,1,0);
    glTranslatef(-3*base,0,-4*base);
    //glTranslatef(-10*base,0,3*base);
    room(3,4);
    glPopMatrix();

}

void first_floor(){
    
}