#include "asq.h"

asq_t *asq_init(asq_t *asq) {
  if (asq) {
    asq->size = 0;
    asq->capacity = ASQ_DEFAULT_SIZE;
    return asq;
  }
  return 0;
}

bool asq_add(asq_t *asq, void *item) { return false; }
