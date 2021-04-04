//4. What will be output of following c code?
#include<stdio.h>
int main()
{

    int i,j;
    i=j=2,3;
    while(--i&&j++)
    printf("%d%d",i,j);
    return 0;

}
/*
Initial value of variable: i = 2; j = 2
Consider the while condition: --i && j++
In first iteration:
--i && j++
= 1 && 2 //In c any non-zero number represents true.
= 1 (True)
So while loop condition is true. Hence printf function will print value of i = 1 and j = 3
(Due to post increment operator)
In second iteration:
--i && j++
= 0 && 3 //In c zero represents false
= 0 //False
So while loop condition is false. Hence program control will come out of the for loop.
*/
