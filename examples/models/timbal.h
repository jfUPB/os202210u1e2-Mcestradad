/**
 * Definition of the TIMBAL class stuff!
 */

#ifndef TIMBAL_H
	#define TIMBAL_H
 	#include <stdio.h>
	#include <stdlib.h>
	#include "../../observer/observer.h"
	#include "director.h"

	typedef struct __timbal
	{
		char* name;
		void (*play)(struct __timbal*);
		void (*destroy)(struct __timbal*);
		void (*tremolo)(struct __timbal*, Director*);


		Observer* observer;
	} Timbal;

	/**
	 * Creates a timbal!
	 */
	Timbal* TIMBAL_create(char *);

#endif