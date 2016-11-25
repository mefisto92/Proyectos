#include "Jugador.h"


CJugador::CJugador(void)
{
	puntaje=0;
	oro=40;
	resto=10;

}


CJugador::~CJugador(void)
{
}

int CJugador::getOro()
{
	return oro;
}
int CJugador::getPuntaje()
{
	return puntaje;
}
int CJugador::getResto()
{
	return resto;
}
char *CJugador::getNombre()
{
	return nombre;
}

void CJugador::setOro(int ORO)
{
	oro = ORO;
}
void CJugador::setPuntaje(int PUNTAJE)
{
	puntaje = PUNTAJE;
}
void CJugador::setResto(int RESTO)
{
	resto = RESTO;
}