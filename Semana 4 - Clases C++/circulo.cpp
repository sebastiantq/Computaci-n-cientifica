#include "circulo.h"

void circulo::dibujarCirculo(float x, float y, float z, double ir, double or) {
	glPushMatrix();
	glTranslatef(x, y, z);
	glutSolidTorus(ir, or, 10, 50);
	glPopMatrix();
}