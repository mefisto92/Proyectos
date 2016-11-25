#pragma once
#include "Nivel.h"
using namespace System::Drawing;
class CEnemigo
{
private:
	int x;
	int y;
	int velocidad;
	int vida;
	int valor;
	int valueT;
	int tipo;
	bool muerto;
	bool desaparecer;
	bool lenteado;
	int ini;
	int iniV;
	int vidaTemp;

	int Amenaza;

public:
	CEnemigo(int pTipo, CNivel *niv);
	~CEnemigo(void);
	void dibujar(Graphics^g,Bitmap^sprite);
	void mover(CNivel *niv);
	void Muerte();

	int getX();
	int getY();
	int getVelocidad();
	int getVida();
	int getValor();
	int getValueT();
	int getTipo();
	int getiniV();
	bool getMuerto();
	bool getDesaparecer();
	bool getLenteado();

	void setX(int X);
	void setY(int Y);
	void setiniV(int INIV);
	void setVelocidad(int VELOCIDAD);
	void setVida(int VIDA);
	void setValor(int VALOR);
	void setMuerto(bool MUERTO);
	void setDesaparecer(bool DESAPARECER);
	void setLenteado(bool Lenteado);
};

