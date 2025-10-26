#include "../include/building.h"

void ground_floor(){
    // fileira -1
        glPushMatrix();
        glTranslatef(-base,0,-base); //bloco 1x0
        pilar(base/2, base/9,0,0,0);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/10, 2*base/10,base/10,0,base-2*base/10);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/10, 2*base/10,base/10,0,base-2*base/10);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/10, 2*base/10,base/10,0,base-2*base/10);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/10, 2*base/10,base/10,0,base-2*base/10);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/2, base/9,base/18,0,0);
        glPopMatrix();

    // fileira 0:
        glPushMatrix();
        big_window_block(0,0,1,1); //bloco 0x0
        glTranslatef(base,0,0); //bloco 1x0
        block(0,0,0,1);
        glTranslatef(base,0,0); //bloco 2x0
        block(0,0,1,1);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(7*base,0,0); //bloco 8x0
        block(0,1,0,1);
        glTranslatef(base,0,0); //bloco 9x0
        block(0,0,0,1);
        glTranslatef(base,0,0); //bloco 10x0
        big_window_block(0,1,0,1);
        glPopMatrix();

    //fileira 1
        glPushMatrix();
        glTranslatef(0,0,base); 
        big_window_block(0,0,1,1); //bloco 0x1
        glTranslatef(base,0,0); //bloco 1x1
        block(0,0,1,1);
        glTranslatef(base,0,0); //bloco 2x1 - colocar porta aqui depois
        front_door_block(0,1,0,1);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(7*base,0,base); //bloco 8x1
        block(0,1,0,0);
        // bloco 9x1 não tem parede
        glTranslatef(2*base,0,0); //bloco 10x1
        big_window_block(0,1,0,0);
        glPopMatrix();

    //fileira 2
        glPushMatrix();
        glTranslatef(0,0,2*base); 
        big_window_block(1,0,1,0); //bloco 0x2
        glTranslatef(base,0,0); //bloco 1x2
        lateral_door_block(1,1,0,0);
        glTranslatef(2*base,0,0); //bloco 3x2
        medium_window_block(0,1,1,1);
        glTranslatef(base,0,0); //bloco 4x2
        right_entrance_door_block(0,0,0,1); // colocar porta aqui depois
        glTranslatef(base,0,0); //bloco 5x2
        left_entrance_door_block(0,0,0,1); 
        glTranslatef(base,0,0); //bloco 6x2
        medium_window_block(0,1,1,1);
        glTranslatef(base,0,0); //bloco 7x2
        front_door_block(0,0,0,1); // colocar porta aqui depois
        glTranslatef(base,0,0); //bloco 8x2
        block(1,1,0,0);
        glTranslatef(base,0,0); //bloco 9x2
        big_window_block(1,1,0,0);
        glPopMatrix();

    //fileira 3
        glPushMatrix();
        glTranslatef(0,0,3*base); 
        big_window_block(0,0,1,0); //bloco 0x3
        glTranslatef(base,0,0); //bloco 1x3
        block(0,0,1,1);
        // nada em 2x3
        glTranslatef(2*base,0,0); //bloco 3x3
        front_door_block(0,0,0,1);
        glTranslatef(3*base,0,0); //bloco 6x3
        front_door_block(0,0,0,1);
        glTranslatef(2*base,0,0); //bloco 8x3
        block(0,1,0,0);
        glTranslatef(base,0,0); //bloco 9x3
        big_window_block(0,1,0,0);
        glPopMatrix();

    //fileira 4
        glPushMatrix();
        glTranslatef(0,0,4*base); 
        small_window_block(1,0,1,0); //bloco 0x4 //! bug na rotação da janela pequena
        glTranslatef(base,0,0); //bloco 1x4
        front_door_block(1,0,0,0);
        glTranslatef(base,0,0); //bloco 2x4
        block(1,0,1,1);

        glTranslatef(6*base,0,0); //bloco 8x4
        front_door_block(1,0,1,0);
        glTranslatef(base,0,0); //bloco 9x4
        small_window_block(1,1,0,0); //! bug na rotação da janela pequena
        glPopMatrix();

    //fileira 5
        glPushMatrix();
        glTranslatef(0,0,5*base); 
        small_window_block(1,0,1,0); //bloco 0x5
        glTranslatef(base,0,0); //bloco 1x5
        lateral_door_block(0,0,1,0);

        glTranslatef(3*base,0,0); //bloco 4x5
        block(1,1,1,0);
        glTranslatef(base,0,0); //bloco 5x5
        block(1,1,1,1);

        glTranslatef(3*base,0,0); 
        lateral_door_block(0,1,0,0); //bloco 0x5

        glTranslatef(base,0,0); 
        small_window_block(1,1,0,0); //bloco 0x5

        glPopMatrix();

    //fileira 6
        glPushMatrix();
        glTranslatef(0,0,6*base); 
        big_window_block(0,0,1,0); //bloco 0x6
        glTranslatef(base,0,0); //bloco 1x6
        block(0,0,0,1);
        glTranslatef(base,0,0); //bloco 2x6
        front_door_block(0,1,0,1);
        glTranslatef(base,0,0); //bloco 3x6
        front_door_block(0,0,0,1);
        glTranslatef(base,0,0); //bloco 4x6
        block(0,0,0,1);
        glTranslatef(base,0,0); //bloco 5x6
        block(0,0,0,1);
        glTranslatef(base,0,0); //bloco 6x6
        block(0,0,1,1);
        glTranslatef(base,0,0); 
        front_door_block(0,0,0,1); //bloco 7x6
        glTranslatef(base,0,0); //bloco 8x6
        block(0,0,0,1);
        glTranslatef(base,0,0); 
        big_window_block(0,1,0,0); //bloco 9x6

        glPopMatrix();

    //fileira 7
        glPushMatrix();
        glTranslatef(0,0,7*base); 
        big_window_block(0,0,1,0); //bloco 0x7 
        glTranslatef(2*base,0,0); //bloco 2x7
        block(0,0,1,0);

        glTranslatef(4*base,0,0); //bloco 8x7
        block(0,0,1,0);
        glTranslatef(3*base,0,0); //bloco 9x7
        big_window_block(0,1,0,0); 
        glPopMatrix();

    //fileira 8
        glPushMatrix();
        glTranslatef(0,0,8*base); 
        big_window_block(0,0,1,0); //bloco 0x8 
        glTranslatef(2*base,0,0); //bloco 2x8
        block(0,0,1,0);

        glTranslatef(4*base,0,0); //bloco 8x8
        block(0,0,1,0);
        glTranslatef(3*base,0,0); //bloco 9x8
        big_window_block(0,1,0,0); 
        glPopMatrix();

    //fileira 9
    glPushMatrix();
    glTranslatef(0,0,9*base); 
    big_window_block(1,0,1,0); //bloco 0x9
    glTranslatef(base,0,0); //bloco 1x9
    block(1,0,0,0); 
    glTranslatef(base,0,0); //bloco 2x9
    block(1,0,1,0);
    glTranslatef(base,0,0); //bloco 3x9
    block(1,0,0,0);
    glTranslatef(base,0,0); //bloco 4x9
    block(1,0,0,0);
    glTranslatef(base,0,0); //bloco 5x9
    block(1,0,0,0);
    glTranslatef(base,0,0); //bloco 6x9
    block(1,0,1,0);
    glTranslatef(base,0,0); //bloco 7x9
    block(1,0,0,0);
    glTranslatef(base,0,0); //bloco 8x9
    block(1,0,0,0);
    glTranslatef(base,0,0); //bloco 9x9
    big_window_block(1,1,0,0); 
    glPopMatrix();
    

}


