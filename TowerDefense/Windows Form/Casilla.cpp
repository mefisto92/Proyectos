#include "Casilla.h"
#include <stdlib.h>
using namespace System::Drawing;

CCasilla::CCasilla(int pX,int pY,int pTipo)
{
	x=pX;
	y=pY;
	tipo=pTipo;
	Pas = false;
}


CCasilla::~CCasilla(void)
{
}

void CCasilla::pintar(Graphics^g,Bitmap^sprite, int tam_celdas)
{
	//TODOS LOS NO SOMBREADOS SON MENOR A 0
	if(tipo<0){
		tipo=rand()%5+1;
		return;
	}
	
	Rectangle rectOrigen = Rectangle (120*(tipo-1), 0, 120, 120);
	Rectangle rectDestino = Rectangle (x, y, tam_celdas, tam_celdas); 
	// tamano de imagen
	g->DrawImage(sprite, rectDestino, rectOrigen, GraphicsUnit::Pixel);
}
void CCasilla::Boton(Graphics^g,Bitmap^sprite, int tam_celdas)
{
	Rectangle rectOrigen = Rectangle (176*(tipo-1), 0, 175, 48);
	Rectangle rectDestino = Rectangle (x+40, y+0.5, 140, 48); 
	// tamano de imagen
	g->DrawImage(sprite, rectDestino, rectOrigen, GraphicsUnit::Pixel);
}
void CCasilla::TiposCasilla(Graphics^g,Bitmap^sprite, int tam_celdas)
{
	if(tipo<0){
		tipo=rand()%6+1;
		return;
	}
	
	Rectangle rectOrigen = Rectangle (171*(tipo-1), 0, 171, 171);
	Rectangle rectDestino = Rectangle (x, y, tam_celdas, tam_celdas); 
	// tamano de imagen
	g->DrawImage(sprite, rectDestino, rectOrigen, GraphicsUnit::Pixel);
}
void CCasilla::CasillasTorre(Graphics^g,Bitmap^sprite, int tam_celdas)
{
	//if(tipo<0){
	//	tipo=rand()%6+1;
	//	return;
	//}
	
	Rectangle rectOrigen = Rectangle (160*(tipo-1), 0, 160, 190);
	Rectangle rectDestino = Rectangle (x, y, 85, 85); 
	// tamano de imagen
	g->DrawImage(sprite, rectDestino, rectOrigen, GraphicsUnit::Pixel);
}

int CCasilla::getX()
{
	return x;
}
int CCasilla::getY()
{
	return y;
}
int CCasilla::getTipo()
{
	return tipo;
}
bool CCasilla::getPas()
{
	return Pas;
}
void CCasilla::setX(int pX)
{
	x=pX;
}
void CCasilla::setY(int pY)
{
	y=pY;
}
void CCasilla::setTipo(int pTipo)
{
	tipo = pTipo;
}
void CCasilla::setPas(bool PAS)
{
	Pas = PAS;
}