#include "../include/roof.h"

void roof(){
    //primeiro telhado
            glPushMatrix();
        glTranslatef(-0.5*base,2.4*base,9*base);
        glRotatef(90,0,1,0);
        glRotatef(60,1,0,0);
        red
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 2.31*base);
            glVertex2f( 10*base, 2.31*base);
            glVertex2f( 10*base,0);
        glEnd();
        glPopMatrix();
            
        glPushMatrix();
        glTranslatef(3.5*base,2.4*base,9*base);
        glRotatef(90,0,1,0);
        glRotatef(-60,1,0,0);
        red
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 2.31*base);
            glVertex2f( 10*base, 2.31*base);
            glVertex2f( 10*base,0);
        glEnd();
        glPopMatrix();

            glPushMatrix();
            glTranslatef(-0.5*base,2.4*base,-base);
            white
            glBegin(GL_TRIANGLES); //quadrado
                glVertex2f(0,0);
                glVertex2f( 4*base,0);
            glVertex2f(2*base,1.15*base);
            glEnd();
            glPopMatrix();

            glPushMatrix();
        glTranslatef(-0.5*base,2.4*base,9*base);
        white
        glBegin(GL_TRIANGLES); //quadrado
            glVertex2f(0,0);
            glVertex2f( 4*base,0);
            glVertex2f(2*base,1.15*base);
        glEnd();
        glPopMatrix();

   //detalhes das laterais 
      glPushMatrix();
    glTranslatef(-base,2.1*base,-1.1*base);
    areia
    glBegin(GL_QUADS); //quadrado
        glVertex2f(0,0);
        glVertex2f(0, 0.5*base);
        glVertex2f( base, 0.5*base);
        glVertex2f( base,0);
    glEnd();
    glPopMatrix();
        
    glPushMatrix();
        glRotatef(90,0,1,0);
    glTranslatef(-9.1*base,2.1*base,-base);
    areia
    glBegin(GL_QUADS); //quadrado
        glVertex2f(0,0);
        glVertex2f(0, 0.5*base);
        glVertex2f( 10.2*base, 0.5*base);
        glVertex2f( 10.2*base,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(90,0,1,0);
    glTranslatef(-9.1*base,2.25*base,-base);
    glRotatef(90,1,0,0);
    areia_shadow
    glBegin(GL_QUADS); //quadrado
        glVertex2f(0,0);
        glVertex2f(0, 0.5*base);
        glVertex2f( 10.2*base, 0.5*base);
        glVertex2f( 10.2*base,0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-base,2.1*base,9.1*base);
    areia
    glBegin(GL_QUADS); //quadrado
        glVertex2f(0,0);
        glVertex2f(0, 0.5*base);
        glVertex2f( base, 0.5*base);
        glVertex2f( base,0);
    glEnd();
    glPopMatrix();

   // segundo telhado
    glPushMatrix();
    glTranslatef(6.5*base,2.4*base,9*base);
    glRotatef(90,0,1,0);
    glRotatef(60,1,0,0);
    red
    glBegin(GL_QUADS); //quadrado
        glVertex2f(0,0);
        glVertex2f(0, 2.31*base);
        glVertex2f( 10*base, 2.31*base);
        glVertex2f( 10*base,0);
    glEnd();
    glPopMatrix();
        
    glPushMatrix();
    glTranslatef(10.5*base,2.4*base,9*base);
    glRotatef(90,0,1,0);
    glRotatef(-60,1,0,0);
    red
    glBegin(GL_QUADS); //quadrado
        glVertex2f(0,0);
        glVertex2f(0, 2.31*base);
        glVertex2f( 10*base, 2.31*base);
        glVertex2f( 10*base,0);
    glEnd();
    glPopMatrix();

        glPushMatrix();
        glTranslatef(6.5*base,2.4*base,-base);
        white
        glBegin(GL_TRIANGLES); //quadrado
            glVertex2f(0,0);
            glVertex2f( 4*base,0);
        glVertex2f(2*base,1.15*base);
        glEnd();
        glPopMatrix();

        glPushMatrix();
    glTranslatef(6.5*base,2.4*base,9*base);
    white
    glBegin(GL_TRIANGLES); //quadrado
        glVertex2f(0,0);
        glVertex2f( 4*base,0);
        glVertex2f(2*base,1.15*base);
    glEnd();
    glPopMatrix();

   //detalhes das laterais - segundo telhado
      glPushMatrix();
        glTranslatef(10*base,2.1*base,-1.1*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( base, 0.5*base);
            glVertex2f( base,0);
        glEnd();
        glPopMatrix();
            
        glPushMatrix();
        glRotatef(90,0,1,0);
        glTranslatef(-9.1*base,2.1*base,11*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( 10.2*base, 0.5*base);
            glVertex2f( 10.2*base,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90,0,1,0);
        glTranslatef(-9.1*base,2.25*base,10.5*base);
        glRotatef(90,1,0,0);
        areia_shadow
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( 10.2*base, 0.5*base);
            glVertex2f( 10.2*base,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(10*base,2.1*base,9.1*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( base, 0.5*base);
            glVertex2f( base,0);
        glEnd();
        glPopMatrix();

           //detalhes das laterais - segundo telhado
      glPushMatrix();
        glTranslatef(10*base,2.1*base,-1.1*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( base, 0.5*base);
            glVertex2f( base,0);
        glEnd();
        glPopMatrix();

   //detalhes internos - frente        
        glPushMatrix();
        glTranslatef(6*base,2.1*base,-1.1*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( base, 0.5*base);
            glVertex2f( base,0);
        glEnd();
        glPopMatrix();
            
        glPushMatrix();
        glRotatef(90,0,1,0);
        glTranslatef(-9.1*base,2.1*base,6*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( 4*base, 0.5*base);
            glVertex2f( 4*base,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90,0,1,0);
        glTranslatef(-9.1*base,2.25*base,6*base);
        glRotatef(90,1,0,0);
        areia_shadow
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( 4*base, 0.5*base);
            glVertex2f( 4*base,0);
        glEnd();
        glPopMatrix();

        //continuação
            glPushMatrix();
            glRotatef(90,0,1,0);
            glTranslatef(-1.9*base,2.1*base,6*base);
            areia
            glBegin(GL_QUADS); //quadrado
                glVertex2f(0,0);
                glVertex2f(0, 0.5*base);
                glVertex2f( 3*base, 0.5*base);
                glVertex2f( 3*base,0);
            glEnd();
            glPopMatrix();

            glPushMatrix();
            glRotatef(90,0,1,0);
            glTranslatef(-1.9*base,2.25*base,6*base);
            glRotatef(90,1,0,0);
            areia_shadow
            glBegin(GL_QUADS); //quadrado
                glVertex2f(0,0);
                glVertex2f(0, 0.5*base);
                glVertex2f( 3*base, 0.5*base);
                glVertex2f( 3*base,0);
            glEnd();
            glPopMatrix();

        //finalização
        glPushMatrix();
        glTranslatef(6*base,2.1*base,9.1*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( base, 0.5*base);
            glVertex2f( base,0);
        glEnd();
        glPopMatrix();
    
  //detalhes internos - frente 2
        glPushMatrix();
        glTranslatef(3*base,2.1*base,-1.1*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( base, 0.5*base);
            glVertex2f( base,0);
        glEnd();
        glPopMatrix();
            
        glPushMatrix();
        glRotatef(90,0,1,0);
        glTranslatef(-9.1*base,2.1*base,4*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( 4*base, 0.5*base);
            glVertex2f( 4*base,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90,0,1,0);
        glTranslatef(-9.1*base,2.25*base,3.5*base);
        glRotatef(90,1,0,0);
        areia_shadow
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( 4*base, 0.5*base);
            glVertex2f( 4*base,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90,0,1,0);
        glTranslatef(-1.9*base,2.1*base,4*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( 3*base, 0.5*base);
            glVertex2f( 3*base,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glRotatef(90,0,1,0);
        glTranslatef(-1.9*base,2.25*base,3.5*base);
        glRotatef(90,1,0,0);
        areia_shadow
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( 3*base, 0.5*base);
            glVertex2f( 3*base,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(3*base,2.1*base,9.1*base);
        areia
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 0.5*base);
            glVertex2f( base, 0.5*base);
            glVertex2f( base,0);
        glEnd();
        glPopMatrix();

  // telhado menor
         glPushMatrix();
        glTranslatef(3.5*base,2.4*base,5*base);
        glRotatef(90,0,1,0);
        glRotatef(60,1,0,0);
        red
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 1.75*base);
            glVertex2f( 3*base, 1.75*base);
            glVertex2f( 3*base,0);
        glEnd();
        glPopMatrix();
            
        glPushMatrix();
        glTranslatef(6.5*base,2.4*base,5*base);
        glRotatef(90,0,1,0);
        glRotatef(-60,1,0,0);
        red
        glBegin(GL_QUADS); //quadrado
            glVertex2f(0,0);
            glVertex2f(0, 1.75*base);
            glVertex2f( 3*base, 1.75*base);
            glVertex2f( 3*base,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslatef(3.5*base,2.4*base,2*base);
        white
        glBegin(GL_TRIANGLES); //quadrado
            glVertex2f(0,0);
            glVertex2f( 3*base,0);
        glVertex2f(1.5*base,0.85*base);
        glEnd();
        glPopMatrix();

        glPushMatrix();
    glTranslatef(3.5*base,2.4*base,5*base);
        glBegin(GL_TRIANGLES); //quadrado
            glVertex2f(0,0);
            glVertex2f( 3*base,0);
        glVertex2f(1.5*base,0.85*base);
    glEnd();
    glPopMatrix();
}
