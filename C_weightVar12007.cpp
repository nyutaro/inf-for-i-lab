#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int Input(const char name[]);
int Weight(int wgh);
int Output(int Result);

        int main () {

            printf("# ---To-weight-number by nyuta\n");
            printf("# Enter number\n");

            int wgh = Input("weight");

            int Result = Weight(wgh);

            Output(Result);

        return 0;
        }


        int Input(const char name[]) {

            printf("Input %s >", name);
            int val = 0;
            scanf("%d", &val);

        return val;

            }


        int Weight(int wgh) {

            const int poise = 4;
            int n = wgh / poise;

            if (wgh == 1)
                return 1;

            if((wgh % poise == 2) || (wgh == 0))
                return 0;

            if((wgh % poise == 1) || (wgh % poise == 0) || (wgh != 1))
                return Weight(n);

            if (wgh % poise == 3)
               return Weight(n+1);

        }


        int Output (int Result) {

            if (Result == 1)
                printf("YES\n");

            if (Result == 0)
                printf("NO\n");

            if (Result == 3) printf("error\n");

        return 0;


        }

