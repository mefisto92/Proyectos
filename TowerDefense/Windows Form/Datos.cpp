#include "Datos.h"


CDatos::CDatos(int X, int Y, int PIORIDAD)
{
	x = X;
	y = Y;
	pioridad = PIORIDAD;
}

CDatos::~CDatos()
{
}

int CDatos::getX()
{
	return x;
}
int CDatos::getY()
{
	return y;
}
int CDatos::getPioridad()
{
	return pioridad;
}
void CDatos::setX(int X)
{
	x = X;
}
void CDatos::setY(int Y)
{
	y = Y;
}
void CDatos::setPioridad(int Pioridad)
{
	pioridad = Pioridad;
}