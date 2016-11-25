#pragma once
#include "VectorEnemigos.h"
using namespace System::Drawing;
class CTorre
{
private:
	int x;
	int y;
	int daño;
	int costo;
	int tipo;
	int rango;
	int dib;
	double bala;
	int cd;
	int contador;
	//int deteccion;
	
public:
	CTorre(int pX,int pY,int pTipo);
	~CTorre(void);
	void dibujar(Graphics^g,Bitmap^sprite, int tam_celdas);
	void remover();
	void deteccion(CVectorEnemigos *en);
	int getX();
	int getY();
	int getTipo();
	int getDaño();
	int getCosto();
	int getCD();


	void setX(int X);
	void setY(int Y);
	void setDaño(int DAÑO);
	void setTipo(int pTipo);
	void setCD(int CD);
};

