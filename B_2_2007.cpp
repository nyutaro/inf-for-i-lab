#include <stdio.h>
#include <math.h>

int Input(const char name[]);
int normingRoot(int N, int* a);
int Output(int Result, int n, int a);


    int main () {

        int N = Input("N");

        int a = 0;

        int Resut = normingRoot(N, &a);

        Output(Resut, N, a);

    return 0;

    }


    int Input(const char name[]) {

            printf("Input %s >", name);
            int val = 0;
            scanf("%d", &val);

    return val;

    }

    int normingRoot(int N, int* a) {

        int b = 0;

        for(int i = 1; i <= sqrt(N); i++) {

            if ((N % (i*i)) == 0) b = i*i;

        }

        *a = N / b;

    return b;

    }

    int Output (int Result, int n, int a) {

        printf("%d = %d*d", n, a, Result);

    return 0;

    }
