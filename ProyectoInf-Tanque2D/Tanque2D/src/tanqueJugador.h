#pragma once
#include "ColorRGB.h"
#include "tanque.h"

class tanqueJugador : public tanque
{
	friend class Interaccion;
protected:


public:
	tanqueJugador();
	void Inicializa();
	void mueveTecla(unsigned char key);
};

