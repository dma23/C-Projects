#ifndef STACK_UTIL_H
#define STACK_UTIL_H

#include <stdbool.h>
#include "stack.h"

stack* stack_reverse(stack* stk); 

bool stack_equals(stack* stk1, stack* stk2);

#endif