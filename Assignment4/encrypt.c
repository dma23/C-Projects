#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[]) { 

    if (argc != 3) { 
        fprintf(stderr, "Invalid number of arguments");
        exit(1);
    }
    else { 
        int cipher = atoi(argv[1]);
        char *msg = argv[2];
        int msg_len = strlen(msg);

        char enc[msg_len+1];
        enc[msg_len] = '\0';

        for (int i = 0; i < msg_len; i++){
            msg[i]=toupper(msg[i]+cipher);
            
            printf("%c", msg[i]);
        }
    }
    printf("\n");
    return 0; 
}