/**
 * Whenever a director MOVES, violins look at him. For each violin present,
 * register for all of the directors present.
 */

#include "violin.h"

static void _destroy(Violin* this)
{
	this->observer->destroy(this->observer);

	if (this != NULL){
		free(this);
		this = NULL;
	}
}

static void _see(Violin * this, Director* director)
{
	director->registerObserver(director, this->observer);
	printf("%s Just saw %s\n", this->name, director->name);
}

static void _handleDirectorEvent(Violin* this, Director* director)
{
	printf("%s\n just heared %s", this->name, director->name);
}


/**
 * Observer Method called upon the receiption of an incoming event.
 * @param type
 * @param subject
 */
static void _notify(Violin* this, int numero, void* subject) {
	_handleDirectorEvent(this, (Director*) subject);
}

Violin* VIOLIN_create(char* violinsName)
{
	Violin* this = (Violin*) malloc(sizeof(*this));

	this->name = violinsName;
	this->see = _see;
	this->destroy = _destroy;
	this->observer = observerNew(this, (void (*)(void*, int, void*))_notify);

	return this;
}
