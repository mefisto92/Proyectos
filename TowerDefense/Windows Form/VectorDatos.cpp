#include "VectorDatos.h"
#include "string.h"

CVectorDatos::CVectorDatos()
{
	hecho = false;
	peligro = false;
	ne = 0;
	Nespacio = 0;
	vector = NULL;
	espacio = NULL;
	Xx = Yy = 0;
	Amenaza = 0;
	Enemigo = 0;
}


CVectorDatos::~CVectorDatos()
{
}

void CVectorDatos::insertarDatos(int x, int y, int pioridad)
{
	CDatos**temp = new CDatos*[ne + 1];
	for (int i = 0; i<ne; i++)
	{
		temp[i] = vector[i];
	}
	temp[ne] = new CDatos(x,y,pioridad);
	ne++;
	vector = temp;
}
void CVectorDatos::QuitarDatos()
{
	for (int i = 0; i<ne; i++)
	{
			CDatos**temp = new CDatos*[ne--];
			for (int k = 0; k<i; k++)
			{
				temp[k] = vector[k];
			}
			for (int k = i; k<ne; k++)
			{
				temp[k] = vector[k + 1];
			}
			vector = temp;
	}
}

void CVectorDatos::QuitarTodosDatos()
{
	vector = NULL;
	espacio = NULL;
	Nespacio = ne = 0;
}
void CVectorDatos::CampoDatos(int x, int y, int pioridad)
{
	CDatos**temp = new CDatos*[Nespacio + 1];
	for (int i = 0; i<Nespacio; i++)
	{
		temp[i] = espacio[i];
	}
	temp[Nespacio] = new CDatos(x, y, pioridad);
	Nespacio++;
	espacio = temp;
}

void CVectorDatos::DetectarAmenaza(CVectorEnemigos *VEN)
{
	//for (int i = Nespacio - 1; i >= 0; i--)
	//{
	//	espacio[i]->getX();
	//	espacio[i]->getY();
	//}

	int temporal = 0;
	for (int i = Nespacio-1; i >= 0; i--)
	{
		for (int j = 0; j < VEN->getNe(); j++)
		{
			if (espacio[i]->getX() == (VEN->GetX(j)-110)/60 + 1 && espacio[i]->getY() == (VEN->GetY(j)-110)/60 + 1)
			{
				temporal = i;
				if (temporal >= Amenaza)
					Amenaza = temporal;
				if (Amenaza - 2  >= (Nespacio) / 2)
				{
					Xx = espacio[i]->getX();
					Yy = espacio[i]->getY();
					Enemigo = j;
					peligro = true;
					Amenaza = 0;
					return;
				}
			}
		}
	}
}


bool CVectorDatos::Posible(CJugador *jug, int torre)
{	
	switch (torre)
	{
		case 1: torre = 10; break;
		case 2: torre = 20; break;
		case 3: torre = 30; break;
		case 4: torre = 40; break;
		case 5: torre = 50; break;
		case 6: torre = 60; break;
		case 7: torre = 70; break;
			break;
	}
	if (jug->getOro() - torre < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int CVectorDatos::getEnemigo()
{
	return Enemigo;
}
bool CVectorDatos::getHecho()
{
	return hecho;
}
bool CVectorDatos::getPeligro()
{
	return peligro;
}
void CVectorDatos::setHecho(bool HECHO)
{
	hecho = HECHO;
}
void CVectorDatos::setPeligro(bool PELIGRO)
{
	peligro = PELIGRO;
}
void CVectorDatos::setXX(int XX)
{
	XX = Xx;
}
void CVectorDatos::setYY(int YY)
{
	YY = Yy;
}
void CVectorDatos::setAmenaza(int AM)
{
	Amenaza = AM;
}
int CVectorDatos::getNe()
{
	return ne;
}
int CVectorDatos::getAmenaza()
{
	return Amenaza;
}
int CVectorDatos::getNespacio()
{
	return Nespacio;
}
int CVectorDatos::getX(int i)
{
	return vector[i]->getX();
}
int CVectorDatos::getXX()
{
	return Xx;
}
int CVectorDatos::getYY()
{
	return Yy;
}
int CVectorDatos::getY(int i)
{
	return vector[i]->getY();
}
int CVectorDatos::getDaX(int i)
{
	return espacio[i]->getX();
}
int CVectorDatos::getDaY(int i)
{
	return espacio[i]->getY();
}
int CVectorDatos::getPioridad(int i)
{
	return vector[i]->getPioridad();
}