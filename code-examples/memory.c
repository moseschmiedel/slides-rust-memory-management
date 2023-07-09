#include <stdio.h>
#include <stdlib.h>

typedef struct Number {
    int number;
} Number;

void add_one(Number *a) {
    Number *one = malloc(sizeof(Number));
    one->number = 1;
    a->number = a->number + one->number;
    free(one);
}

Number *mul_by_two(Number *a) {
    Number *result = malloc(sizeof(Number));
    result->number = a->number * 2;
    return result;
}

int main() {
    Number *incomplete_answer = malloc(sizeof(Number));
    incomplete_answer->number = 20;
    add_one(incomplete_answer);
    Number *answer_of_everything = mul_by_two(incomplete_answer);
    printf("the answer to everything is %d\n", answer_of_everything->number);
    free(incomplete_answer);
    free(answer_of_everything);
}
