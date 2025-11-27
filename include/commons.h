#include <GL/glut.h>
#include <GL/glu.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

//* constantes de cores

#define white glColor3f(0.9f, 0.9f, 0.9f);
#define white_shadow glColor3f(0.8f, 0.8f, 0.8f);
#define gray glColor3f(0.6f, 0.6f, 0.6f);
#define cinza_claro glColor3f(0.8, 0.8, 0.8);
#define red glColor3f(0.698, 0.133, 0.133);
#define dark_red glColor3f(0.6f, 0, 0);
#define areia glColor3f(0.741, 0.718, 0.420);
#define areia_shadow glColor3f(0.65, 0.65, 0.4);
#define brown glColor3f(0.54, 0.27, 0.07);
#define blue glColor3f(0, 0, 1);
#define black glColor3f(0, 0, 0);
#define green glColor3f(0.06f, 0.0164f, 0.102f);
#define green_flower glColor3f(0.2, 0.7, 0.2);
#define blue_sing glColor3f(0, 0, 0.5);
#define bege glColor3f(0.97f, 0.89f, 0.62f);
#define pistache glColor3f(0.6f, 0.9f, 0.4f);
#define loiro glColor3f(0.9f, 0.8f, 0.4f);
#define pardo glColor3f(0.60f, 0.42f, 0.26f);

//* A construção do prédio funciona como uma matriz tridimensional, pela escala, 10x10x3

#define base 50 //* métrica base para a construção das salas
#define mx 10   //* número de linhas de blocos do prédio
#define mz 10   //* número de colunas de blocos do prédio
#define my 2    //* altura da matriz

//* constantes auxiliares
#define wall_thickness 3
#define p_thickness base / 10
#define ground_offset 5
#define betw_height 0.3 * base