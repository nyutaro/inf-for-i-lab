#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Input(const char name[]);
int Greatest_Common_Divisor(int a, int b);
int Output(int Result, int a, int b);


    int main() {

        printf("# ---Least_Common_Multiple by nyuta\n");

        printf("# Enter a, b for Least_Common_Multiple(a, b)\n");

            int a = Input("a"), b = Input("b");
            int saveA = a, saveB = b;
            int GCD = Greatest_Common_Divisor(a, b);

            int Result = 0;

            Result = saveA * saveB / GCD;

            Output(Result, saveA, saveB);

    return 0;

    }

    int Input(const char name[]) {

        printf("Input %s >", name);

        int val = 0;

        scanf("%d", &val);

    return val;

    }

    int Greatest_Common_Divisor(int a, int b) {

        int GCD = 0;

            if (a > b) {

                int i = a;
                    a = b;
                    b = i;

                    }
            int j = 0;
            for(; b % a != 0; ) {

                j = b % a;
                b = a;
                a = j;

                }
             GCD = a;

    return GCD;

    }


    int Output(int Result, int a, int b) {

        if (Result == 0)
            printf("error\n");

        else printf ("The Least Common Multiple for %d, %d is %d\n", a, b, Result);

    return 0;
    }




