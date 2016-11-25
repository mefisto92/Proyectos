#pragma once
using namespace System::Drawing;
class CNivel
{
private:
	int nivel;
	int pausa;
	bool p;
public:
	CNivel(void);
	~CNivel(void);
	void pantalla(Graphics^g,Bitmap^sprite);
	void fondo(Graphics^g,Bitmap^sprite);
	void mapa(Graphics^g,int tam_celdas);
	void Pausa(Graphics^g,Bitmap^sprite);
	void funcionescuadros(Graphics^g,int tam_celdas);

	bool getP();
	int getNivel();

	void setPausa(int PAUSA);
	void setP(bool P);
	void setNivel(int NIVEL);
};

