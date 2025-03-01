#include "asq.h"

bool asq_init(asq_t *asq) {
  asq = malloc(sizeof(asq_t));
  if (asq) {
    asq->length = 0;
    return true;
  }
  return false;
}

bool asq_add(asq_t *asq, void *item) { return false; }
