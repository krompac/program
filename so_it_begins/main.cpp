#include <SDL.h>
#include <SDL_image.h>
#include "prozor.h"
#undef main;

int main()
{
	Prozor *pokreni = new Prozor;

	bool radi = true;

	while (radi)
	{
		radi = pokreni->zatvori_prozor();
		pokreni->nacrtaj_pravokutnik();
	}

	delete pokreni;

	return 0;
}