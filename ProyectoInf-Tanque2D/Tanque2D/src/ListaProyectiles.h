#pragma once
#define MAX_PROYECTILES 100
#include "Proyectil.h"


class ListaProyectiles
{
	Proyectil* lista[MAX_PROYECTILES];
	int numero;
	int municion;

public:
	ListaProyectiles();
	virtual ~ListaProyectiles();
	bool agregar(Proyectil* d);
	void destruirContenido();
	void setPos(Vector2D);
	void setMunicion(int);
	void mueve(float t);
	void dibuja();
	void colision();
	void EliminarProyectil(int);
};

