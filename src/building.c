#include "../include/building.h"
#include "../include/roof.h"

//#include "../include/door.h"

void ground_floor(){
        // fileira -1
            glPushMatrix();
            glTranslatef(-base,0,-base); //bloco 1x0
            pilar(base/2, p_thickness,0,0,0);


            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(p_thickness, 2*p_thickness,p_thickness,0,base-2*p_thickness);

            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(p_thickness, 2*p_thickness,p_thickness,0,base-2*p_thickness);

            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(p_thickness, 2*p_thickness,p_thickness,0,base-2*p_thickness);

            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(p_thickness, 2*p_thickness,p_thickness,0,base-2*p_thickness);

            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(base/2, p_thickness,base/18,0,0);
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
            front_door_block(&gradeDoor,0,1,0,1);
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
            lateral_door_block(&gradeDoor,1,1,0,0);
            glTranslatef(2*base,0,0); //bloco 3x2
            medium_window_block(0,1,1,1);
            glTranslatef(base,0,0); //bloco 4x2
            right_entrance_door_block(0,0,0,1); // colocar porta aqui depois
            glTranslatef(base,0,0); //bloco 5x2
            left_entrance_door_block(0,0,0,1); 
            glTranslatef(base,0,0); //bloco 6x2
            medium_window_block(0,1,1,1);
            glTranslatef(base,0,0); //bloco 7x2
            front_door_block(&gradeDoor,0,0,0,1); // colocar porta aqui depois
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
            front_door_block(&woodDoor,0,0,0,1);
            glTranslatef(3*base,0,0); //bloco 6x3
            front_door_block(&woodDoor,0,0,0,1);
            glTranslatef(2*base,0,0); //bloco 8x3
            block(0,1,0,0);
            glTranslatef(base,0,0); //bloco 9x3
            big_window_block(0,1,0,0);
            glPopMatrix();

        //fileira 4
            glPushMatrix();
            glTranslatef(0,0,4*base); 
            small_window_block(0,1,1,1); //bloco 0x4 //! bug na rotação da janela pequena
            glTranslatef(base,0,0); //bloco 1x4
            front_door_block(&gradeDoor,1,0,0,0);
            glTranslatef(base,0,0); //bloco 2x4
            block(1,0,1,1);

            glTranslatef(6*base,0,0); //bloco 8x4
            front_door_block(&gradeDoor,1,0,1,0);
            glTranslatef(base,0,0); //bloco 9x4
            small_window_block(1,1,0,0); //! bug na rotação da janela pequena
            glPopMatrix();

        //fileira 5
            glPushMatrix();
            glTranslatef(0,0,5*base); 
            small_window_block(1,0,1,0); //bloco 0x5
            glTranslatef(base,0,0); //bloco 1x5
            lateral_door_block(&woodDoor,0,0,1,0);

            glTranslatef(3*base,0,0); //bloco 4x5
            block(1,1,1,0);
            glTranslatef(base,0,0); //bloco 5x5
            block(1,1,1,1);

            glTranslatef(3*base,0,0); 
            lateral_door_block(&woodDoor,0,1,0,0); //bloco 0x5

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
            front_door_block(&gradeDoor,0,1,0,1);
            glTranslatef(base,0,0); //bloco 3x6
            front_door_block(&gradeDoor,0,0,0,1);
            glTranslatef(base,0,0); //bloco 4x6
            block(0,0,0,1);
            glTranslatef(base,0,0); //bloco 5x6
            block(0,0,0,1);
            glTranslatef(base,0,0); //bloco 6x6
            medium_window_block(0,1,0,1);
            glTranslatef(base,0,0); 
            front_door_block(&gradeDoor,0,0,0,1); //bloco 7x6
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
            front_door_block(&gradeDoor,1,0,0,0);
            glTranslatef(base,0,0); //bloco 4x9
            medium_window_block(1,0,0,0);
            glTranslatef(base,0,0); //bloco 5x9
            medium_window_block(1,0,0,0);
            glTranslatef(base,0,0); //bloco 6x9
            block(1,0,1,0);
            glTranslatef(base,0,0); //bloco 7x9
            block(1,0,0,0);
            glTranslatef(base,0,0); //bloco 8x9
            block(1,0,0,0);
            glTranslatef(base,0,0); //bloco 9x9
            big_window_block(1,1,0,0); 
            glPopMatrix();
        //fileira 10
            glPushMatrix();
            glTranslatef(10*base,0,-base); //bloco 1x0

            pilar(base/2, p_thickness,0,0,-base/2);

            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(p_thickness, 2*p_thickness,p_thickness,0,-p_thickness);

            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(p_thickness, 2*p_thickness,p_thickness,0,-p_thickness);

            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(p_thickness, 2*p_thickness,p_thickness,0,-p_thickness);

            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(p_thickness, 2*p_thickness,p_thickness,0,-p_thickness);

            glTranslatef(0,0,2*base); //bloco 1x0
            pilar(base/2, p_thickness,base/18,0,-base/2);
            glPopMatrix();

        // chão do térreo
            ground(10*base, 7*base,ground_offset,0,-ground_offset,2*base);
            ground(3*base, 3*base,ground_offset,0,-ground_offset,-base);
            ground(3*base, 3*base,ground_offset,7*base,-ground_offset,-base);
            ground(base, base,ground_offset,3*base,-ground_offset,base);
            ground(base, base,ground_offset,6*base,-ground_offset,base);
            ground(2*base, 0.5*base,ground_offset,4*base,-ground_offset,1.5*base);
        
        // calçada em volta
            ground(base, 10*base,ground_offset,-base,-ground_offset,-base);
            ground(base, 10*base,ground_offset,10*base,-ground_offset,-base);
}

