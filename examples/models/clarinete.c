/**
 * Whenever a director MOVES, clarinets look at him. For each clarinet present,
 * register for all of the directors present.
 */

#include "clarinete.h"

static void _destroy(Clarinete* this)
{
	this->observer->destroy(this->observer);

	if (this != NULL){
		free(this);
		this = NULL;
	}
}

static void _melodicstr(Clarinete * this, Director* director)
{
	director->registerObserver(director, this->observer);
	printf("%s Just saw %s\n", this->name, director->name);
}

static void _handleDirectorEvent(Clarinete* this, Director* director)
{
	printf("%s\n just played %s", this->name, director->name);
}


/**
 * Observer Method called upon the receiption of an incoming event.
 * @param type
 * @param subject
 */
static void _notify(Clarinete* this, int numero, void* subject) {
	_handleDirectorEvent(this, (Director*) subject);
}

Clarinete* CLARINETE_create(char* clarinetesName)
{
	Clarinete* this = (Clarinete*) malloc(sizeof(*this));

	this->name = clarinetesName;
	this->melodicstr = _melodicstr;
	this->destroy = _destroy;
	this->observer = observerNew(this, (void (*)(void*, int, void*))_notify);

	return this;
}