#pragma once
#include "Datos.h"
#include "Jugador.h"
#include "VectorEnemigos.h"

class CVectorDatos
{
	bool hecho;
	bool peligro;
	int ne;
	int Nespacio;
	int Amenaza;
	int Enemigo;
	int Xx, Yy;
	CDatos **espacio;
	CDatos **vector;
public:
	CVectorDatos();
	~CVectorDatos();
	void insertarDatos(int x, int y, int pioridad);
	void QuitarDatos();
	void QuitarTodosDatos();
	void CampoDatos(int x, int y, int pioridad);

	void DetectarAmenaza(CVectorEnemigos *Ven);
	bool Posible(CJugador *jug, int torre);

	
	int getNe();
	int getNespacio();
	bool getHecho();
	int getDaX(int i);
	int getDaY(int i);
	int getX(int i);
	int getY(int i);
	int getXX();
	int getYY();
	int getPioridad(int i);
	int getAmenaza();
	bool getPeligro();
	int getEnemigo();

	void setHecho(bool HECHO);
	void setPeligro(bool Peligro);
	void setAmenaza(int AM);
	void setXX(int XX);
	void setYY(int YY);
};

