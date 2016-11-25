#include "Enemigo.h"
#include "stdlib.h"

CEnemigo::CEnemigo(int pTipo, CNivel *niv)
{
	switch(niv->getNivel())
	{
		case 1: x=110;y=110;break;
		case 2: x=110;y=110+60*3;break;
	}
	desaparecer = false;
	muerto = false;
	lenteado = false;
	Amenaza = 0;
	//tipo = rand()&6+1;
	tipo = pTipo;
	ini = 0;
	iniV = 0;
	switch(tipo)
	{
	case 1: velocidad = 1; valor = 1; vida = 10; valueT = 2; ini = 0; break;
	case 2: velocidad = 2; valor = 2; vida = 13; valueT = 4; ini = 1; break;
	case 3: velocidad = 5; valor = 4; vida = 33; valueT = 6; ini = 2; break;
	case 4: velocidad = 15; valor = 3; vida = 5; valueT = 5; ini = 3; break;
	case 5: velocidad = 8; valor = 10; vida = 50; valueT = 12; ini = 4; break;
	case 6: velocidad = 10; valor = 20; vida = 100; valueT = 14; ini = 5; break;
	case 7: tipo = 6; velocidad = 10; valor = 20; vida = 50; valueT = 15; ini = 5; break;
	}
	vidaTemp = vida;
}


