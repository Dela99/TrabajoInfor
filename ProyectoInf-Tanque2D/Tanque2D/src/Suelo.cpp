#include "Suelo.h"
Suelo::Suelo(float a, float b, float c, float d) {
	limite1 = Vector2D(a, b);
	limite2 = Vector2D(c, d);
}
Suelo::~Suelo() {
}
void Suelo::Dibuja() {
	glDisable(GL_LIGHTING);
	glColor3ub(132, 134, 59);
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, 0, limite1.y);
	glVertex3d(limite2.x, 0, limite2.y);
	glVertex3d(limite2.x, 0, limite2.y);
	glVertex3d(limite1.x, 0, limite1.y);
	glEnd();
	glEnable(GL_LIGHTING);
}