#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>
#include <float.h>
int Input(const char name[]);
int Summ(int N, int* a, int* b, int* c, int*d);
int Output(int N, int a, int b, int c, int d);


        int main () {

            printf ("# ---Summ of 4 squares by nyuta\n");
            printf ("# Enter N\n");

            int N = Input ("N");
            int a = 0, b = 0, c = 0, d = 0;

            int Result = Summ (N, &a, &b, &c, &d);

            Output (N, a, b, c, d);

        return 0;
        }

        int Input (const char name[]) {

            printf ("Input %s >", name);
            int val = 0;
            scanf ("%d", &val);

        return val;

            }

        int Summ(int N, int* a, int* b, int* c, int* d) {

            *a = (int) sqrt(N);

            *b = (int) sqrt(N - a);

            *c = (int) sqrt(N - b - a);

            *d = (int) sqrt(N - b - a - c);

         if ((*a + *b + *c + *d) != N)
            return 1;

            return 0;

        }

        int Output(int N, int a, int b, int c, int d) {

            printf("%d = %d + %d +%d +%d\n", N, a, b, c, d);

        return 0;

        }
