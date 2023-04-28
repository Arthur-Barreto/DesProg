#include <stdlib.h>

struct _node {
    int value;
    struct _node *next;
};

typedef struct _node node;

struct _stack_int {
    node *top;
};

typedef struct _stack_int stack_int;

int stack_int_genpop(stack_int *s, int index) {
    /* calcular o tamanho primeiro */
    int size = 0;
    node *n;
    for (n = s->top; n != NULL; n->next) {
        size++;
    }

    /* criar no anterior */
    /* definir n para o topo */

    node *p = NULL;
    n = s->top;

    for (int i = 0; i < size - index - 1; i++) {
        /* anterior recebe atual e atualiza o atual para next */
        p = n;
        n = n->next;
    }

    int poped_value;
    return poped_value;
}