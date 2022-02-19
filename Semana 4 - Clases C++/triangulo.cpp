#include "triangulo.h"

void triangulo::dibujarTriangulo() {
    glPushMatrix();
        glBegin(GL_TRIANGLES);
            glVertex3f(-0.5, 2, 0);
            glVertex3f(0.5, 2, 0);
            glVertex3f(0, 3, 0);
        glEnd();
    glPopMatrix();
}