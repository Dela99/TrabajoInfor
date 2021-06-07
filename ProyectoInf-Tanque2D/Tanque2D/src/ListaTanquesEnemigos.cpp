#include "ListaTanquesEnemigos.h"
ListaTanquesEnemigos::ListaTanquesEnemigos() {
	numero = 0;
	for (int i = 0; i < MAX_PROYECTILES; i++)
		ListaTanque_enem[i] = 0;
}
ListaTanquesEnemigos:: ~ListaTanquesEnemigos() {
}
bool ListaTanquesEnemigos::agregar(tanqueEnemigo* d) {
	for (int i = 0; i < numero; i++) {
		if (ListaTanque_enem[i] == d) {
			false;
		}
	}
	if (numero < MAX_TANQUES_ENEM) {  //Se agregan tanques enemigos hasta llegar al limite
		ListaTanque_enem[numero] = d;
		numero += 1;
		return true;
	}
	else {
		return false;
	}
	return true;
}
void ListaTanquesEnemigos::destruirContenido() {

	for (int i = 0; i < numero; i++) {
		delete ListaTanque_enem[i];
	}
	numero = 0;
}
void ListaTanquesEnemigos::mueve(float t) {
	for (int i = 0; i < numero; i++)
		ListaTanque_enem[i]->Mueve(t);
}
void ListaTanquesEnemigos::dibuja() {
	for (int i = 0; i < numero; i++)
		ListaTanque_enem[i]->Dibuja();
}
void ListaTanquesEnemigos::EliminarTanqueEnem(int x) {
	if ((x < 0) || (x >= numero)) {
		return;
	}
	else {
		delete ListaTanque_enem[x];
	}
	numero = numero - 1;
	for (int i = 0; i < numero; i++) {
		ListaTanque_enem[i] = ListaTanque_enem[i + 1];
	}
}
float ListaTanquesEnemigos::getNumero() {
	return numero;
}