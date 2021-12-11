#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list_utils.h"
#include "list.h"
#include "list.c"

list* list_join(const list* l1, const list* l2) { 
    list* l3 = list_init_empty();
    if( l1->size == 0 && l2->size == 0) { 
        //printf("%s", "reached");
        return l3;
    }
    else if(l1->size == 0) { 
        l3 = list_copy(l2);
        return l3;
    }
    else if(l2->size == 0) { 
        l3 = list_copy(l1);
        return l3;
    }
    else { 
        l3 = list_copy(l1);
        for(int i =0; i<l2->size; i++) { 
            list_add(l3, list_get(l2, i));
            
        }
        return l3;
    }
} // end list_join

list* list_remove_all(const list* lst, int elem) { 
    list* l3 = list_init_empty();
    //printf("%s", a);
    for(int i = 0; i < lst->size; i++ ) {
        //printf("%d", list_get(lst, i));
        if(list_get(lst, i) != elem) { 
            list_add(l3, list_get(lst, i));
        }
    }
    return l3;

} // end list_remove_all


/*
void main() { 
    int l1[] = {1,2,3,4,5};
    int l2[] = {6,7,8,9,10};
    list* lst1 = list_init_arr(5, l1);
    list* lst2 = list_init_arr(5, l2);

    list* l3 = list_join(lst1, lst2);
    list_print(l3);

    lst1 = list_remove_all(lst1, 2);
    list_print(lst1);
}
*/