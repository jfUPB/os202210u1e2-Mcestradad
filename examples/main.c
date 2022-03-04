/**
 * Main program that uses the Observer implementation.
 */

#include <stdio.h>
#include "models/director.h"
#include "models/violin.h"
#include "models/clarinete.h"
#include "models/timbal.h"

/**
 * Defining the basic observers class/interface-a-like
 */

int main(int argc, char const *argv[])
{

	Director* director = DIRECTOR_create("Director");
	Violin* gal = VIOLIN_create("Gal");
    Clarinete* lu = CLARINETE_create("Lu");
    Timbal* supa = TIMBAL_create("Supa");

	director->move(director);
	gal->see(gal, director);

	director->destroy(director);
	gal->destroy(gal);

    director->move(director);
	lu->melodicstr(lu, director);

	director->destroy(director);
	lu->destroy(lu);

    director->move(director);
	supa->tremolo(supa, director);

	director->destroy(director);
	supa->destroy(supa);

	return 0;
}