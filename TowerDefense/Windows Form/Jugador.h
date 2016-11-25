#pragma once
class CJugador
{
private:
	int oro;
	int puntaje;
	int resto;
	char *nombre;
public:
	CJugador(void);
	~CJugador(void);

	int getOro();
	int getPuntaje();
	int getResto();
	char *getNombre();

	void setOro(int ORO);
	void setPuntaje(int PUNTAJE);
	void setResto(int RESTO);
};