void first_floor(){
    // fileira -1
        glPushMatrix();
        glTranslatef(-base,base,-base); //bloco 1x0
        pilar(base/2, base/9,0,0,0);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/10, 2*base/10,base/10,0,base-2*base/10);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/10, 2*base/10,base/10,0,base-2*base/10);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/10, 2*base/10,base/10,0,base-2*base/10);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/10, 2*base/10,base/10,0,base-2*base/10);

        glTranslatef(0,0,2*base); //bloco 1x0
        pilar(base/2, base/9,base/18,0,0);
        glPopMatrix();

    // fileira 0:
        glPushMatrix();
        glTranslatef(0,base,0);
        big_window_block(0,0,1,1); //bloco 0x0
        glTranslatef(base,0,0); //bloco 1x0
        block(0,1,1,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 2x0
        block(0,1,0,1);
        down_up_block(0, 1);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(7*base,base,0); //bloco 8x0
        block(0,1,0,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 9x0
        block(0,1,1,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 10x0
        big_window_block(0,1,0,1);
        glPopMatrix();
/////////////////
    //fileira 1
        glPushMatrix();
        glTranslatef(0,base,base); 
        big_window_block(0,0,1,1); //bloco 0x1
        glTranslatef(base,0,0); //bloco 1x1
        block(0,0,1,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 2x1 - colocar porta aqui depois
        front_door_block(0,1,0,1);
        down_up_block(0, 1);
        glPopMatrix();

        glPushMatrix();
        glTranslatef(7*base,base,base); //bloco 8x1
        block(0,1,0,0);
        down_up_block(0, 1);
        // bloco 9x1 não tem parede
        glTranslatef(2*base,0,0); //bloco 10x1
        big_window_block(0,1,0,0);
        down_up_block(0, 1);
        glPopMatrix();

    //fileira 2
        glPushMatrix();
        glTranslatef(0,base,2*base); 
        big_window_block(1,0,1,0); //bloco 0x2
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 1x2
        lateral_door_block(1,1,0,0);
        down_up_block(0, 1);
        glTranslatef(2*base,0,0); //bloco 3x2
        medium_window_block(0,1,1,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 4x2
        right_entrance_door_block(0,0,0,1); // colocar porta aqui depois
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 5x2
        left_entrance_door_block(0,0,0,1);
        down_up_block(0, 1); 
        glTranslatef(base,0,0); //bloco 6x2
        medium_window_block(0,1,1,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 7x2
        front_door_block(0,0,0,1); // colocar porta aqui depois
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 8x2
        block(1,1,0,0);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 9x2
        big_window_block(1,1,0,0);
        down_up_block(0, 1);
        glPopMatrix();

    //fileira 3
        glPushMatrix();
        glTranslatef(0,base,3*base); 
        big_window_block(0,0,1,0); //bloco 0x3
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 1x3
        block(0,0,1,1);
        down_up_block(0, 1);
        // nada em 2x3
        glTranslatef(2*base,0,0); //bloco 3x3
        front_door_block(0,0,0,1);
        down_up_block(0, 1);
        glTranslatef(3*base,0,0); //bloco 6x3
        front_door_block(0,0,0,1);
        down_up_block(0, 1);
        glTranslatef(2*base,0,0); //bloco 8x3
        block(0,1,0,0);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 9x3
        big_window_block(0,1,0,0);
        down_up_block(0, 1);
        glPopMatrix();

    //fileira 4
        glPushMatrix();
        glTranslatef(0,base,4*base); 
        small_window_block(1,0,1,0); //bloco 0x4 //! bug na rotação da janela pequena
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 1x4
        front_door_block(1,0,0,0);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 2x4
        block(1,0,1,1);
        down_up_block(0, 1);

        glTranslatef(6*base,0,0); //bloco 8x4
        front_door_block(1,0,1,0);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 9x4
        small_window_block(1,1,0,0); //! bug na rotação da janela pequena
        down_up_block(0, 1);
        glPopMatrix();

    //fileira 5
        glPushMatrix();
        glTranslatef(0,base,5*base); 
        small_window_block(1,0,1,0); //bloco 0x5
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 1x5
        lateral_door_block(0,0,1,0);
        down_up_block(0, 1);

        glTranslatef(3*base,0,0); //bloco 4x5
        block(1,1,1,0);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 5x5
        block(1,1,1,1);
        down_up_block(0, 1);

        glTranslatef(3*base,0,0); 
        lateral_door_block(0,1,0,0); //bloco 0x5
        down_up_block(0, 1);

        glTranslatef(base,0,0); 
        small_window_block(1,1,0,0); //bloco 0x5
        down_up_block(0, 1);

        glPopMatrix();

    //fileira 6
        glPushMatrix();
        glTranslatef(0,base,6*base); 
        big_window_block(0,0,1,0); //bloco 0x6
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 1x6
        block(0,0,0,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 2x6
        front_door_block(0,1,0,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 3x6
        front_door_block(0,0,0,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 4x6
        block(0,0,0,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 5x6
        block(0,0,0,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 6x6
        block(0,0,1,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); 
        front_door_block(0,0,0,1); //bloco 7x6
        down_up_block(0, 1);
        glTranslatef(base,0,0); //bloco 8x6
        block(0,0,0,1);
        down_up_block(0, 1);
        glTranslatef(base,0,0); 
        big_window_block(0,1,0,0); //bloco 9x6
        down_up_block(0, 1);

        glPopMatrix();

    //fileira 7
        glPushMatrix();
        glTranslatef(0,base,7*base); 
        big_window_block(0,0,1,0); //bloco 0x7 
        glTranslatef(2*base,0,0); //bloco 2x7
        block(0,0,1,0);

        glTranslatef(4*base,0,0); //bloco 8x7
        block(0,0,1,0);
        glTranslatef(3*base,0,0); //bloco 9x7
        big_window_block(0,1,0,0); 
        glPopMatrix();

    //fileira 8
        glPushMatrix();
        glTranslatef(0,base,8*base); 
        big_window_block(0,0,1,0); //bloco 0x8 
        down_up_block(0, 1);
        glTranslatef(2*base,0,0); //bloco 2x8
        block(0,0,1,0);
        down_up_block(0, 1);

        glTranslatef(4*base,0,0); //bloco 8x8
        block(0,0,1,0);
        down_up_block(0, 1);
        glTranslatef(3*base,0,0); //bloco 9x8
        big_window_block(0,1,0,0);
        down_up_block(0, 1); 
        glPopMatrix();

    //fileira 9
    glPushMatrix();
    glTranslatef(0,base,9*base); 
    big_window_block(1,0,1,0); //bloco 0x9
    down_up_block(0, 1);
    glTranslatef(base,0,0); //bloco 1x9
    block(1,0,0,0);
    down_up_block(0, 1); 
    glTranslatef(base,0,0); //bloco 2x9
    block(1,0,1,0);
    down_up_block(0, 1);
    glTranslatef(base,0,0); //bloco 3x9
    block(1,0,0,0);
    down_up_block(0, 1);
    glTranslatef(base,0,0); //bloco 4x9
    block(1,0,0,0);
    down_up_block(0, 1);
    glTranslatef(base,0,0); //bloco 5x9
    block(1,0,0,0);
    down_up_block(0, 1);
    glTranslatef(base,0,0); //bloco 6x9
    block(1,0,1,0);
    down_up_block(0, 1);
    glTranslatef(base,0,0); //bloco 7x9
    block(1,0,0,0);
    down_up_block(0, 1);
    glTranslatef(base,0,0); //bloco 8x9
    block(1,0,0,0);
    down_up_block(0, 1);
    glTranslatef(base,0,0); //bloco 9x9
    big_window_block(1,1,0,0);
    down_up_block(0, 1); 
    glPopMatrix();

}


void teste(){
    //fileira 0
    pilar(base/6,base/2,-base,0,0);
}
