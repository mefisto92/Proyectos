#include "VectorTorres.h"
#include "stdio.h"
#include "string.h"
CVectorTorres::CVectorTorres(void)
{
	vector = NULL;
	ne=0;
}


CVectorTorres::~CVectorTorres(void)
{
}
void CVectorTorres::InsertarTorre(int tam_celdas ,int x, int y, int tipo,int tp,CJugador *jug)
{
	if(tp!=4)
	{
		return;
	}
	if(tipo == 0)
	{
		return;
	}
	for(int i=0;i<ne;i++)
	{
		if(vector[i]->getX() == 50+x*tam_celdas && vector[i]->getY() == 50+y*tam_celdas)
		{
			return;
		}
	}
	CTorre**temp = new CTorre*[ne+1];
	for(int i=0;i<ne;i++)
	{
		temp[i]=vector[i];
	}
	temp[ne]=new CTorre(50+x*tam_celdas,50+y*tam_celdas,tipo);
	ne++;
	vector = temp;
	jug->setOro(jug->getOro()-vector[ne-1]->getCosto());
}
void CVectorTorres::MostrarTorre(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas)
{
	if(vector==NULL)
		return;	

	for(int i=0;i<ne;i++)
	{
		vector[i]->dibujar(g,sprite,tam_celdas);
	}
}
void CVectorTorres::QuitarTorre(int tam_celdas, int x, int y)
{
	for(int i=0;i<ne;i++)
	{
		if(vector[i]->getX() == 50+x*tam_celdas && vector[i]->getY() == 50+y*tam_celdas)
		{
			CTorre**temp = new CTorre*[ne--];
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
void CVectorTorres::detectar(CVectorEnemigos *en)
{
	for(int i=0; i<ne; i++)
	{
		vector[i]->deteccion(en);
	}
}
void CVectorTorres::Resetear()
{
	ne=0;

	CTorre**temp = new CTorre*[ne];
		vector = temp;
}
int CVectorTorres::getNe()
{
	return ne;
}
void CVectorTorres::guardarEnArchivo(FILE *archivo)
{
	fwrite(&vector,sizeof(vector),ne*4,archivo);
	fflush(archivo);
	fclose(archivo);
}

void CVectorTorres::leerDeArchivo(FILE *archivo)
{
	fread(&vector,sizeof(vector),ne*4,archivo);
	fflush(archivo);
	fclose(archivo);
}