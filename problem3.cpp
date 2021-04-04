
//3. What will be output of following c code?
#include<stdio.h>
int main()
{

    int x=011,i;
    for(i=0;i<x;i+=3){
    printf("Start ");
    continue;
    printf("End");

    }

    return 0;

}

/*

Output: Start Start Start
Explanation:
 011 is octal number. Its equivalent decimal value is 9.So, x = 9
First iteration: i = 0
i < x i.e. 0 < 9 i.e. if loop condition is true.Hence printf statement will print: Start
Due to continue keyword program control will come at the beginning of the for loop and
value of variable i will be:
i += 3
i = i + 3 = 3

Second iteration:
i = 3
i < x i.e. 3 < 9 i.e. if loop condition is true.
Hence printf statement will print: Start
Due to continue keyword program control will come at the beginning of the for loop and
value of variable i will be:
i += 3
i = i + 3 = 6
Third iteration:
i = 3
i < x i.e. 6 < 9 i.e. if loop condition is true.
Hence printf statement will print: Start
Due to continue keyword program control will come at the beginning of the for loop and
value of variable i will be:
i += 3
i = i + 3 = 9
Fourth iteration:
i = 6
i < x i.e. 9 < 9 i.e. if loop condition is false.
Hence program control will come out of the for loop.

*/


