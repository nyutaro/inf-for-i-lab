#include <stdio.h>
#include <stdlib.h>
const int Size = 9000;
const int Max = 10000;
int Input(const char name[]);
int* summ_of_numeral (int* arr);
int* Output_arr(int* arr, int n );

        int main () {

         printf("# ---Summ_of_numeral by nyuta\n");

            int n = Input("n");

            int arr[Size] = {};

            summ_of_numeral(arr);

            Output_arr(arr, n);


        return 0;
        }


     int Input(const char name[]) {

            printf("Input %s >", name);
            int val = 0;
            scanf("%d", &val);

        return val;

            }


        int* summ_of_numeral (int* arr){

            int a = 0, b = 0, c = 0, d = 0;

            for (int i = 1000; i < Max; ++i ) {

                a = i / 1000;
                b = (i / 100) % 10;
                c = (i / 10) % 10;
                d = i % 10;

                arr[i - 1000] = a + b + c + d;
                }

            return arr;

        }

        int* Output_arr(int* arr, int n) {


            for ( int i = 1; i <Size; ++i)

            if (arr[i] == n)
            printf ("%d ", i+1000);

            printf("\n%d", n);

        return 0;
        }


