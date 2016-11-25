#pragma once
class CDatos
{
private:
	int x;
	int y;
	int pioridad;
public:
	CDatos(int X, int Y, int PIORIDAD);
	~CDatos();
	
	int getX();
	int getY();
	int getPioridad();

	void setX(int X);
	void setY(int Y);
	void setPioridad(int Pioridad);
};

