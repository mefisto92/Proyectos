#include "VectorCasillas.h"
#include <stdlib.h>
#include <time.h>

CVectorCasillas::CVectorCasillas(void)
{
	numCT=0;
	ne=0;
	srand(time(NULL));
	vector = new CCasilla**[15];
	for (int i = 0; i< 15; i++)
		vector[i] = new CCasilla*[10];
}


CVectorCasillas::~CVectorCasillas(void)
{
}
void CVectorCasillas::InsertarNivel(int num_ele, int tam_celdas)
{
	//10 alto 15 ancho
	ne = 200; //num ele 150 tam celdas 60
	int t = 5;

	X = 0;
	Y = 0;
	vector[Y][X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas,t);Y=2; // 0
	vector[Y][X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas,t);Y=3; //300
	vector[Y][X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas,t);Y=4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);
	X = 14;
	Y = 0;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);
	Y = 0;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 14;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);
	Y = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 14;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);
	//Camino---------------------------------------------------------------------------------
	X=1;
	Y=1;
	t=3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2; Y = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);

	//Interior : No Camino....
	X=2;
	Y=1;
	t=4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8; X = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);; X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 1; Y = 3; t = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5; t = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13; Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3; X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2; X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7; t = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8; t = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7; t = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8; t = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12; Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13; Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);
}
void CVectorCasillas::MostrarNivel(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas)
{
	if(vector==NULL)
		return;	
	X = 0;
	Y = 0;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	X = 14;
	Y = 0;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	Y = 0;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 14;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	Y = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 14;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	//Camino---------------------------------------------------------------------------------
	X=1;
	Y=1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2; Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	//Interior : No Camino....
	X=2;
	Y=1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8; X = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 1; Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13; Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3; X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2; X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12; Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13; Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas);

}
void CVectorCasillas::InsertarNivel2(int num_ele, int tam_celdas)
{
	ne = 200; //num ele 150 tam celdas 60
	int t = 5;
	X = 0;
	Y = 0;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);
	X = 14;
	Y = 0;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);
	Y = 0;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 14;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);
	Y = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 14;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);
	Y=1;
	X=1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);


	//Camino---------------------------------------------------------------------------------
	X=1;
	Y=4;
	t=3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5; t = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3; t = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8; X = 4; t = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3; X = 7; t = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5; t = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10; t = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);

	//Interior : No Camino....
	X=1;
	Y=3;
	t=4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4; Y = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6; X = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4; Y = 2;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 5;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 4;//
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7; Y = 1;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 2; X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 7; Y = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 8; X = 7;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 8;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 9;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 10; Y = 6;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 3; X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); Y = 4; X = 10;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 11;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 12;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t); X = 13;
	vector[Y][X] = new CCasilla(50 + X*tam_celdas, 50 + Y*tam_celdas, t);

}
void CVectorCasillas::MostrarNivel2(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas)
{
	if(vector==NULL)
		return;	
	X = 0;
	Y = 0;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	X = 14;
	Y = 0;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	Y = 0;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 14;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	Y = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 14;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	Y=1;
	X=1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas);

	//Camino---------------------------------------------------------------------------------
	X=1;
	Y=4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8; X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3; X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas);; Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas);
	
	//Interior NO camino
	X=1;
	Y=3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4; Y = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6; X = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4; Y = 2;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 5;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 4;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7; Y = 1;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 2; X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 7; Y = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 8; X = 7;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 8;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 9;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 10; Y = 6;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 3; X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas); Y = 4; X = 10;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 11;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 12;
	vector[Y][X]->pintar(g, sprite, tam_celdas); X = 13;
	vector[Y][X]->pintar(g, sprite, tam_celdas);

}
void CVectorCasillas::insertarCasTor(int num_ele, int tam_celdas)
{
	numCT = num_ele * (num_ele+1);
	tipoT = new CCasilla* [numCT];
	X = 15;
	Y = 1;
	tipoT[Y*num_ele+X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas-tam_celdas,1);X=17;
	tipoT[Y*num_ele+X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas-tam_celdas,2);Y=3;X=15;
	tipoT[Y*num_ele+X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas-tam_celdas,3);X=17;
	tipoT[Y*num_ele+X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas-tam_celdas,4);Y=5;X=15;
	tipoT[Y*num_ele+X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas-tam_celdas,5);X=17;
	tipoT[Y*num_ele+X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas-tam_celdas,6);Y=7;X=16;
	tipoT[Y*num_ele+X] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas-tam_celdas,7);
}
void CVectorCasillas::MostrarCasTor(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas)
{
	if(vector==NULL)
		return;	
	X = 15;
	Y = 1;
	tipoT[Y*num_celdas+X]->CasillasTorre(g,sprite,tam_celdas);X=17;
	tipoT[Y*num_celdas+X]->CasillasTorre(g,sprite,tam_celdas);Y=3;X=15;
	tipoT[Y*num_celdas+X]->CasillasTorre(g,sprite,tam_celdas);X=17;
	tipoT[Y*num_celdas+X]->CasillasTorre(g,sprite,tam_celdas);Y=5;X=15;
	tipoT[Y*num_celdas+X]->CasillasTorre(g,sprite,tam_celdas);X=17;
	tipoT[Y*num_celdas+X]->CasillasTorre(g,sprite,tam_celdas);Y=7;X=16;
	tipoT[Y*num_celdas+X]->CasillasTorre(g,sprite,tam_celdas);
}
int CVectorCasillas::getTipo(int x, int y)
{
	return vector[y][x]->getTipo();
}
int CVectorCasillas::GetX(int x, int y)
{
	return vector[y][x]->getX();
}
int CVectorCasillas::GetY(int x, int y)
{
	return vector[y][x]->getX();
}
bool CVectorCasillas::GetPas(int x, int y)
{
	return vector[y][x]->getPas();
}
void CVectorCasillas::SetPas(int x, int y, bool PAS)
{
	return vector[y][x]->setPas(PAS);
}
void CVectorCasillas::inser1(int tam_celdas, int type)
{
	X=16;Y=10;
	tipoT[1] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas-tam_celdas,type);
}
void CVectorCasillas::Mostra1(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas,int type)
{
	X=16;Y=10;
	tipoT[1]->CasillasTorre(g,sprite,tam_celdas);
	tipoT[1]->setTipo(type);
}
void CVectorCasillas::insertarBot(int num_ele, int tam_celdas)
{
	X=15;Y=9;
	tipoT[2] = new CCasilla(50+X*tam_celdas,50+Y*tam_celdas-tam_celdas,1);
}
void CVectorCasillas::MostrarBot(Graphics^g, Bitmap^sprite, int num_celdas, int tam_celdas,int type)
{
	X=15;Y=9;
	tipoT[2]->Boton(g,sprite,tam_celdas);
	tipoT[2]->setTipo(type);
}