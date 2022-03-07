/**
 * Definition of the DIRECTOR class stuff!
 */

#ifndef DIRECTOR_H
  #define DIRECTOR_H
  #include <stdio.h>
  #include <stdlib.h>
  #include "../../observer/observer.h"
  #include "../../observer/subject.h"

  typedef enum __director_event
  {
    SPEAK
  } DirectorEvent;

  typedef struct __director
  {
    char* name;
    void (*destroy)(struct __director*);

    DirectorEvent event;
    DirectorEvent (*getEvent)(struct __director*);

    void (*speak)(struct __director*);

    Subject * subject;
    int (*registerObserver)(struct __director*, Observer*);
    int (*unregisterObserver)(struct __director *, Observer*);
  } Director;

  /**
   * Creates a director!
   */
  Director* DIRECTOR_create(char *);

#endif