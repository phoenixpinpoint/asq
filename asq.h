#ifndef ASQ_H

#include <stdbool.h>
#include <stdlib.h>

#define ASQ_H

#ifndef ASQ_DEFAULT_SIZE
#define ASQ_DEFAULT_SIZE 64
#endif

typedef struct asq_t {
  void **items;
  size_t size;
  size_t capacity;
} asq_t;

asq_t *asq_init(asq_t *asq);

asq_t *asq_init_with_size(asq_t *asq, size_t size);

void asq_deinit(asq_t *asq);

asq_t *asq_double(asq_t *asq);

asq_t *asq_half(asq_t *asq);

asq_t *asq_add(asq_t *asq, void *item);

#endif // ASQ_H
