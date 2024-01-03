#include <stdio.h>
#include <stdlib.h>

const int size = 3;
/* this means you cannot allocate memory dynamically
int main(void)
{
    int list[3];

    list[0] = 1 ;
    list[1] = 2;
    list[2] = 3;
     for (int i = 0 ; i < 3  ; i++)
     {
        printf("%i \n", list[i]);
     }
}*/


//initialising list as a pointer

int main(void)
{
    int *list = malloc(size*sizeof(int));
    //always check for list not being null
    if(list == NULL)
    {
        printf("error 556 :no list found");
        return 556;
    }

    list[0] = 1;  //can also be written as *list
    list[1] = 2 ; //*(list+1)
    list [2] = 3;


    int *tmp = malloc((size+1)*sizeof(int));
    if(tmp==NULL)
    {
        free(list);
        return 1;
    }

    //copying list to tmp
    for ( int i = 0  ; i < size ; i++ )
    {
        tmp[i] = list[i];
    }
    free(list); //freeing the original address of the list i.e. the size 3 array 
    tmp[size] = 4 ;

    list = tmp ;

    for (int i = 0 ; i < 4  ; i++)
     {
        printf("%i \n", list[i]);
     }
    free(list);
}
