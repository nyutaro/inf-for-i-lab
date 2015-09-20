#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>

int* Input_arr(int n);
int Input(const char name[]);
int* check_prime(int* arr, int Size);
int* Output_arr(int* arr, int N );


         int main () {

            printf("# ---Primes by nyuta\n");
            printf("# Enter N\n");

             int N = Input("N");

             int* arr = Input_arr(N);

                if (!arr) return perror("You're not right, mate"),1;

            check_prime(arr, N);


            Output_arr(arr, N);

            free(arr);
            arr = 0;

        return 0;

        }


        int Input(const char name[]) {

                printf("Input %s >", name);
                int val = 0;
                scanf("%d", &val);

        return val;

        }

        int* Input_arr(int n) {

            int* arr = (int*) calloc (n, sizeof(*arr));

            if (!arr) errno = ENOMEM;

            for (int i = 0; i < n; ++i) {
                printf("Input arr[%d]>", i);
                scanf("%d", &arr[i]);
                if (!scanf)
                    { errno = EIO; arr = 0; }
                }

        return arr;

        }


        int* check_prime(int* arr, int Size) {

            int flag = 0;

            for (int i = 0; i < Size; ++i) {

                if (arr[i] == 1) { flag = 1; }
                for (int j = 2; j < arr[i]; j++ ) {

                    if  (arr[i] % j == 0) flag = 1;

                }

                if (flag == 1) arr[i] = 0;

                flag = 0;
            }


        return arr;

        }



        int* Output_arr(int* arr, int N) {

            for ( int i = 0; i < N ; ++i)

                if (arr[i] != 0 )
                    printf("%d", arr[i]);

        return 0;

        }
