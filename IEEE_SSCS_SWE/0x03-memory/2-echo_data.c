#include <stdio.h>

//data types
typedef enum {
    Intger,
    Float,
    Char,
    String
} DataType;

typedef struct {
    void *data;
    DataType type;
} GenericData;

void echo_data(GenericData input) {
    switch (input.type) {
        case Intger:
            printf("INT: %d\n", *(int *)(input.data));
            break;
        case Float:
            printf("FLOAT: %.2f\n", *(float *)(input.data));
            break;
        case Char:
            printf("CHAR: %c\n", *(char *)(input.data));
            break;
        case String:
            printf("STRING: %s\n", (char *)(input.data));
            break;
        default:
            printf("Unknown type\n");
    }
}
int main() {
    int i = 42;
    float f =4.2;
    char c = 'A';
    char *s = "ya wag3 el delete by -f";

    GenericData gi = { &i, Intger };
    GenericData gf = { &f, Float };
    GenericData gc = { &c, Char };
    GenericData gs = { s, String };

    echo_data(gi);
    echo_data(gf);
    echo_data(gc);
    echo_data(gs);

    return 0;
}
