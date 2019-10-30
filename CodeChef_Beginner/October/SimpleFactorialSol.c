
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    int tc = 0, num = 0, k;

    scanf("%d", &tc);

    int *arr = (int*) malloc(sizeof(int) * 200);


    while (tc-- > 0) {

        scanf("%d", &num);
        memset(arr, 0, 200 * sizeof(arr[0]));
        int m = 1;
        arr[0] = 1;

        for(k=2; k<=num; ++k) {

            int temp = 0;
            int index = 0;

            int digit = m;
            m = 0;
            while (digit-- > 0) {
                 ++m;
                 int x = arr[index] * k + temp;
                arr[index] = x % 10;
                temp = x / 10;
                ++index;
            }

            while (temp > 0) {
                ++m;
                arr[index] = temp % 10;
                temp /= 10;
                ++index;
            }
        }

       /*printf("M is %d\n", m);*/
        for (; m >0; --m) {
            printf("%d", arr[m-1]);
        }
        puts("");


    }

    return 0;
}







