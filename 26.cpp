
#include<stdio.h>
int main()
{

    int i=1;
    while (i++<=1);
    while(i++<=2);
    printf("i=%d",i);
    system("pause");
    return 0;

}

//Output =4
//Note that every loop is terminated but it will check for condition twice
