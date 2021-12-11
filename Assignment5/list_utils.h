#ifndef LIST_UTILS_H
#define LIST_UTILS_H

#include <stdbool.h>
#include "list.h"

list* list_join(const list* l1,const list* l2);

list* list_remove_all(const list* lst, int num); 

#endif