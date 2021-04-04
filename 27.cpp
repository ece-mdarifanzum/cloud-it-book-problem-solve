#include<stdio.h>
int main()
{

    int i=2;
    do;
    while(i++<=2);//i=3,4   every loop is terminated but it will check
     //for condition twice
    printf("%d",i);
    return 0;

}
