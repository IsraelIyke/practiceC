/*#include <stdio.h>

int j, k;
int *ptr;

int main(void)
{
    j = 1;
    k = 2;
    ptr = &k;
    printf("j has the value %d and is stored at %p\n", j, (void *)&j);
    printf("k has the value %d and is stored at %p\n", k, (void *)&k);
    printf("ptr has the value %p and is stored at %p\n", ptr, (void *)&ptr);
    printf("The value of the integer pointed to by ptr is %d\n", *ptr);
}
*/

// #include <stdio.h>

// int my_array[] = {1, 23, 17, 4, -5, 100};
// int *ptr;

// int main(void)
// {
//     int i;
//     ptr = &my_array[0];

//     printf("\n\n");
//     for (i = 0; i < 6; i++)
//     {
//         printf("my_array[%d] = %d ", i, my_array[i]);
//         printf("ptr + %d = %d\n", i, *(++ptr));
//     }
//     return 0;
// }

#include <stdio.h>

int callAgain(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        printf("%d", n);
        callAgain(n - 1);
    }
}
int main()
{
    int n = 7;
    callAgain(n);
}