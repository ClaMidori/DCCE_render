#ifndef TEXTURE_H
#define TEXTURE_H

#define STB_IMAGE_IMPLEMENTATION
#define NUM_TEX 1 
extern GLuint texID[NUM_TEX]; // IDs das texturas

// Compatibilidade com headers antigos
//ajustar imagens com textura do polígono
#ifndef GL_CLAMP_TO_EDGE
#define GL_CLAMP_TO_EDGE GL_CLAMP
#endif

void initStbiOnce();
void loadTexture(const char *filename, GLuint texID);
void initTextures();
void stroke_output(GLfloat x, GLfloat y, char *format,...);

#endif