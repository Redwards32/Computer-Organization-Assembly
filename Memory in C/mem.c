#include <stdio.h>
#include <stdlib.h>
 int main() {
int num;
int *ptr; //declarng pointer
int **handle; //declaring double pointer
num = 14;
ptr = (int *)malloc(2 * sizeof(int));
*ptr = num;
handle = (int **)malloc(1 * sizeof(int *));
*handle = ptr;
     printf("Address where num is stored:%p\n ", &num );
     printf("Value of Num:%d\n ", num);
     printf("Address where ptr is stored at :%p\n ", &ptr);
     printf("Value of ptr:%d\n ", *ptr);
     printf("Address where handle is stored:%p\n ", &handle);
     printf("Value of handle:%p\n ", *handle);
return 0;
} 