CEnemigo::~CEnemigo(void)
{
}
void CEnemigo::dibujar(Graphics^g,Bitmap^sprite)
{
	if(tipo<0 ||  tipo>7){
		tipo=1;
		return;
	}
	Rectangle rectOrigen = Rectangle ((85*(tipo-1)+8*ini),(85*(iniV)+8*(iniV)+iniV),90,90);
	Rectangle rectDestino = Rectangle (x,y,60,60); //1932, 982
	g->DrawImage(sprite, rectDestino, rectOrigen, GraphicsUnit::Pixel);
}
void CEnemigo::mover(CNivel *niv)
{
	Muerte();
	if(niv->getNivel()==1)
	{
		if(y<110+60 && y>=110 && x==110)
		{
			y=y+velocidad;
			if(y>=110+60)
			{
				y=110+60;
			}
		}
		if(x==110 && y>=110+60*1 && y<110+60*3 && (tipo==4 || tipo==5))
		{
			y=y+velocidad;
			if(y>=110+60*3)
			{
				y=110+60*3;
			}
		}
		if(x>=110 && x<110+60*6 && y==110+60*3 && (tipo==4 || tipo==5))
		{
			x=x+velocidad;
			if(x>=110+60*6)
			{
				x=110+60*6;
			}
		}
		if(x==110+60*6 && y>=110+60*3 && y<110+60*6 && (tipo==4 || tipo==5))
		{
			y=y+velocidad;
			if(y>=110+60*6)
			{
				y=110+60*6;
			}
		}
		if(y==110+60 && x>=110 && x<110+60*7 && (tipo!=4 && tipo!=5))
		{
			x=x+velocidad;
			if(x>=110+60*7)
			{
				x=110+60*7;
			}
		}
		if(x==110+60*7 && y>=110+60 && y<110+60*3 && (tipo!=4 && tipo!=5))
		{
			y=y+velocidad;
			if(y>=110+60*3)
			{
				y=110+60*3;
			}
		}
		if(y==110+60*3 && x<=110+60*7 && x>110+60 && (tipo!=4 && tipo!=5))
		{
			x=x-velocidad;
			if(x<=110+60)
			{
				x=110+60;
			}
		}
		if(x==110+60 && y>=110+60*3 && y<110+60*6 && (tipo!=4 && tipo!=5))
		{
			y=y+velocidad;
			if(y>=110+60*6)
			{
				y=110+60*6;
			}
		}
		if(x>=110+60 && x<110+60*11 && y==110+60*6)
		{
			x=x+velocidad;
			if(x>=110+60*11)
			{
				x=110+60*11;
			}
		}
		if(x==110+60*11 && y<=110+60*6 && y>110+60*4)
		{
			y=y-velocidad;
			if(y<=110+60*4)
			{
				y=110+60*4;
			}
		}
		if(x<=110+60*11 && x>110+60*9 && y==110+60*4)
		{
			x=x-velocidad;
			if(x<=110+60*9)
			{
				x=110+60*9;
			}
		}
		if(x==110+60*9 && y>110+60*2 && y<=110+60*4)
		{
			y=y-velocidad;
			if(y<=110+60*2)
			{
				y=110+60*2;
			}
		}
		if(x>=110+60*9 && y==110+60*2 && x<110+60*10)
		{
			x=x+velocidad;
			if(x>=110+60*10)
			{
				x=110+60*10;
			}
		}
		if(y>110+60*1 && y<=110+60*2 && x==110+60*10)
		{
			y=y-velocidad;
			if(y<=110+60*1)
			{
				y=110+60*1;
			}
		}
		if(y==110+60*1 && x<110+60*12 && x>=110+60*10)
		{
			x=x+velocidad;
			if(x>=110+60*12)
			{
				x=110+60*12;
			}
		}
		if(y==110+60*1 && x==110+60*12)
		{
			desaparecer=true;
		}
	}
	
	//_____________________________________________________________________
	
	if(niv->getNivel()==2)
	{
		if(x>=110 && x<110+60*2 && y==110+60*3)
		{
			x=x+velocidad;
			if(x>=110+60*2)
			{
				x=110+60*2;
			}
		}
		if(x==110+60*2 && y<=110+60*4 && y>110 && (tipo!=2 && tipo!=4))
		{
			y=y-velocidad;
			if(y<=110)
			{
				y=110;
			}
		}
		if(x<110+60*5 && x>=110+60*2 && y==110)
		{
			x=x+velocidad;
			if(x>=110+60*5)
			{
				x=110+60*5;
			}
		}
		if(x==110+60*5 && y<110+60*2 && y>=110)
		{
			y=y+velocidad;
			if(y>=110+60*2)
			{
				y=110+60*2;
			}
		}
		if(x<110+60*8 && x>=110+60*3 && y==110+60*2)
		{
			x=x+velocidad;
			if(x>=110+60*8)
			{
				x=110+60*8;
			}
		}
		if(y<110+60*4 && y>=110+60*2 && x==110+60*8)
		{
			y=y+velocidad;
			if(y>=110+60*4)
			{
				y=110+60*4;
			}
		}
		if(x>=110+60*7 && x<110+60*13 && y==110+60*4)
		{
			x=x+velocidad;
			if(x>=110+60*13)
			{
				x=110+60*13;
			}
		}
		if(x==110+60*2 && y>=110+60*3 && y<110+60*7 && (tipo==2 || tipo==4))
		{
			y=y+velocidad;
			if(y>=110+60*7)
			{
				y=110+60*7;
			}
		}
		if(y==110+60*7 && x>=110+60*2 && x<=110+60*5)
		{
			x=x+velocidad;
			if(x>110+60*5)
			{
				x=110+60*5;
			}
		}
		if(y<=110+60*7 && y>110+60*5 && x==110+60*5)
		{
			y=y-velocidad;
			if(y<110+60*5)
			{
				y=110+60*5;
			}
		}
		if(y==110+60*5 && x>=110+60*5 && x<110+60*8)
		{
			x=x+velocidad;
			if(x>110+60*8)
			{
				x=110+60*8;
			}
		}
		if(y>110+60*4 && y<=110+60*5 && x==110+60*8)
		{
			y=y-velocidad;
			if(y<110+60*4)
			{
				y=110+60*4;
			}
		}
		if(y==110+60*4 && x==110+60*13)
		{
			desaparecer=true;
		}
	}
}
void CEnemigo::Muerte()
{
	if(vida>=vidaTemp*70/100)
	{
		iniV=0;
	}
	if(vida>=vidaTemp*50/100 && vida<=vidaTemp*70/100)
	{
		iniV=1;
	}
	if(vida>=vidaTemp*30/100 && vida<=vidaTemp*50/100)
	{
		iniV=2;
	}
	if(vida>=vidaTemp*10/100 && vida<=vidaTemp*30/100)
	{
		iniV=3;
	}
	if(vida <= 0)
	{
		muerto = true;
	}
}
int CEnemigo::getX()
{
	//return (x-110)/60;
	return x;
}
int CEnemigo::getY()
{
	//return (y - 110) / 60;
	return y;
}
int CEnemigo::getiniV()
{
	return iniV;
}
int CEnemigo::getVelocidad()
{
	return velocidad;
}
int CEnemigo::getVida()
{
	return vida;
}
int CEnemigo::getValor()
{
	return valor;
}
int CEnemigo::getValueT()
{
	return valueT;
}
int CEnemigo::getTipo()
{
	return tipo;
}
bool CEnemigo::getMuerto()
{
	return muerto;
}
bool CEnemigo::getDesaparecer()
{
	return desaparecer;
}
bool CEnemigo::getLenteado()
{
	return lenteado;
}
void CEnemigo::setX(int X)
{
	x=X;
}
void CEnemigo::setY(int Y)
{
	y=Y;
}
void CEnemigo::setVelocidad(int VELOCIDAD)
{
	velocidad = VELOCIDAD;
}
void CEnemigo::setVida(int VIDA)
{
	vida = VIDA;
}
void CEnemigo::setValor(int VALOR)
{
	valor = VALOR;
}
void CEnemigo::setMuerto(bool MUERTO)
{
	muerto = MUERTO;
}
void CEnemigo::setDesaparecer(bool DESAPARECER)
{
	desaparecer = DESAPARECER;
}
void CEnemigo::setLenteado(bool Lenteado)
{
	lenteado = Lenteado;
}