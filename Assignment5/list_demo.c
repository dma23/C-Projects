#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list_utils.h"
#include "list_utils.c"

void main() { 
    
    // empty - empty
    list* lst1 = list_init_empty();
    list* lst2 = list_init_empty();
    list* lst3 = list_join(lst1, lst2);
    list_print(lst3);
       
    // empty - null
    int a;
    list* nullList = list_init(1);
    list_add(nullList, a);
    list* lst4 = list_join(lst1, nullList);
    list_print(lst4);

    // null - empty
    list* lst5 = list_join(nullList, lst2);
    list_print(lst5);

    // null - null
    list* lst6 = list_join(nullList, nullList);
    list_print(lst6);

    // remove an element 0 in size-> 5
    int l1[] = {1,2,3,4,5};
    list* lst7 = list_init_arr(5, l1);
    lst7 = list_remove_all(lst7, 6);
    list_print(lst7);

    // remove element 1x in size-> 5
    lst7 = list_remove_all(lst7, 1);
    list_print(lst7);

    // remove element 2x in size -> 5
    int l2[] = {1, 1, 2, 3, 4};
    list* lst8 = list_init_arr(5, l2);
    lst8 = list_remove_all(lst8, 1);
    list_print(lst8);

    int l3[] = {1, 1, 1, 1, 1};
    list* lst9 = list_init_arr(5, l3);
    lst9 = list_remove_all(lst9, 1);
    list_print(lst9);
}