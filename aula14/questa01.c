typedef struct {
    int capacity;
    int *data;
    int size;
} stack_int;

int stack_int_genpop(stack_int *s, int index) {

    /* guardar o index pedido */
    int poped_value = s->data[index];

    /* atualizar o size */
    s->size--;

    /* descolar os valores a direita do valor poped */
    for (int i = index; i < s->size; i++) {
        s->data[i] = s->data[i + 1];
    }

    return poped_value;
}