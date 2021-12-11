#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"
#include "stack_utils.h"
#include "stack_utils.c"

void main() { 

    // 1 char stack - reversal
    stack *s1 = stack_init();
    stack_push(s1, "a");
    stack_reverse(s1);
    stack_print(s1);

    // 3 char stack -- reverse
    stack *s2 = stack_init();
    stack_push(s2, "a");
    stack_push(s2, "b");
    stack_push(s2, "c");
    stack_reverse(s2);
    stack_print(s2);

    // stack_eqausl 
    stack *s3 = stack_init();
    stack_equals(s3, s3);

    // size = 1, equal, uneaul
    stack_equals(s1, s1);
    stack *s4 = stack_init();
    stack_push(s4, "z");
    stack_equals(s1, s4);

    //size = 3
    stack_equals(s3, s3);
    stack *s5 = stack_init();
    stack_push(s5, "z");
    stack_push(s5, "r");
    stack_push(s5, "p");
}
