// #include <stdio.h>

// int main()
// {
//     // to find the sum of first and the last digit of a no.
//     int first,last,num =1234;
//     last = num%10;
//     while(num>=10){
//         num/=10;
//     }
//     first = num;
//     printf("the sum of the first and the last digit is : %d",(first+last));
//     return 0;
// }

#include <stdio.h>

int main()
{
    //find the sum of all the digits
    int num = 1234,sum;
    while (num!=0)
    {
        int rem = num%10;
        sum+=rem;
        num/=10;
    }
    printf("the sum of all the digits of a no. is: %d",sum);
    return 0;
}