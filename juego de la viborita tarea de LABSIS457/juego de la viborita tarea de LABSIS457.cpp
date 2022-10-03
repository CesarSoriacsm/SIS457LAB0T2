#include"FuenteDEAlimetacion.h"
#include "Cuerpo.h"
#include"Espacio.h"

int main()
{
	FuenteDEAlimetacion p01 = FuenteDEAlimetacion();
	p01.crecer();
	p01.desaparecer();
	p01.mover();

	Cuerpo l01 = Cuerpo();
	l01.mover();
	l01.morir();
	l01.velocidad();
	
	Espacio d01 = Espacio();
	d01.acabareljuego();
	d01.contencion();
	d01.delimitar();

	return 0;
}