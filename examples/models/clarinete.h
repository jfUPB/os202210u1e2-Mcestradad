/**
 * Definition of the CLARINETE class stuff!
 */

#ifndef CLARINETE_H
	#define CLARINETE_H
 	#include <stdio.h>
	#include <stdlib.h>
	#include "../../observer/observer.h"
	#include "director.h"

	typedef struct __clarinete
	{
		char* name;
		void (*play)(struct __clarinete*);
		void (*destroy)(struct __clarinete*);
		void (*melodicstr)(struct __clarinete*, Director*);


		Observer* observer;
	} Clarinete;

	/**
	 * Creates a clarinete!
	 */
	Clarinete* CLARINETE_create(char *);

#endif