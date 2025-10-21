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
#define gray glColor3f(0.6f, 0.6f, 0.6f);
#define red glColor3f(0.9f, 0, 0);
#define dark_red glColor3f(0.6f, 0, 0);

//* constantes auxiliares
#define wall_thickness 3

//* A construção do prédio funciona como uma matriz tridimensional, pela escala, 10x10x3

#define base 50 //* métrica base para a construção das salas
#define mx 10 //* número de linhas de blocos do prédio
#define mz 10 //* número de colunas de blocos do prédio
#define my 3 //* altura da matriz

