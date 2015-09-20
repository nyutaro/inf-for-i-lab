#include <stdio.h>
#include <stdlib.h>

int Input(const char name[]);
int* number_of_prime (int* arr, int n);
int* Input_arr(int n);
int* Output_arr(int* arr, int n );

        int main () {

         printf("# ---number_of_prime by nyuta\n");

            int n = Input("n");

            int* arr = Input_arr(n + 1);

            number_of_prime(arr, n);

            Output_arr(arr, n);


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

        return arr;

        }

        int* number_of_prime(int* arr, int n) {

            arr[1] = 2;

            int k = 2, test = 0;//k is number of prime
               // printf ("BUG"); BUG IS ALWAYS HERE
            for (int i = 3; arr[n] == 0 ; ++i) {

                test = 0;

                for (int j = 2; j < i; ++j) {
                    if (i % j == 0)
                        test = 1;
                }

                if (test == 0) {
                    arr[k] = i;
                    k++;
                    }

            }

            return arr;

        }


        int* Output_arr(int* arr, int n) {


            for ( int i = 1; i <= n; ++i)
            printf ("%d ", arr[i]);

        return 0;
        }
