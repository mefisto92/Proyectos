#pragma once
#include "Enemigo.h"
#include "Jugador.h"
class CVectorEnemigos
{
private:
	int X;
	int Y;
	int PX;
	int PY;
	int ne;
	int oleada;
	int contador;
	int contador1;
	int contador2;
	int contador3;
	int contador4;
	int c, c1, c2, c3, c4;
	int OlCont;
	CEnemigo **vector;

	int InX;
	int InY;
public:
	CVectorEnemigos(void);
	~CVectorEnemigos(void);
	void InsertarEnemigos(int pTipo,CNivel *niv);
	void dibujarTodos(Graphics ^g,Bitmap^sprite);
	void QuitarEnemigo(CJugador *jug);
	void moverTodos(CNivel *niv);
	void desaparecerEnemigo(CJugador *jug);
	void resetear();

	bool getMuerto(int i);
	bool getDesaparecido(int i);
	int getNe();
	int GetX(int i);
	int GetY(int i);
	bool GetMuerto(int i);
	int GetVida(int i);
	int GetVelocidad(int i);
	int GetOleada();
	int GetTipo(int i);
	int GetValorTotal();

	int MejorTorre(int i, int TIPOTORRE, CJugador *jug);

	void SetMuerto(int i, bool MUERTO);
	void SetVida(int i, int VIDA);
	void SetOleada(int Oleada);
	void SetVelocidad(int i, int Velocidad);
	void Oleadas(CNivel *niv);
};

