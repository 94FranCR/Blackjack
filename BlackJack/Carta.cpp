#include"Carta.h"
Carta::Carta()
{
	bocaAbajo = true;
	valor = 0; palo = 0;
}
int Carta::getValor()
{
	return valor;
}
int Carta::getPalo()
{
	return palo;
}
void Carta::voltear()
{
	if (bocaAbajo)
	{
		bocaAbajo = false;
	}
	else
	{
		bocaAbajo = true;
	}
}
Carta::~Carta()
{
}