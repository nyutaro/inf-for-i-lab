#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <errno.h>

int Input(const char name[]);
int* Input_arr(int n);
int* Sort_arr(int* arr, int N);
int* Output_arr(int* arr, int N );

        int main () {

            printf("# ---Delite repited numpers by nyuta\n");
            printf("# Enter N\n");

             int N = Input("N");

             int* arr = Input_arr(N);

                if (arr == NULL) return /*perror(Input errno); - I don't know how to make it work*/1;

            Sort_arr(arr, N);

            Output_arr(arr, N);

            free(arr);
            arr = 0;
        }

        int Input(const char name[]) {

            printf("Input %s >", name);
            int val = 0;
            scanf("%d", &val);

        return val;

            }

        int* Input_arr(int n) {

            int* arr = (int*) calloc (n, sizeof(*arr));

            for (int i = 0; i < n; ++i) {
                printf("Input arr[%d]>", i);
                scanf("%d", &arr[i]);
                }

        return arr;

        }

        int* Sort_arr(int* arr, int N) {

        int  Min = 0, buf = 0;


            for ( int i = 0; i < N-1; i ++ ){

                    Min = i;

                for ( int j = i+1; j < N; j ++ )

                    if ( arr[j] < arr[Min] )

                    Min = j;

                    if ( Min != i ){
                        buf = arr[i];
                        arr[i] = arr[Min];
                        arr[Min] = buf;
                    }
                    }

               // for (int i = 0; i < N; ++i)
                //printf("%d", arr[i]);




        return arr;

        }

        int* Output_arr(int* arr, int N) {

            int test = 0;
            for ( int i = 0; i < N - 1; ++i) {

                if (arr[i] != arr[i + 1])
                    printf("%d", arr[i]);
                    test = 1;
                    }
            if (test == 0) printf ("-1");

        return 0;
        }




