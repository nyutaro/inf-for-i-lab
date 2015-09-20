#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int Input(const char name[]);
int Check_Square(int a);
int Output(int Rezult);

        int main () {

            printf("# ---Squares-free-number by nyuta\n");
            printf("# Enter number\n");

            int a = Input("a");

            int Rezult = Check_Square(a);

            Output(Rezult);

        return 0;
        }


        int Input(const char name[]) {

            printf("Input %s >", name);
            double val = 0;
            scanf("%lg", &val);

        return val;

            }


        int Check_Square(int a) {

            assert(a >= 0);
            int Stop = sqrt(a);
            int Rezult = 1;

            for (int i = 2; i <= Stop; ++i) {

                 if ((a % i == 0) && (a % (i*i) == 0))
                     Rezult = 0;
                     }

        return Rezult;


        }


        int Output (int Rezult) {

            if (Rezult == 0)
                printf("YES");

            if (Rezult == 1)
                printf("NO");

        return 0;


        }

