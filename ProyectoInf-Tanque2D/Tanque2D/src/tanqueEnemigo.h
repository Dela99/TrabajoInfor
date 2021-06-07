#pragma once
#include "tanque.h"
class tanqueEnemigo : public tanque{
	friend class Interaccion;
public:
	tanqueEnemigo();
	void Inicializa();
};

