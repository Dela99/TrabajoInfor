#pragma once
#include"Proyectil.h"
#include"Pared.h"
#include"tanqueEnemigo.h"
#include"tanqueJugador.h"
class Interaccion {
public:
	Interaccion(void);
	virtual ~Interaccion();
	//Interaccion pared
	static bool rebote(tanqueJugador& j, Pared& p);
	static bool rebote(tanqueEnemigo& e, Pared& p);
	static bool rebote(Proyectil& proyec, Pared& p);
	//Interaccion proyectiles con jugador y enemigo
	static bool colision(Proyectil& p, tanqueEnemigo& e);
	static bool colision(Proyectil& p, tanqueJugador& j);
};