void first_floor(){
    // chão do primeiro andar
        ground(3*base, 4*base+wall_thickness,betw_height,0,base,5*base);
        ground(3*base, 4*base+wall_thickness,betw_height,7*base,base,5*base);
        ground(3.5*base, 6*base,betw_height,0,base,-base);
        ground(3.5*base, 6*base,betw_height,6.5*base,base,-base);
        ground(base, 4*base,betw_height,3*base,base,base);
        ground(base, 4*base,betw_height,6*base,base,base);
        ground(2*base, 3*base,betw_height,4*base,base,base);
        especial_ground(4*base, 4*base+wall_thickness,betw_height,3*base,base,5*base);

    // fileira -1 : detalhes dos pilares
        glPushMatrix();
        glTranslatef(-base,0,-base); //bloco 1x0
        ground(base/2, p_thickness,betw_height,0.5*base,base,0);
        ground(base/2, 10*base,betw_height/2,0.5*base,base+betw_height/2,0);
        ground(p_thickness, 10*base-p_thickness,betw_height/2,0.5*base,base,p_thickness);
        especial_ground(wall_thickness,10*base-p_thickness,base/4,base-wall_thickness,base,p_thickness);

        glTranslatef(0,0,2*base); //bloco 1x0
        especial_ground(base/2-p_thickness, 2*p_thickness,betw_height/2,0.5*base+p_thickness,base,-p_thickness);

        glTranslatef(0,0,2*base); //bloco 1x0
        especial_ground(base/2-p_thickness, 2*p_thickness,betw_height/2,0.5*base+p_thickness,base,-p_thickness);

        glTranslatef(0,0,2*base); //bloco 1x0
        especial_ground(base/2-p_thickness, 2*p_thickness,betw_height/2,0.5*base+p_thickness,base,-p_thickness);
        
        glTranslatef(0,0,2*base); //bloco 1x0
        especial_ground(base/2-p_thickness, 2*p_thickness,betw_height/2,0.5*base+p_thickness,base,-p_thickness);

        glTranslatef(0,0,2*base); //bloco 1x0
        ground(base/2, p_thickness,betw_height,0.5*base,base,-0.5*p_thickness);
        glPopMatrix();
    // fileira 0:
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,0); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        tall_window_block(0,0,0,1);
        glTranslatef(base,0,0); //bloco 2x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 3x0

        glTranslatef(4*base,0,0);
        big_window_block(1,0,1,1); //bloco 7x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 8x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        tall_window_block(0,0,0,1);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();

    //fileira 1
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,base); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0

        glTranslatef(4*base,0,0);
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();

    //fileira 2
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,2*base); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0

        glTranslatef(4*base,0,0);
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();

    //fileira 3
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,3*base); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);

        glTranslatef(2.6*base,0,0);
        block(0,1,0,1);
        glTranslatef(base,0,0);
        block(0,0,0,1);
        glTranslatef(base,0,0);
        block(0,0,1,1);

        glTranslatef(3.4*base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();

    //fileira 4
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,4*base); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);

        glTranslatef(8*base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();

    //fileira 5
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,5*base); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);

        glTranslatef(8*base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();    

    //fileira 6
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,6*base); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&woodDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0

        glTranslatef(base,0,0);
        block(0,0,0,1); //bloco 0x0
        glTranslatef(base,0,0);
        block(0,0,0,1); //bloco 0x0
        glTranslatef(base,0,0);
        block(0,0,0,1); //bloco 0x0

        glTranslatef(base,0,0);
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&woodDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();
    //fileira 7
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,7*base); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&woodDoor,1,0,1,0);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0

        glTranslatef(4*base,0,0);
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&woodDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();

    //fileira 8
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,8*base); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0

        glTranslatef(4*base,0,0);
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();

    //fileira 9
        glPushMatrix();
        glTranslatef(-0.5*base,base+betw_height,9*base); 
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        tall_window_block(1,0,0,0);
        glTranslatef(base,0,0); //bloco 2x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0

        glTranslatef(4*base,0,0);
        big_window_block(1,0,1,1); //bloco 0x0
        glTranslatef(base,0,0);
        half_block(1,0,0,1);
        glTranslatef(base*0.4,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,0,0,1,0);
        tall_window_block(1,0,0,0);
        glTranslatef(base,0,0); //bloco 1x0
        lateral_door_block(&whiteDoor,1,0,1,1);
        glTranslatef(0.6*base,0,0);
        big_window_block(1,1,0,1); //bloco 0x0
        glPopMatrix();
    
    //fileira 10 - detalhes dos pilares
        glPushMatrix();
        glRotatef(180,0,1,0);
        glTranslatef(-11*base,0,-9*base-p_thickness/2-0.5); //bloco 1x0
        
        ground(base/2, p_thickness,betw_height,0.5*base,base,0);
        ground(base/2, 10*base,betw_height/2,0.5*base,base+betw_height/2,0);
        ground(p_thickness, 10*base-p_thickness,betw_height/2,0.5*base,base,p_thickness);
        especial_ground(wall_thickness,10*base-p_thickness,base/4,base-wall_thickness,base,p_thickness);

        glTranslatef(0,0,2*base); //bloco 1x0
        especial_ground(base/2-p_thickness, 2*p_thickness,betw_height/2,0.5*base+p_thickness,base,-wall_thickness+0.5);

        glTranslatef(0,0,2*base); //bloco 1x0
        especial_ground(base/2-p_thickness, 2*p_thickness,betw_height/2,0.5*base+p_thickness,base,-wall_thickness+0.5);

        glTranslatef(0,0,2*base); //bloco 1x0
        especial_ground(base/2-p_thickness, 2*p_thickness,betw_height/2,0.5*base+p_thickness,base,-wall_thickness+0.5);
        
        glTranslatef(0,0,2*base); //bloco 1x0
        especial_ground(base/2-p_thickness, 2*p_thickness,betw_height/2,0.5*base+p_thickness,base,-wall_thickness+0.5);

        glTranslatef(0,0,2*base); //bloco 1x0
        ground(base/2, p_thickness,betw_height,0.5*base,base,-0.5*p_thickness);
        glPopMatrix();
}
void second_floor(){
        // forro
        especial_ground(4*base, 7*base,ground_offset,-base/2,my*base+betw_height,2*base);
        especial_ground(4*base, 7*base,ground_offset,-base/2+7*base,my*base+betw_height,2*base);
        especial_ground(4*base, 3*base,ground_offset,-base/2,my*base+betw_height,-base);
        especial_ground(4*base, 3*base,ground_offset,7*base-base/2,my*base+betw_height,-base);
        especial_ground(4*base, 3*base,ground_offset,3*base,my*base+betw_height,2*base);

        //telhado
        roof();
}
void teste(){
         //ground(0,0,9*base);
}