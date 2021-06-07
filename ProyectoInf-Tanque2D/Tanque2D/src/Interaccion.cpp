#include "Interaccion.h"
Interaccion::Interaccion(void) {
}
Interaccion::~Interaccion() {

}
bool Interaccion::rebote(tanqueJugador& j, Pared& p) {
	Vector2D dir;
	float dist = p.distancia(j.posicion, &dir) - j.radio;
	if (dist <= 0.0f) {
		Vector2D v_inicial = j.velocidad;
		j.velocidad = v_inicial - dir * 2.0 * (v_inicial * dir);
		j.posicion = j.posicion - dir * dist;
		return true;
	}
	return false;
}
bool Interaccion::rebote(tanqueEnemigo& e, Pared& p) {
	Vector2D dir;
	float dist = p.distancia(e.posicion, &dir) - e.radio;
	if (dist <= 0.0f) {
		Vector2D v_inicial = e.velocidad;
		e.velocidad = v_inicial - dir * 2.0 * (v_inicial * dir);
		e.posicion = e.posicion - dir * dist;
		return true;
	}
	return false;
}
bool Interaccion::rebote(Proyectil& proyec, Pared& p) {
	float dist = p.distancia(proyec.posicion) - proyec.radio;
	if (dist <= 0.5f) {
		return true;
	}
	return false;
}
bool Interaccion::colision(Proyectil& p, tanqueEnemigo& e) {
	if (p.tipo == 2) { //disparo tanque enemigo
		Vector2D disp;
		disp = e.getPos() - p.getPosicion();
		float dist = disp.modulo();
		if (dist < p.radio + e.radio) {
			return true;
		}
		return false;
	}
}
bool Interaccion::colision(Proyectil& p, tanqueJugador& j) {
	if (p.tipo == 2) { //disparo tanque jugador
		Vector2D disp;
		disp = j.getPos() - p.getPosicion();
		float dist = disp.modulo();
		if (dist < p.radio + j.radio) {
			return true;
		}
		return false;
	}
}