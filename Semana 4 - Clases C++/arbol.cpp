#include "arbol.h"

void arbol::dibujarArbol(float x, float y, float z) {
    // Esfera izquierda
    glPushMatrix();
        glTranslatef(x - 0.5, y + 1, z);
        glutSolidSphere(0.4, 30, 10);
    glPopMatrix();

    // Esfera centro
    glPushMatrix();
        glTranslatef(x, y + 1.2, z);
        glutSolidSphere(0.5, 30, 10);
    glPopMatrix();

    // Esfera derecha
    glPushMatrix();
        glTranslatef(x + 0.5, y + 1, z);
        glutSolidSphere(0.4, 30, 10);
    glPopMatrix();

    // Tronco
    glPushMatrix();
        glTranslatef(x, y + 1, z);
        glRotatef(90, 1, 0, 0);
        glutSolidCylinder(0.15, 2, 30, 10);
    glPopMatrix();
}