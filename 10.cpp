#include<stdio.h>
int main()
{

    printf("%d",10?0?5:1:12);
}
/*

printf ("%d", 10? 0? 5 :1:12);
That means printf ("%d", 10? (0? 5 :1): 12);
if 10 is true, then return (0? 5:1)
else return 12
Now, (0? 5 :1), if 0 is true, then return 5, else
return 1.
Since non-zero number is true as if condition and
zero is false
So, 1 will be printed

*/


