#include "Torre.h"
#include <stdlib.h>
using namespace System::Drawing;

CTorre::CTorre(int pX,int pY,int pTipo)
{
	x=pX;
	y=pY;
	tipo=pTipo;
	rango = 60*2;
	cd = 10;
	contador = 0;
	dib = 0;
	switch (tipo)
	{
	case 1: daño = 1; costo = 10; cd = 10; dib = 1; break;
	case 2: daño = 2; costo = 20; cd = 10; dib = 2; break;
	case 3: daño = 1; costo = 30; cd = 15; dib = 4; break;
	case 4: daño = 3; costo = 40; cd = 6; dib = 6; break;
	case 5: daño = 6; costo = 50; cd = 10; dib = 5; break;
		case 6: daño = 17; costo = 60; cd = 25; dib = 3; break;
		case 7: daño = 6; costo = 70; cd = 10; dib = 7; break;
	}
}


CTorre::~CTorre(void)
{
}
void CTorre::dibujar(Graphics^g,Bitmap^sprite, int tam_celdas)
{
	if(tipo<-1){
		tipo=rand()%7+1;
		return;
	}
	contador++;
	Rectangle rectOrigen = Rectangle (120*(dib-1), 0, 120, 120);
	Rectangle rectDestino = Rectangle (x, y, tam_celdas, tam_celdas); 
	// tamano de imagen
	g->DrawImage(sprite, rectDestino, rectOrigen, GraphicsUnit::Pixel);
}
void CTorre::deteccion(CVectorEnemigos *en)
{
	if(cd<=contador)
	{
		for(int i=0;i<en->getNe();i++)
		{
			if(en->GetX(i)>x-(50+(1)*60) && en->GetX(i)<x+(50+(1)*60) && en->GetY(i)>y-(50+(1)*60) && en->GetY(i)<y+(50+(1)*60))
			{
				en->SetVida(i,(en->GetVida(i)-daño));
				if(tipo==3)
				{
					if (en->GetTipo(i)!=1)
					en->SetVelocidad(i,en->GetVelocidad(i)/2);
				}
				contador = 0;
				return;
			}
		}
	}
}
void CTorre::remover()
{
}
int CTorre::getX()
{
	return x;
}
int CTorre::getY()
{
	return y;
}
int CTorre::getTipo()
{
	return tipo;
}
int CTorre::getDaño()
{
	return daño;
}
int CTorre::getCosto()
{
	return costo;
}
int CTorre::getCD()
{
	return cd;
}
void CTorre::setX(int pX)
{
	x=pX;
}
void CTorre::setY(int pY)
{
	y=pY;
}
void CTorre::setTipo(int pTipo)
{
	switch (tipo)
	{
	case 1: daño = 1; costo = 10; cd = 10; break;
	case 2: daño = 2; costo = 20; cd = 10; break;
	case 3: daño = 1; costo = 30; cd = 15; break;
	case 4: daño = 3; costo = 40; cd = 6; break;
	case 5: daño = 6; costo = 50; cd = 10; break;
	case 6: daño = 17; costo = 60; cd = 25; break;
	case 7: daño = 6; costo = 70; cd = 10; break;
	}
	tipo = pTipo;
}
void CTorre::setDaño(int DAÑO)
{
	daño = DAÑO;
}
void CTorre::setCD(int CD)
{
	cd = CD;
}