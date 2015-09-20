#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <errno.h>

int** Create_arr(int n);
int Input(const char name[]);
int** Input_arr(int** arr, int N);
int** transposition(int** arr, int Size);
int** Output_arr(int** arr, int N );


         int main () {

            printf("# --- Matrix transposition by nyuta\n");
            printf("# Enter N\n");

             int N = Input("N");

             int** arr = Create_arr(N);

                if (!arr) return perror("You're not right, mate"), 1;

            Input_arr(arr, N);


            transposition(arr, N);

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


        int** Create_arr(int N) {

            int** arr =(int**) calloc (N, sizeof(*arr));

            for (int i = 0; i < N; i++) {
                arr[i] = (int*)calloc ( N, sizeof(*arr[i]) );
                if (!arr) errno = ENOMEM;
                }

        return arr;

        }


        int** Input_arr(int** arr, int N) {


            for (int i = 0; i < N; ++i)

                for (int j = 0; j < N; ++j) {

                    scanf("%d", &arr[i][j]);

                    if (!scanf) { errno = EIO; arr = 0;}
                }

        return arr;

        }



        int** transposition(int** arr, int Size) {

        int buf = 0;

            for (int i = 0; i < Size; ++i)

                for (int j = 0; j < Size / 2; ++j) {

                        buf = arr[i][j];
                        arr[i][j] = arr[j][i];
                        arr[j][i] = buf;

                    }

        return arr;

        }



        int** Output_arr(int** arr, int N) {

            for ( int i = 0; i < N ; ++i)
                for (int j = 0; j < N; ++j)

                if (j != N -1)
                    printf("%d ", arr[i][j]);

                else printf("%d\n", arr[i][j]);


        return 0;

        }
