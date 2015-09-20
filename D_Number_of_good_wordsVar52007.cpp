#include <stdio.h>

int Input(const char name[]);
int Num(int n, int k);
int factorial(int n);
int Output(int Result );

        int main () {

         printf("# ---Number_of_good_bin_words by nyuta\n");
            printf("# Enter n, k: n - length of word, k - number of units(1-s)\n");

            int n = Input("n"), k = Input("k");
            int Result = Num(n, k);

            Output(Result);


        return 0;
        }


        int Input(const char name[]) {

                printf("Input %s >", name);
                int val = 0;
                scanf("%d", &val);

        return val;
        }

        int factorial(int n) {


            if ((n == 1) || (n == 0)) return 1;

            else return factorial(n - 1) * n;
            }


        int Num(int n, int k) {

            int Result = 0;

            if (k > ((n + 1) / 2))
                Result = 0;

            else Result = factorial(n - k + 1) / (factorial(n - 2*k +1) * factorial(k));

        return Result;
        }

        int Output (int Result) {

            printf ("Number of good words with length n and contained k unit is %d\n", Result);

        }




