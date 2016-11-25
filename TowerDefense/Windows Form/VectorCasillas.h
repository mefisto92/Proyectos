#pragma once
#include "Casilla.h"
using namespace System::Drawing;
class CVectorCasillas
{
private:
	int X;
	int Y;
	int PX;
	int PY;
	int ne;
	int numCT;
	CCasilla** *vector;
	CCasilla* *tipoT;
public:
	CVectorCasillas(void);
	~CVectorCasillas(void);

	void InsertarNivel(int num_ele, int tam_celdas);
	void MostrarNivel(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas);
	void InsertarNivel2(int num_ele, int tam_celdas);
	void MostrarNivel2(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas);
	void InsertarNivel3(int num_ele, int tam_celdas);
	void MostrarNivel3(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas);
	void InsertarNivel4(int num_ele, int tam_celdas);
	void MostrarNivel4(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas);



	void insertarCasTor(int num_ele, int tam_celdas);
	void MostrarCasTor(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas);
	void inser1( int tam_celdas, int type);
	void Mostra1(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas, int type);
	void insertarBot(int num_ele, int tam_celdas);
	void MostrarBot(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas,int type);
	int getTipo( int x, int y);
	int GetX(int x, int y);
	int GetY(int x, int y);
	bool GetPas(int x, int y);
	void SetPas(int x, int y, bool PAS);
};