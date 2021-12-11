#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"
#include "stack_utils.h"
#include "stack.c"

stack* stack_reverse(stack* stk) { 
    stack *n;
    stack *m = NULL;
    stack *ne;
    while(n->top->next != NULL) { 
        n->top->next = m;
        m = n->top->elem; n = ne;
        ne= ne->top->next;
    }
    return ne;
    
} // end stack_reverse

bool stack_equals(stack* s1, stack* s2) {
    return true;

}

void main() { 
    printf("%s", "Starting");
    stack *s1 = stack_init();
    stack_push(s1, "a");
    stack_push(s1, "b");
    stack_print(s1);
    stack *s2 = stack_reverse(s1);
    stack_print(s2);
} // end main-