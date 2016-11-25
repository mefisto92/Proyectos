#include "VectorEnemigos.h"
#include "stdio.h"
#include <stdlib.h>

CVectorEnemigos::CVectorEnemigos(void)
{
	vector = NULL;
	ne=0;
	contador = 0;
	contador1 = 0;
	contador2 = 0;
	contador3 = 0;
	contador4 = 0;
	c = c1 = c2 = c3 = c4 = 0;
	oleada = 1;
	OlCont = 0;
}


CVectorEnemigos::~CVectorEnemigos(void)
{
}
void CVectorEnemigos::InsertarEnemigos(int pTipo,CNivel *niv)
{
	CEnemigo**temp = new CEnemigo*[ne+1];
	for(int i=0;i<ne;i++)
	{
		temp[i]=vector[i];
	}
	temp[ne]=new CEnemigo(pTipo,niv);
	ne++;
	vector = temp;
}
void CVectorEnemigos::dibujarTodos(Graphics ^g,Bitmap^sprite)
{
	for(int i=0;i<ne;i++)
	{
		vector[i]->dibujar(g,sprite);
	}
}
void CVectorEnemigos::moverTodos(CNivel *niv)
{
	for(int i=0;i<ne;i++)
	{
		vector[i]->mover(niv);
	}
}
void CVectorEnemigos::QuitarEnemigo(CJugador *jug)
{
	for(int i=0;i<ne;i++)
	{
		//if(x>=vector[i]->getX()-63 && x<=vector[i]->getX()+63 && y>=vector[i]->getY()-63 && y<=vector[i]->getY()+63)
		if(vector[i]->getMuerto()==true)
		{
			jug->setOro(jug->getOro()+vector[i]->getValueT());
			jug->setPuntaje(jug->getPuntaje()+vector[i]->getValueT());
			CEnemigo**temp = new CEnemigo*[ne--];
			for(int k=0 ;k<i;k++)
			{
				temp[k]=vector[k];
			}
			for(int k=i;k<ne;k++)
			{
				temp[k]=vector[k+1];
			}
			vector = temp;
		}
	}
}
void CVectorEnemigos::desaparecerEnemigo(CJugador *jug)
{
	for(int i=0;i<ne;i++)
	{
		if(vector[i]->getDesaparecer()==true)
		{
			CEnemigo**temp = new CEnemigo*[ne--];
			for(int k=0 ;k<i;k++)
			{
				temp[k]=vector[k];
			}
			for(int k=i;k<ne;k++)
			{
				temp[k]=vector[k+1];
			}
			vector = temp;
			jug->setPuntaje(jug->getPuntaje()-10);
			jug->setResto(jug->getResto()-1);
		}
	}
}
void CVectorEnemigos::resetear()
{
	ne=0;
	contador = 0;
	contador1 = 0;
	contador2 = 0;
	contador3 = 0;
	contador4 = 0;
	oleada = 1;
	
	vector = NULL;
	CEnemigo**temp = new CEnemigo*[ne];
	vector = temp;
}
bool CVectorEnemigos::getMuerto(int i)
{
	return vector[i]->getMuerto();
}
bool CVectorEnemigos::getDesaparecido(int i)
{
	return vector[i]->getDesaparecer();
}
int CVectorEnemigos::getNe()
{
	return ne;
}
int CVectorEnemigos::GetValorTotal()
{
	int value = 0;
	for (int i = 0; i < ne; i++)
	{
		value = value +vector[i]->getValor();
	}
	return value;
}
int CVectorEnemigos::GetX(int i)
{
	if (vector == NULL)
		return 0;
	return vector[i]->getX();
}
int CVectorEnemigos::GetY(int i)
{
	if (vector == NULL)
		return 0;
	return vector[i]->getY();
}

bool CVectorEnemigos::GetMuerto(int i)
{
	return vector[i]->getMuerto();
}
int CVectorEnemigos::GetVida(int i)
{
	return vector[i]->getVida();
}
int CVectorEnemigos::GetTipo(int i)
{
	return vector[i]->getTipo();
}
int CVectorEnemigos::GetVelocidad(int i)
{
	return vector[i]->getVelocidad();
}
int CVectorEnemigos::GetOleada()
{
	return oleada;
}
void CVectorEnemigos::SetMuerto(int i, bool MUERTO)
{
	vector[i]->setMuerto(MUERTO);
}
void CVectorEnemigos::SetVida(int i, int VIDA)
{
	vector[i]->setVida(VIDA);
}

