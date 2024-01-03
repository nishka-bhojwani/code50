#include <stdio.h>
#include <stdlib.h>


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
    int *list = malloc(3*sizeof(int));
    //always check for list not being null
    if(list == NULL)
    {
        printf("error 556 :no list found");
        return 556;
    }

    list[0] = 1;  //can also be written as *list
    list[1] = 2 ; //*(list+1)
    list [2] = 3;


    int *tmp = malloc(4*sizeof(int));
    if(tmp==NULL)
    {
        free(list);
        return 1;
    }

    //copying list to tmp
    for ( int i = 0  ; i < 3 ; i++ )
    {
        tmp[i] = list[i];
    }
    tmp[2+1] = 4 ;

    for (int i = 0 ; i < 4  ; i++)
     {
        printf("%i \n", tmp[i]);
     }

}
