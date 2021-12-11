#include<stdio.h>
#include<math.h>
#include <stdlib.h>

void normpdf(double x) { 
    double pi = 3.14159265359;

    double ans = (1/(sqrt(2 * pi))) * exp(-x / 2);
    printf("%.8lf", ans);
}

void add(double x, double y) { 

    double sum = x + y;
    printf("%.8lf", sum);

}

int main( int argc, char* argv[]) {
    
    if (argc > 3) { 
        fprintf(stderr, "Too many arguments");
        exit(1);
    }
    else if(argc == 3) { 

        double num1 = atof(argv[1]);
        double num2 = atof(argv[2]);
        add(num1, num2);
    }
   else { 
       double x = atof(argv[1]);
       normpdf(x);
    }

   return 0;
}


