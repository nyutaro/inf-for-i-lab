#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>
int Input(const char name[]);
int nSpl(int n, int k, int** arr, int N); // nSpl - number of splittings
int Output(int Result, int N);
int** Input_arr(int hght, int lgth); // hgtht - height, lght - legth

        int main () {

            printf("# ---Number_of_Splitting by nyuta\n");
            printf("# Enter N\n");

            int N = Input("N");
             N += 1;
             int** arr = Input_arr(N + 1, N + 1);
                if (!arr) return perror("You're not right, mate"), 1;


            int Result = nSpl(N, N, arr, N);

/*
                for (int i = 0; i < N; ++i)
                for (int j = 0; j < N; ++j)
                    printf("%d", arr[i][j]); - */


            free (arr);
            arr = 0;

            Output(Result, N);

        return 0;
        }


        int Input(const char name[]) {

            printf("Input %s >", name);
            int val = 0;
            scanf("%d", &val);

        return val;

            }


        int** Input_arr(int hght, int wgth) {

            int** arr =(int**) calloc (wgth, sizeof(*arr));

            for (int i = 0; i < wgth; i++) {
                arr[i] = (int*)calloc ( hght, sizeof(*arr[i]) );
                if (!arr) errno = ENOMEM;
                }

            return arr;
        }

        int nSpl(int n, int k, int** arr, int N) {

            assert((n <= N ) && (k <= N));
            //printf("BUG"); BUG IS ALWAYS HERE

            if ((n <= 0) || (k <= 0)) return 0;

            if ((k == 1) || (n == 1)) return 1;

            arr[n][k] = nSpl(n - k, k, arr, N) + nSpl(n, k - 1, arr, N);
            //rintf("%d ", arr[n][k]); TRY TO CATCH BUG

            return arr[n][k];
        }

        int Output (int Result, int N) {

        printf("Number %d has %d splittings\n", N - 1, Result);

        return 0;

        }

