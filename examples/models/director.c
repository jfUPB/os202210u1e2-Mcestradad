#include "director.h"

/**
 * Whenever a director MOVES, Musics look at him. DIRECTOR is the Subject.
 */

static void _moves(Director* this)
{
  printf("%s\n", "This move is:");
  printf("%s\n", this->name);
  printf("%s\n", "He moves");

	this->event = MOVE;
	this->subject->notifyObservers(this->subject);
}

static void _destroy(Director* this)
{
	this->subject->destroy(this->subject);

  if (NULL != this) {
    free(this);
    this = NULL;
  }
}

static DirectorEvent _getEvent(Director* this)
{
	return this->event;
}

/**
 * Proxy method for Register an observer for the Director object.
 * @param this
 * @param observer
 * @return
 */
static int _registerObserver(Director* this, Observer* observer) {
  return this->subject->registerObserver(this->subject, observer);
}

/**
 * Proxy method for Unregister observer for the Director object.
 * @param this
 * @param observer
 * @return
 */
static int _unregisterObserver(Director * this, Observer* observer) {
  return this->subject->unregisterObserver(this->subject, observer);
}
/**
 * Creates a director!
 */
Director* DIRECTOR_create(char * name)
{
	Director* this = (Director *) malloc(sizeof(*this));
	this->name = name;
	this->destroy = _destroy;
	this->getEvent = _getEvent;
	this->speak = _moves;

	this->subject = subjectNew(this, 1);
	this->registerObserver = _registerObserver;
	this->unregisterObserver = _unregisterObserver;

	return this;
}