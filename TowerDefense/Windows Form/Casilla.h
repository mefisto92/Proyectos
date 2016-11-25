#pragma once
using namespace System::Drawing;

class CCasilla
{
protected:
	int x;
	int y;
	int tipo;
	int color;
	bool Pas;
public:
	CCasilla(int pX,int pY, int tipo);
	~CCasilla(void);
	void pintar(Graphics^g,Bitmap^sprite, int tam_celdas);
	void Boton(Graphics^g,Bitmap^sprite, int tam_celdas);
	int getX();
	int getY();
	int getTipo();
	bool getPas();
	void TiposCasilla(Graphics^g,Bitmap^sprite, int tam_celdas);
	void CasillasTorre(Graphics^g,Bitmap^sprite, int tam_celdas);
	void setX(int X);
	void setY(int Y);
	void setTipo(int pTipo);
	void setPas(bool Pas);
};