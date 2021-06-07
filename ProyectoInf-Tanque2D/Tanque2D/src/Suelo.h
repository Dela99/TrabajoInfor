#pragma once
#include"ColorRGB.h"
#include "freeglut.h"
#include "Pared.h"
class Suelo {
	Vector2D limite1;
	Vector2D limite2;
public:
	Suelo(float a = 0, float b = 0, float c = 0, float d = 0);  //Limites pared
	virtual ~Suelo();
	void Dibuja();
};

