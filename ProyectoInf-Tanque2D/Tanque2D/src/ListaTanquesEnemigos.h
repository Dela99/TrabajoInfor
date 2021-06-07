#pragma once
#include "tanqueEnemigo.h"
#include"tanque.h"
#define MAX_TANQUES_ENEM 10
class ListaTanquesEnemigos {
	tanqueEnemigo *ListaTanque_enem[MAX_TANQUES_ENEM];
	int numero;
public:
	ListaTanquesEnemigos();
	~ListaTanquesEnemigos();
	bool agregar(tanqueEnemigo* d);
	void destruirContenido();
	void mueve(float t);
	void dibuja();
	void EliminarTanqueEnem(int);
	float getNumero();
};

