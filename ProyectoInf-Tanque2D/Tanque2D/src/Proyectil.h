#pragma once
#include "Vector2D.h"

class Proyectil
{
	friend class Interaccion;
private:
	float radio;
	Vector2D posicion;
	Vector2D velocidad;
	int tipo; //Para tener varios tipos de disparo
	//bool disparado = false;//para saber si se ha disparado o no
	//inecesario si se crea en en momento que se dispara

public:
	Proyectil();
	Proyectil(Vector2D,Vector2D,int, float);
	virtual ~Proyectil();
	void dibuja();
	void mueve(float);
	void setPos(Vector2D);
	Vector2D getPosicion();
	//void setVel(Vector2D apuntando);
	//bool getDisparado();//también innecesario
};

