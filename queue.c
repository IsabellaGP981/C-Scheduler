#include<stdio.h>
#include<stdlib.h>
#include"bs_types.h"

// ----------------------------------- //
   //queue.c
   //author: Mika Kline-Pearson
// ----------------------------------- //

typedef struct queue {
  void* val;
  struct queue*next;
} queue;

/*returns a pointer to a new queue.
 * @params: val:   value of new queue element.
 * @return: pointer to that new queue element.
 * @usage_: q_make(3) -> returns { 3: NULL }
 * */
queue* q_make(void* val) {
  queue*q = malloc(sizeof(queue));
  q->val  = val;
  q->next = NULL;
  return q;
}

/*pops the first element from the queue.
 * @params: **q:   double pointer to a queue.
 * @return: the value of that popped element. If the queue was empty, returns NULL.
 * @usage_: q_pop(&q) or int val = q_pop(&q)
 * */
void* q_pop(queue **q) {
  if (*q == NULL) return NULL;
  queue *old = *q;
  *q      = old->next;
  void* val = old->val;
  free(old);
  return val;
}
/*returns the last element in a queue.
 * @params: *q: pointer  to  a  queue.
 * @return: last element in the queue. If queue is empty, returns NULL
 * @usage_: q_last(&q)
 * */
queue* q_last(queue*q) {
  if    (q == NULL      ) return NULL;
  while (q->next != NULL) q = q->next;
  return q;
}
/* pushes a new element onto a queue.
 * @params: *q : pointer  to a queue to append to, 
 *          val: value of the new element.
 * @return: void
 * @usage_: q_push(&old_q, 42)
 * */
void q_push(queue *q, void* val) { 
  //if (q == NULL) return q_make(val);
  queue*last = q_last(q); 
  queue*new  = q_make(val);
  last->next = new;
}
/* prints a queue.
 * @params: *q: pointer to a queue.
 * @return: void, but output is eg [1,2,3,4,5]
 * @usage_: q_push(&old_q, 42
 * */
void  q_print(queue*q) {
  printf("[");
  while(q != NULL) {
    printf("%d", *(int*)q->val);
    q = q->next;
    if (q != NULL) printf(",");
  }
  printf("]\n");
}

