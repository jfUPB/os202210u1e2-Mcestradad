/**
 * Definition of the VIOLIN class stuff!
 */

#ifndef VIOLIN_H
	#define VIOLIN_H
 	#include <stdio.h>
	#include <stdlib.h>
	#include "../../observer/observer.h"
	#include "director.h"

	typedef struct __violin
	{
		char* name;
		void (*speak)(struct __violin*);
		void (*destroy)(struct __violin*);
		void (*smell)(struct __violin*, Director*);

		Observer* observer;
	} Violin;

	/**
	 * Creates a violin!
	 */
	Violin* VIOLIN_create(char *);

#endif