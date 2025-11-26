#include "../include/commons.h"

#define STB_IMAGE_IMPLEMENTATION
//biblioteca para ler imagens do diretório
#include "../include/stb_image.h"

#define NUM_TEX 1
GLuint texID[NUM_TEX]; // IDs das texturas

//imagens das texturas
const char *faces[] = {
    "../img/porta.png"
};

// chame isso uma única vez, antes de carregar qualquer imagem
void initStbiOnce() {
    stbi_set_flip_vertically_on_load(1); // OpenGL espera (0,0) em baixo
}

void loadTexture(const char *filename, GLuint texID) {
    int w, h, channels;
    unsigned char *data = stbi_load(filename, &w, &h, &channels, 0);
    if (!data) {
        printf("Erro ao carregar %s\n", filename);
        exit(1);
    }

    glBindTexture(GL_TEXTURE_2D, texID);

    // evita lixo por alinhamento de linhas (default é 4)
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    // wrap e filtro
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE); 
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    GLenum format = (channels == 4) ? GL_RGBA : GL_RGB;

    // se não quiser que a cor do material “tinte” a textura:
    // glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

    glTexImage2D(GL_TEXTURE_2D, 0, format, w, h, 0, format, GL_UNSIGNED_BYTE, data);

    stbi_image_free(data);
}

void initTextures() {
    initStbiOnce();
    glGenTextures(NUM_TEX, texID);
    //for (int i = 0; i < NUM_TEX; i++) {
        loadTexture(faces[0], texID[0]);
    //}
}

void stroke_output(GLfloat x, GLfloat y, char *format,...)//função para escrever em 3d
{
    va_list args;
    char buffer[200], *p;
    va_start(args, format);
    vsprintf(buffer, format, args);
    va_end(args);
    glPushMatrix();
    glScalef(0.05, 0.05, 0.05);
    for (p = buffer; *p; p++)
        glutStrokeCharacter(GLUT_STROKE_ROMAN, *p);
    glPopMatrix();
}