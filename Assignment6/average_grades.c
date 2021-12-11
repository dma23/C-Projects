#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main( int argc, char* argv[]) {
    
    int total = 0;
    
    if (argc > 2) { 
        fprintf(stderr, "Invalid number of arguments");
        exit(1);
    }
    else { 
        FILE* fptr;
        char line[100];
        int count = 0;
        char name[30];
        char nam[30];
        float grades1 = 0;
        float grades2 = 0;
        float grades3 = 0;
        float grades4 = 0;
        
        int grade1,grade2,grade3,grade4;

        fptr = fopen(argv[1], "r");  

        while(fgets(line, 100, fptr) != NULL) {
            //printf("%s \n", line);
            sscanf(line, "%s %s %d %d %d %d", name, nam, &grade1, &grade2, &grade3, &grade4);
            printf("%d \n", grade2);
            count += 1;
        }
        
        //printf("A1 %f \n", grades1/count);
        //printf("A2 %f \n", grades2/count);
        //printf("A3 %f \n", grades3/count);
        //printf("A4 %f \n", grades4/count);
        
        //printf("%d", total);
    }

    
    return 0;
}