int CVectorEnemigos::MejorTorre(int i, int TIPOTORRE, CJugador *jug)
{
	switch (vector[i]->getiniV())
	{
		case 0: if (jug->getOro() >= 40){ return TIPOTORRE; }break;
		case 1: if (jug->getOro() >= 30){ return 3; }break;
		case 2:	if (jug->getOro() >= 20){ return 2; }break;
		case 3: if (jug->getOro() >= 10){ return 1; }break;
	}

	return TIPOTORRE;
}

void CVectorEnemigos::SetVelocidad(int i, int Velocidad)
{
	if(vector[i]->getLenteado()==true)
	{
		return;
	}
	vector[i]->setVelocidad(Velocidad);
	vector[i]->setLenteado(true);
}
void CVectorEnemigos::SetOleada(int Oleada)
{
	oleada = Oleada;
}
void CVectorEnemigos::Oleadas(CNivel *niv)
{
	if(oleada == 1)
	{
		c = 3;
		c1 = 2;
		c2 = 1;
		c3 = 1;
		c4 = 1;
		if(contador >= 50)
		{
			InsertarEnemigos(1,niv);
			contador = 0;
		}
		if(contador1 >= 75)
		{
			InsertarEnemigos(2,niv);
			contador1 = 0;
		}
		if(contador2 >= 350)
		{
			InsertarEnemigos(3,niv);
			contador2 = 0;
		}
		if(contador3 >= 700)
		{
			InsertarEnemigos(4,niv);
			contador3 = 0;
		}
		if(contador4 >= 1600)
		{
			InsertarEnemigos(5,niv);
			contador4 = 0;
			contador1 = 0;
			contador2 = 0;
			contador3 = 0;
			contador = 0;
			oleada = 2;
		}
	}
	if(oleada==2)
	{
		c = 4;
		c2=2;
		if(contador >= 25)
		{
			InsertarEnemigos(1,niv);
			contador = 0;
		}
		if(contador1 >= 50)
		{
			InsertarEnemigos(2,niv);
			contador1 = 0;
		}
		if(contador2 >= 150)
		{
			InsertarEnemigos(3,niv);
			InsertarEnemigos(4,niv);
			contador2 = 0;
		}
		if(contador3 >= 500)
		{
			InsertarEnemigos(5,niv);
			InsertarEnemigos(4,niv);
			contador3 = 0;
		}
		if(contador4 >= 1200)
		{
			InsertarEnemigos(6,niv);
			contador4 = 0;
			OlCont++;
		}
		if(OlCont == 2)
		{
			OlCont=0;
			oleada=3;
		}

	if(oleada>=3)
	{
		c1 = 3;
		c2=3;
		if(contador >= 15)
		{
			InsertarEnemigos(1,niv);
			contador = 0;
		}
		if(contador1 >= 25)
		{
			InsertarEnemigos(2,niv);
			contador1 = 0;
		}
		if(contador2 >= 75)
		{
			c3 = 2;
			c4 = 2;
			InsertarEnemigos(3,niv);
			contador2 = 0;
		}
		if(contador3 >= 200)
		{
			InsertarEnemigos(5,niv);
			InsertarEnemigos(4,niv);
			contador3 = 0;
		}
		if(contador4 >= 500)
		{
			InsertarEnemigos(6,niv);
			contador4 = 0;
			OlCont++;
		}
		if(OlCont == 7)
		{
			OlCont=0;
			oleada++;
			c++;
			c1++;
			c2++;
			c3++;
			c4++;
		}
	}
	}
		contador = contador + rand() % c + 1;
		contador1 = contador1 + rand() % c1 + 1;
		contador2 = contador2 + rand() % c2 + 1;
		contador3 = contador3 + rand() % c3 + 1;
		contador4 = contador4 + rand() % c4 + 1;
}