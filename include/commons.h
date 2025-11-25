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
#define red glColor3f(0.698, 0.133, 0.133);
#define dark_red glColor3f(0.6f, 0, 0);
#define areia glColor3f(0.741, 0.718, 0.420);
#define areia_shadow glColor3f(0.65, 0.65, 0.4);
#define brown glColor3f(0.54, 0.27, 0.07);
#define blue glColor3f(0, 0, 1);
#define black glColor3f(0, 0, 0);

//* A construção do prédio funciona como uma matriz tridimensional, pela escala, 10x10x3

#define base 50 //* métrica base para a construção das salas
#define mx 10 //* número de linhas de blocos do prédio
#define mz 10 //* número de colunas de blocos do prédio
#define my 2 //* altura da matriz

//* constantes auxiliares
#define wall_thickness 3
#define p_thickness base/10
#define ground_offset 5
#define betw_height 0.3*base