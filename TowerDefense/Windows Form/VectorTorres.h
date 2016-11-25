#pragma once
#include "Torre.h"
#include "VectorCasillas.h"
#include "stdio.h"
#include "Jugador.h"
#include "VectorEnemigos.h"
using namespace System::Drawing;
class CVectorTorres
{
private:
	int X;
	int Y;
	int PX;
	int PY;
	int ne;
	CTorre* *vector;
public:
	CVectorTorres(void);
	~CVectorTorres(void);
	 
	int getNe();

	void InsertarTorre(int tam_celdas, int x, int y, int tipo,int tp,CJugador *jug);
	void MostrarTorre(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas);
	void QuitarTorre(int tam_celdas, int x, int y);
	void detectar(CVectorEnemigos *en);
	void Resetear();
	void guardarEnArchivo(FILE *archivo);
	void leerDeArchivo(FILE *archivo);

};

