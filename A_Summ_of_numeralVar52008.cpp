#include <stdio.h>

int Input(const char name[]);
int Summ_of_numeral(int n);
int Output(int Result, int n );

        int main () {

         printf("# ---Summ_of_numeral by nyuta\n");

            int n = Input("n");
            int saveN = n;

            int nNum = Summ_of_numeral(n);

            Output(nNum, saveN);


        return 0;
        }


        int Input(const char name[]) {

                printf("Input %s >", name);
                int val = 0;
                scanf("%d", &val);

        return val;
        }


        int Summ_of_numeral(int n){

        int Sum = 0;
        int buf = 0;

            for( ; n > 0; ){
                Sum = Sum + n % 10;
                n = n / 10;
            };


        return Sum;
        }

        int Output (int Result, int n) {

            printf ("Summ of numeral fo %d is %d\n", n, Result);

        }
