#include "asq.h"

asq_t *asq_init(asq_t *asq) {
  if (asq) {
    asq->items = malloc(sizeof(void *) * ASQ_DEFAULT_SIZE);
    asq->size = 0;
    asq->capacity = ASQ_DEFAULT_SIZE;
    return asq;
  }
  return asq;
}

asq_t *asq_init_with_size(asq_t *asq, size_t size) {
  if (asq) {
    asq->items = malloc(sizeof(void *) * size);
    asq->size = 0;
    asq->capacity = size;
    return asq;
  }
  return asq;
}

void asq_deinit(asq_t *asq) {
  if (asq) {
    free(asq->items);
    asq->items = NULL;
    asq->size = 0;
    asq->capacity = 0;
  }
}

asq_t *asq_double(asq_t *asq) {
  if (asq) {
    asq->items = realloc(asq->items, sizeof(void *) * asq->capacity * 2);
    asq->capacity *= 2;
    return asq;
  }
  return asq;
}

asq_t *asq_half(asq_t *asq) {
  if (asq && asq->size < asq->capacity / 2) {
    asq->items = realloc(asq->items, sizeof(void *) * asq->capacity / 2);
    asq->capacity /= 2;
    return asq;
  }
  return asq;
}
