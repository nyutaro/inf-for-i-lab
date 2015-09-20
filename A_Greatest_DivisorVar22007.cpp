#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Input(const char name[]);
int Greatest_Divisor(int number);
int Output(int Result, int number);


    int main() {

        printf("# ---Greatest_Divisor by nyuta\n");

        printf("# Enter number\n");

            int number = Input("number");
            int Result = Greatest_Divisor(number);

            Output(Result, number);

    return 0;

    }

    int Input(const char name[]) {

        printf("Input %s >", name);

        int val = 0;

        scanf("%d", &val);

    return val;

    }

    int Greatest_Divisor(int number) {

        int gd = 0;

        for( int i = 2; i < number; i++) {

            if (number % i == 0)
                gd = i;
                };

    return gd;

    }


    int Output(int Result, int number) {

        if (Result == 0)
            printf("error\n");

        else printf ("The Greatest Divisor for %d is %d\n", number, Result);

    return 0;
    }
