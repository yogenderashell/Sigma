//the code to find the first and last digits of a no. 
#include <stdio.h>

int main()
{
    int first,last,num =1234;
    last = num%10;
    while(num>=100){//the no. of digits you want == (100).count(0)
        num/=10;
    }
    printf("%d and %d is the first and the last digit of the nummber: ",num,last);
    return 0;
}