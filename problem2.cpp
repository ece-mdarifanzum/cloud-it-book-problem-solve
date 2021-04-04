//What will be output of following c code ?

#include<stdio.h>
int main()
{

    int i=2,j=2;
    while(i+1?--i:j++)
          printf("%d",i);
    return 0;

}

// output 1
/*
 Consider the while loop condition: i + 1 ? -- i : ++j
 In first iteration: i + 1 = 3 (True).So ternary operator will return -–i i.e. 1 .In c 1 means
true so while condition is true. Hence printf statement will print 1
 In second iteration: i+ 1 = 2 (True). So ternary operator will return -–i i.e. 0
 In c zero means false so while condition is false. Hence program control will come out of
the while loop.

