#include "Pared.h"
Pared::Pared(float a , float b , float c , float d ) {
	limite1 = Vector2D(a, b);
	limite2 = Vector2D(c, d);
}
Pared::~Pared() {
}
void Pared::Dibuja() {
	glDisable(GL_LIGHTING);
	glColor3ub(132, 134, 59);
	glBegin(GL_POLYGON);
	glVertex3d(limite1.x, limite1.y, 10);
	glVertex3d(limite2.x, limite2.y, 10);
	glVertex3d(limite2.x, limite2.y, -10);
	glVertex3d(limite1.x, limite1.y, -10);
	glEnd();
	glEnable(GL_LIGHTING);
}
//Se calcula de distancia de una pared a un punto
//Además, se modifica el valor de un vector direccion que contendrá
//el vector unitario saliente que indica la direccion de la
//recta más corta entre el punto y la pared.
float Pared::distancia(Vector2D punto, Vector2D* direccion) {
	Vector2D u = (punto - limite1);
	Vector2D v = (limite2 - limite1).unitario();
	float longitud = (limite1 - limite2).modulo();
	Vector2D dir;
	float valor = u * v;
	float distancia = 0;
	if (valor < 0)
		dir = u;
	else if (valor > longitud)
		dir = (punto - limite2);
	else
		dir = u - v * valor;
	distancia = dir.modulo();
	if (direccion != 0) //si nos dan un vector…
		*direccion = dir.unitario();
	return distancia;
}