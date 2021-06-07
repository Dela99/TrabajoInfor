#include "tanque.h"
#include "Vector2D.h"
#include "tanqueJugador.h"
#include "tanqueEnemigo.h"
#include "ListaProyectiles.h"
#include "ListaTanquesEnemigos.h"

class Mundo
{
private:
	Vector2D raton;
	tanqueJugador tankJ;
	tanqueEnemigo tankE;
	ListaProyectiles listaProyec;
	ListaTanquesEnemigos listaTanquesEnem; 
	//enum NivelDificultad {FACIL,NORMAL,DIFICIL} dificultad; Esto lo podemos meter en un coordinador 
public: 
	Mundo();
	void tecla(unsigned char key);
	void inicializa();
	void mueve();
	void dibuja();
	void teclaEspecial(unsigned char);
	void setRaton(int x, int y);
	void agregar();
};
