/* ----------------------------------------------------------------- */
/* Implementation of the scheduler */
/* for comments on the functions see the associated .h-file */
/* ----------------------------------------------------------------- */


/* ----------------------------------------------------------------- */
/* Include required external definitions */
/* ----------------------------------------------------------------- */
#include <math.h>
#include "bs_types.h"
#include "globals.h"
#include "scheduler.h"


/* ----------------------------------------------------------------- */
/*                Declarations of local helper functions             */
/* ----------------------------------------------------------------- */


/* ----------------------------------------------------------------- */
/*                Externally available functions                     */
/* ----------------------------------------------------------------- */
pid_t schedule(readyList_t readyList) {
  printf("\n\n>SCHEDULING:\n");
	pid_t nextToRun;
	if (readyList->val == NULL) return NO_PROCESS;  // get process from readylist
  readyListElement_t *elem = (readyListElement_t*) readyList->val;
	return nextToRun;
}
/* ----------------------------------------------------------------- */
/*                       Local helper functions                      */
/* ----------------------------------------------------------------- */
