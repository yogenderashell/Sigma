//1.
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
//2.
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

//3.
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

//4.
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

//5.
//check if the no. is palindrome or not
// #include <stdio.h>

// int main()
// {
//     int num1,rev=0;
//     printf("Enter a number:\n");
//     scanf("%d", &num1);
//     int n = num1;
//     while(num1!=0){
//         int rem = num1%10;
//         rev = rev*10 +rem;
//         num1 /= 10;
//     }
//     if (rev == n){
//         printf("Palindrome\n");
//     }
//     else{
//         printf("Not\n");
//     }
//     printf("%d",rev);
//     return 0;
// }

//6.
// program to print the ascii value of all the characters (0-255)
// #include <stdio.h>

// int main()
// {
//     for (int i=0;i<=255;i++){
//         printf("The ascii value of %c is %d\n",i,i);
//     }
//     return 0;
// }
//7.
//program to find power of a number using for loop
// #include <stdio.h>

// int main()
// {
//     int base, ex,res=1;
//     base = 2;
//     ex = 5;
//     for (int i=0;i<ex;i++){
//         res *= base;
//     }
//     printf("%d",res);
//     return 0;
// }


//first star pattern problem
// #include <stdio.h>

// int simple(int len){
//     for (int i=1;i<=len;i++){
//         for (int j =1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// //reversing the star pattern 
// int reverse(int len){
//     for (int i=1;i<=len;i++){
//         for (int j =i;j<=len;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main()
// {   
//     simple(5);
//     reverse(5);
//     return 0;
// }


//w3resources array question
//1. Write a program in C to store elements in an array and print them.
// #include <stdio.h>

// int main()
// {
//     int arr[100];
//     int n;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the element: ");
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ",arr[i]);
//     }
    
//     return 0;
// }


//2. Write a program in C to read n number of values in an array and display them in reverse order.
// #include <stdio.h>

// int main()
// {
//     int t;
//     printf("Enter the total number of elements you want in your array: ");
//     scanf("%d",&t);
//     int arr[100];
//     printf("Input %d no. of Elements: \n",t);
//     for (int i = 1; i <= t; i++)
//     {
//         printf("Enter the value of element %d: ",i);
//         scanf("%d",&arr[i-1]);
//     }
//     for (int i = 1;i<=t;i++){
//         printf("%d\n",arr[i-1]);
//     }
//     for(int i=5;i>=1;i--){
//         printf("%d ",arr[i-1]);
//     }
//     return 0;
// }

//3. Write a program in C to find the sum of all elements of the array.
// #include <stdio.h>

// int main()
// {
//     int t,sum=0;
//     printf("Enter the total number of elements you want in your array: ");
//     scanf("%d",&t);
//     int arr[100];
//     printf("Input %d no. of Elements: \n",t);
//     for (int i = 1; i <= t; i++)
//     {
//         printf("Enter the value of element %d: ",i);
//         scanf("%d",&arr[i-1]);
//     }
//     for (int i = 1; i <= t; i++){
//         sum+=arr[i-1];
//     }
//     printf("%d",sum);
//     return 0;
// }


// 4. Write a program in C to copy the elements of one array into another array.
// #include <stdio.h>
// int main()
// {
//     int t,sum=0;
//     printf("Enter the total number of elements you want in your array: ");
//     scanf("%d",&t);
//     int arr[100];
//     printf("Input %d no. of Elements: \n",t);
//     for (int i = 1; i <= t; i++)
//     {
//         printf("Enter the value of element %d: ",i);
//         scanf("%d",&arr[i-1]);
//     }


//     int cpy[100]={0};
//     for (int i = 1; i <= t; i++)
//     {
//         cpy[i-1]=arr[i-1];
//     }
//     for (int i = 1; i <= t; i++)
//     {
//         printf("%d\n",cpy[i-1]);
//     }
    
//     return 0;
// }


// 5. Write a program in C to count the total number of duplicate elements in an array.

// #include <stdio.h>

// int main()
// {
//     int t,count=0;
//     printf("Enter the total number of elements you want in your array: ");
//     scanf("%d",&t);
//     int arr[100];
//     printf("Input %d no. of Elements: \n",t);
//     for (int i = 1; i <= t; i++)
//     {
//         printf("Enter the value of element %d: ",i);
//         scanf("%d",&arr[i-1]);
//     }
//     for (int i = 1; i <= t; i++){
//         for(int j = i+1;j<=t;j++){
//             if (arr[i] == arr[j]){
//                 count++;
//             }
//         }   
//     }
//     printf("%d",count);
    
//     return 0;
// }
//6.C program to count frequency of digits in an integer
#include <stdio.h>
#define BASE 10
int main()
{
    int num,temp;
    int i,lastdigit;
    int freq[BASE];
    printf("Enter the no.: ");
    scanf("%d",&num);
    for(i=0;i<BASE;i++){
        freq[i]=0;
    }
    temp = num;
    while (temp!=0){
        lastdigit = temp%10;
        temp/=10;
        freq[lastdigit]++;
    }
    for(i=0;i<BASE;i++){
        printf("Frequency of %d is %d\n",i,freq[i]);
    }
    return 0;
}