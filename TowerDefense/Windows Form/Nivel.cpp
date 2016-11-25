#include "Nivel.h"


CNivel::CNivel(void)
{
	pausa = 0;
	p=false;
	nivel = 0;
}


CNivel::~CNivel(void)
{
}
void CNivel::pantalla(Graphics^g,Bitmap^sprite)
{
	Rectangle rectOrigen = Rectangle (0,0,1932,982);
	Rectangle rectDestino = Rectangle (0, 0,1500,800); 
	g->DrawImage(sprite, rectDestino, rectOrigen, GraphicsUnit::Pixel);
}
void CNivel::fondo(Graphics^g,Bitmap^sprite)
{
	Rectangle rectOrigen = Rectangle (0,0,932,1091);
	Rectangle rectDestino = Rectangle (0, 0,1500,1220); //1932, 982
	g->DrawImage(sprite, rectDestino, rectOrigen, GraphicsUnit::Pixel);
}
void CNivel::Pausa(Graphics^g,Bitmap^sprite)
{
	Rectangle rectOrigen = Rectangle (200*pausa,0,200,200);
	Rectangle rectDestino = Rectangle (0, 0,50,50); //1932, 982
	g->DrawImage(sprite, rectDestino, rectOrigen, GraphicsUnit::Pixel);
}
void CNivel::mapa(Graphics^g,int tam_celdas)
{
	g->DrawRectangle(Pens::Black,50,50,900,600);
	for(int fil=1;fil<10;fil++)
		g->DrawLine(Pens::Black,50,50+fil*tam_celdas,950,50+fil*tam_celdas);
	for(int col=0;col<15;col++)
		g->DrawLine(Pens::Black,50+col*tam_celdas,50,50+col*tam_celdas,650);	
}
void CNivel::funcionescuadros(Graphics^g,int tam_celdas)
{
	g->DrawRectangle(Pens::Black,840,40 ,680,90);
	g->DrawRectangle(Pens::Black,840,265,680,90);
	g->DrawRectangle(Pens::Black,840,490,680,90);
}
bool CNivel::getP()
{
	return p;
}
void CNivel::setPausa(int PAUSA)
{
	pausa = PAUSA;
	if(p==true)
	{
		pausa=1;
	}
	else
	{
		pausa=0;
	}
}
void CNivel::setP(bool P)
{
	p=P;
}
void CNivel::setNivel(int NIVEL)
{
	nivel = NIVEL;
}
int CNivel::getNivel()
{
	return nivel;
}