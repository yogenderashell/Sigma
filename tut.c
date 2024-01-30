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

// #include <stdio.h>

// int main(){
//     //find the sum of all the digits
//     int num = 1234,sum;
//     while (num!=0)
//     {
//         int rem = num%10;
//         sum+=rem;
//         num/=10;
//     }
//     printf("the sum of all the digits of a no. is: %d",sum);
//     return 0;
// }


//find the product of all the digits of no.
// #include <stdio.h>

// int main()
// {
//     int num = 1234,prod=1;
//     while (num!=0)
//     {
//         int rem =num%10;
//         prod*=rem;
//         num/=10;
//     }
//     printf("%d is the product to all the digits of the no.",prod);
    
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int num1,num2=0;
//     printf("Enter the number :\n");
//     scanf("%d",&num1);
//     while(num1!=0){
//         int rem = num1%10;
//         num2 = num2*10 + rem;
//         num1 /= 10;
//     }
//     printf("%d",num2);
//     return 0;
// }


//check if the no. is palindrome or not
#include <stdio.h>

int main()
{
    int num1,rev=0;
    printf("Enter a number:\n");
    scanf("%d", &num1);
    int n = num1;
    while(num1!=0){
        int rem = num1%10;
        rev = rev*10 +rem;
        num1 /= 10;
    }
    if (rev == n){
        printf("Palindrome\n");
    }
    else{
        printf("Not\n");
    }
    printf("%d",rev);
    return 0;
}