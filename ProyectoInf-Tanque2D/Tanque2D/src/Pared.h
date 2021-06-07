#pragma once
#include "ColorRGB.h"
#include"Vector2D.h"
class Pared {
	friend class Interaccion;
	Vector2D limite1;
	Vector2D limite2;
public:
	Pared(float a = 0, float b = 0, float c = 0, float d = 0);  //Limites pared
	virtual ~Pared();
	float distancia(Vector2D punto, Vector2D* direccion = 0);
	void Dibuja();
};

