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
// #include <stdio.h>
// #define BASE 10
// int main()
// {
//     int num,temp;
//     int i,lastdigit;
//     int freq[BASE];
//     printf("Enter the no.: ");
//     scanf("%d",&num);
//     for(i=0;i<BASE;i++){
//         freq[i]=0;
//     }
//     temp = num;
//     while (temp!=0){
//         lastdigit = temp%10;
//         temp/=10;
//         freq[lastdigit]++;
//     }
//     for(i=0;i<BASE;i++){
//         printf("Frequency of %d is %d\n",i,freq[i]);
//     }
//     return 0;
// }

//7. Write a C program to enter a number and print it in words.

// #include <stdio.h>
// #define base 10
// int reverse(int number){
//     int temp = number;
//     int rev=0;
//     while (temp!=0)
//     {
//         rev = rev*10 + (temp%10);
//         temp /=10 ;
//     }
//     return rev;
    
// }
// int main()
// {
//     int num,rem;
//     char arr[base][base]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
//     printf("Please Enter The Number: ");
//     scanf("%d", &num);
//     num = reverse(num);
//     while (num!=0)
//     {   
//         rem = num%10;
//         printf("%s ",arr[rem]);
//         num /= 10;
//     }
    
    
//     return 0;
// }

//8. Write a C program to print all ASCII character with their values.
// #include <stdio.h>

// int main()
// {
//     for (int i = 0; i < 255; i++)
//     {
//         printf("%c\n",i);
//     }
    
//     return 0;
// }


//9. Write a C program to find power of a number using for loop.

// #include <stdio.h>

// int main()
// {
//     int base,expo,res=1;
//     printf("Enter the value of Base: ");
//     scanf("%d",&base);
//     printf("Enter the value of exponent: ");
//     scanf("%d",&expo);
//     for(int i = 0;i<expo;i++){
//         res*=base;
//     }
//     printf("%d^%d=%d",base,expo,res);
//     return 0;
// }


//10.Write a C program to find all factors of a number.
// #include <stdio.h>

// int main()
// {
//     int num;
//     printf("Enter any positive integer: ");
//     scanf("%d",&num);
//     for (int i =1; i <= num; i++)
//     {
//         if(num%i==0){
//             printf("%d\n",i);
//         }
//     }
    
    
//     return 0;
// }

//11. Write a C program to calculate factorial of a number.

// #include <stdio.h>

// int main()
// {
//     int n, fact = 1;
//     printf("Enter the value of Number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <=n; i++)
//     {
//         fact*=i;
//     }
//     printf("%d",fact);
//     return 0;
// }

//12. program to find HCF (GCD) of two numbers

// #include <stdio.h>

// int main()
// {
//     int num1,num2;
//     int hcf=1;
//     printf("Enter the first number: ");
//     scanf("%d",&num1);
//     printf("Enter the second number: ");
//     scanf("%d",&num2);
//     int min = (num1<num2)?num1:num2;
//     for(int i=1; i<min;i++){
//         if(num1%i==0 && num2%i==0){
//             hcf = i;
//         }
//     }
//     printf("%d",hcf);
//     return 0;
// }


//13.Write a C program to find LCM of two numbers.

// #include <stdio.h>

// int main()
// {
//     int num1,num2;
//     int lcm;
//     printf("Enter the first no.: ");
//     scanf("%d",&num1);
//     printf("Enter the second no.: ");
//     scanf("%d",&num2);
//     int max = (num1>num2)?num1:num2;
//     while (1)
//     {
//         if (max%num1==0 && max%num2==0){
//             lcm = max;
//             break;
//         }
//         max++;
//     }
//     printf("%d",lcm);
    
//     return 0;
// }

//14.Write a C program to check whether a number is Prime number or not.

// #include <stdio.h>

// int main()
// {
//     int num,p=0;
//     printf("Enter the number: ");
//     scanf("%d", &num);
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             p++;
//         }
//     }
//     if (p==2){
//         printf("The no. is prime");
//     }
//     else{
//         printf("not a prime no.");
//     }
//     return 0;
// }


//15. Write a C program to print all Prime numbers between 1 to n.
//16. Write a C program to find sum of all prime numbers between 1 to n.
// #include <stdio.h>
// int isprime(int num){
//     int p=0,i;
//     for(i=1;i<=num;i++){
//         if(num%i==0){
//             p++;
//         }
//     }
//     if(p==2){
//         return 1;
//     }
//     return 0;
// }
// int main()
// {
//     int n,sum=0;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     for(int i=2;i<=n;i++){
//         if(isprime(i)){
//             printf("%d\n",i);
//             sum+=i;
//         }
//     }
//     printf("%d",sum);
//     return 0;
// }

//17.Write a C program to find all prime factors of a number.
// #include <stdio.h>

// int isprime(int num){
//     int p=0;
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             p++;
//         }
//     }
//     if(p==2){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     for(int i=2;i<=n;i++){
//         if (n%i==0 && isprime(i)){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

//18. program to check whether a number is armstrong number or not

// #include <stdio.h>
// #include <math.h>
// int len(int num){
//     int count = 0;
//     int temp = num;
//     while (temp!=0)
//     {
//         temp/=10;
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     int i,n;
//     int lastdigit,temp;
//     int sum,length;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     length= len(n);
//     temp=n;
//     while (temp!=0)
//     {
//         lastdigit = temp%10;
//         sum += round(pow(lastdigit,length));
//         temp/=10;
//     }
//     if(sum==n){
//         printf("armstrong");
//     }
//     else{
//         printf("no");
//     }
//     return 0;
// }


//19.Write a C program to print all Armstrong numbers between 1 to n.

// #include <stdio.h>
// #include <math.h>
// int len(int num){
//     int temp= num;
//     int count=0;
//     while (temp!=0)
//     {
//         count++;
//         temp/=10;
//     }
//     return count;
    
// }
// int isarm(int num){
//     int temp,sum=0;
//     int length = len(num);
//     int lastdigit;
//     temp = num;
//     while (temp!=0)
//     {
//         lastdigit = temp%10;
//         sum+= pow(lastdigit,length);
//         temp/=10;
//     }
//     if (sum==num){
//         return 1;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("Enter the value of numger: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if (isarm(i)==1){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

//20. program to check whether a number is perfect number or not

// #include <stdio.h>
// int main()
// {
//     int n,temp,sum=0;
//     printf("Enter any positive integer : ");
//     scanf("%d",&n);
//     temp= n;
//     for(int i = 1;i<temp;i++){
//         if (temp%i==0){
//             sum+=i;
//         }
//     }
//     if (sum == n){
//         printf("%d is Perfect Number.",n);
//     }
//     else{
//         printf("%d is Not a Perfect Number.",n);
//     }
//     return 0;
// }


//21.Write a C program to print all Perfect numbers between 1 to n
// #include <stdio.h>

// int isPerfect(int num){
//     int sum =0 , i ;
//     for(i = 1;i<num;i++){
//         if (num%i==0){
//             sum+=i;
//         }
//     }
//     if (sum==num){
//         return 1;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     printf("Enter the value of numbere: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if (isPerfect(i)==1){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

//21.program to check whether a number is Strong number or not
// #include <stdio.h>

// int factorial(int num){
//     int sum=1;
//     for(int i=1;i<=num;i++){
//         sum*=i;
//     }
//     return sum;
// }
// int main()
// {
//     int n,temp,sum=0,lastdigit;
//     printf("Enter the value of number :");
//     scanf("%d",&n);
//     temp=n;
//     while (temp!=0)
//     {
//         lastdigit = temp%10;
//         sum+=factorial(lastdigit);
//         temp/=10;
//     }
//     if (sum == n){
//         printf("%d is a strong number.",n);
//     }
//     else{
//         printf("%d is not a strong number.",n);
//     }
//     return 0;
// }

//22.program to print fibonacci series upto n terms
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     int t1=0,t2=1,temp;
//     printf("%d\n%d\n",t1,t2);
//     for(int i=1;i<=n-2;i++){
//         temp=t1;//a,b= b,a+b
//         t1 = t2;
//         t2 = temp+t2;
//         printf("%d\n",t2);
//     }
//     return 0;
// }


//23.program to find ones complement of a binary number

// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a Binary number:");
//     scanf("%d",&num);
//     int temp = num;
//     int lastdigit;
//     while (temp!=0)
//     {
//         lastdigit = temp%10;
//         if (lastdigit==1){
//             printf("%d",1-lastdigit);
//         }
//         else{
//             printf("%d",1+lastdigit);
//         }
//         temp/=10;
//     }
    
//     return 0;
// }


//<-------------Functions and Recursions------------->
//24. program to find cube of a number using function

// #include <stdio.h>
// int cube(int num){
//     return num*num*num;
// }
// int main()
// {
//     int n;
//     printf("Enter the value of n:  ");
//     scanf("%d",&n);
//     printf("Cube of %d is %d",n,cube(n));
//     return 0;
// }

// 25.Write a C program to find diameter, circumference and area of circle using functions.
// #include <stdio.h>
// float diameter(float radius){
//     return 2*radius;
// }
// float cirumference(float radius){
//     return 2*3.14*radius;
// }
// float areaofcircle(float radius){
//     return 3.14*radius*radius;
// }
// int main()
// {
//     float r;
//     scanf("%f",&r);
//     printf("Diameter = %.2f\nCircumference = %.2f\narea= %.2f",diameter(r),cirumference(r),areaofcircle(r));
//     return 0;
// }

//26.Write a C program to find maximum and minimum between two numbers using functions.
// int min(int num1,int num2){
//     return (num1<num2)?num1:num2;
// }
// int max(int num1,int num2){
//     return (num1>num2)?num1:num2;
// }
// #include <stdio.h>

// int main()
// {
//     printf("%d",min(102,13));
//     printf("%d",max(102,13));
//     return 0;
// }

// 27.Write a C program to check whether a number is even or odd using functions.
// char* evodd(int num){
//     return  ((num%2==0) ? "Even" : "Odd");
// }
// #include <stdio.h>

// int main()
// {
//     printf("%s",evodd(14));
//     return 0;
// }

// 28.Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
// #include <stdio.h>
// #include <math.h>
// int isPrime(int num){
//     int i,p=0;
//     for(i=1;i<=num;i++){
//         if (num%i==0){
//             p++;
//         }
//     }
//     if(p==2){return 1;}
//     else{return 0;}
// }
// int isarmStrong(int num){
//     int i,sum=0,lastdigit,temp;
//     int length = (int) log10(num)+1;
//     temp=num;
//     while (temp!=0)
//     {
//         lastdigit = temp%10;
//         sum+= pow(lastdigit,length);
//         temp/=10;
//     }
//     if(sum==num){return 1;}
//     else{return 0;}
// }
// int isPerfect(int num){
//     int i,sum=0;
//     for(i =1;i<num;i++){
//         if(num%i==0.){
//             sum+=i;
//         }
//     }
//     if(sum==num){return 1;}
//     else{return 0;}
// }
// int main()
// {
//     printf("%d\n",isPrime(13));
//     printf("%d\n",isarmStrong(371));
//     printf("%d\n",isPerfect(6));
//     return 0;
// }

//29.Write a C program to find all prime numbers between given interval using functions.
// #include <stdio.h>

// int main()
// {
//     int low = 5, high = 50; 
//     printf("<-------------------------->\n");
//     for(int i=low;i<=high;i++){
//         if(isPrime(i)){
//             printf("%d\n",i);
//         }
//     }
//     printf("<-------------------------->\n");
//     for(int i=low;i<=high;i++){
//         if(isarmStrong(i)){
//             printf("%d\n",i);
//         }
//     }
//     printf("<-------------------------->\n");
//     for(int i=low;i<=high;i++){
//         if(isPerfect(i)){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }


// <--------------------Recursion--------------------->
//30. Write a C program to find power of any number using recursion.
// #include <stdio.h>
// int  power(int base, int n){
//     if (n == 0){return 1;}
//     else{
//         return base * power(base, n-1);
//     }

// }
// int main()
// {
//     int base=2,exponent=8;
//     printf("%d",power(base,exponent));
//     return 0;
// }

// 31. Write a C program to print all natural numbers between 1 to n using recursion.

// #include <stdio.h>
// void printnatural(int lowerlimit,int upperlimit){
//     if (lowerlimit>upperlimit)
//     {
//         return;
//     }
//     else{
//         printf("%d\n",lowerlimit);
//         printnatural(lowerlimit+1,upperlimit);
//     }
    
// }

// int main()
// {
//     printnatural(1,40);
//     return 0;
// }


//<------------------------------------YESTERDAY QUESTIONS------------------------------------>
//GCD
// #include <stdio.h>

// int main()
// {
//     int num1,num2,gcd =0;
//     printf("Enter first no.: ");
//     scanf("%d",&num1);
//     printf("Enter second no.: ");
//     scanf("%d",&num2);
//     int min = (num1<num2)?num1:num2;
//     for(int i=1;i<min;i++){
//         if((num1%i==0) && (num2%i==0)){
//             gcd= i;
//     }}
//     printf("%d",gcd);
//     return 0;
// }

//LCM
// #include <stdio.h>

// int main()
// {
//     int num1,num2,lcm =0;
//     printf("Enter first no.: ");
//     scanf("%d",&num1);
//     printf("Enter second no.: ");
//     scanf("%d",&num2);
//     int max = (num1>num2)?num1:num2;
//     while (1)
//     {
//         if((max%num1==0) && (max%num2==0)){
//             lcm= max;
//             break;
//         }
//         max+=max;
//     }
//     printf("%d",lcm);
//     return 0;
// }

/*****************************************************************************
*                        🚀🌟  ARRAY  🌟🚀                *
******************************************************************************/
// 1.program to declare, initialize, input and print array elements
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the total no. of entries: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=1;i<=n;i++){
//         int newnumber;
//         printf("\nEnter number %d : ",i);
//         scanf("%d",&newnumber);
//         arr[i]=newnumber;
//     }
//     for(int i=1;i<=n;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }


// 2.program to print all negative elements in array

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the total no. of entries: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=1;i<=n;i++){
//         int newnumber;
//         printf("\nEnter number %d : ",i);
//         scanf("%d",&newnumber);
//         arr[i]=newnumber;
//     }
//     for(int i=1;i<=n;i++){
//         if (arr[i]<0)
//         {
//         printf("%d\t",arr[i]);
//         }
        
//     }
//     return 0;
// }


//3.program to find sum of array elements

// #include <stdio.h>

// int main()
// {
//     int n,sum=0;
//     printf("Enter the total no. of entries: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=1;i<=n;i++){
//         int newnumber;
//         printf("\nEnter number %d : ",i);
//         scanf("%d",&newnumber);
//         arr[i]=newnumber;
//     }
//     for(int i=1;i<=n;i++){
//         printf("%d+",arr[i]);
//         sum+=arr[i];
//     }
//     printf("\nSum = %d",sum);
//     return 0;
// }

//4.Array and Matrix programming exercises and solutions in C

// #include <stdio.h>

// int main()
// {
//     int n,sum=0;
//     printf("Enter the total no. of entries: ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         int newnumber;
//         printf("\nEnter number %d : ",i);
//         scanf("%d",&newnumber);
//         arr[i]=newnumber;
//     }
//     int max,min;
//     max = arr[0];
//     min = arr[0];
//     //Finding maximum element using loop
//     for(int i=1;i<n;i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//         if(max>arr[i]){
//             min = arr[i];
//         }
//     }
//     printf("the maximum and the minimum element of the array is %d and %d resp",max,min);
//     return 0;
// }

// 5.program to sort an array

// #include <stdio.h>
// int main()
// {
//     int size,max1,max2;
//     printf("Enter the size of an array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i =0;i<size;i++){
//         int newnumber;
//         printf("\nEnter number %d : ",i);
//         scanf("%d",&newnumber);
//         arr[i] = newnumber;
//     }

//     //sorting of array
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]>arr[j]){ 
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<size;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

//6.program to find second largest number in array

// #include <stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the size of an array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i =0;i<size;i++){
//         int newnumber;
//         printf("\nEnter number %d : ",i+1);
//         scanf("%d",&newnumber);
//         arr[i] = newnumber;
//     }

//     //sorting of array
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i]>arr[j]){ 
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     printf("%d",arr[size-2]);
//     return 0;
// }

//7. Write a C program to count total number of even and odd elements in an array.

// #include <stdio.h>

// int main()
// {
//     int size;
//     int countev,countod,countneg;
//     countev=countod=countneg=0;
//     printf("Enter the size of an array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i =0;i<size;i++){
//         int newnumber;
//         printf("\nEnter number %d : ",i+1);
//         scanf("%d",&newnumber);
//         arr[i] = newnumber;
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i]<0){
//             countneg++;
//         }
//         if (arr[i]%2==0) {
//             countev++;
//         }
//         else{
//             countod++;
//         }
//     }
//     printf("\nNumber of even elements are %d",countev);
//     printf("\nNumber of odd elements are %d",countod);
//     printf("\nNumber of Negative elements are %d",countneg);
//     return 0;
// }


//8.Write a C program to copy all elements from an array to another array.

// #include <stdio.h>

// int main()
// {
//     int size;
//     printf("Enter the size of an array: ");
//     scanf("%d", &size);
//     int arr[size];
//     for(int i =0;i<size;i++){
//         int newnumber;
//         printf("\nEnter number %d : ",i+1);
//         scanf("%d",&newnumber);
//         arr[i] = newnumber;
//     }
//     int arr_copy[size];
//     for(int i=0;i<size;i++){
//         arr_copy[i]=arr[i];
//     }
//     for(int i=0;i<size;i++){
//         printf("%d",arr_copy[i]);
//     }
//     return 0;
// }

//9.Write a C program to insert an element in an array.
// #include <stdio.h>

// int main()
// {
//     int size;
//     printf("Enter the size of an array: ");
//     scanf("%d", &size);
//     int arr[size+1];
//     for(int i =0;i<size;i++){
//         int newnumber;
//         printf("\nEnter number %d : ",i+1);
//         scanf("%d",&newnumber);
//         arr[i] = newnumber;
//     }
//     int element,index;
//     printf("\nEnter the element you want to insert: ");
//     scanf("%d",&element);
//     printf("\nEnter the index where you want to include: ");
//     scanf("%d",&index);
//     if (index >= 0 && index <= size) {
//         for (int i = size - 1; i > index; i--) {
//             arr[i] = arr[i-1];
//         }
//         arr[index] = element;
//         printf("\nThe modified array is: \n");
//         for (int i = 0; i < size + 1; i++) {
//             printf("%d\t", arr[i]);
//         }
//     } else {
//         printf("Invalid Index!");
//     }
//     return 0;
// }


//10. Write a C program to insert an element in an array.

// #include <stdio.h>

// int main()
// {
//     int size,num,pos;
//     printf("Enter the value of size: ");
//     scanf("%d",&size);
//     int arr[size];
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the element you want to insert: ");
//     scanf("%d",&num);
//     printf("Enter the position where you want to insert: ");
//     scanf("%d",&pos);
//     for(int i=size;i>=pos;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos-1]=num;
//     for(int i=0;i<=size;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// 11.program to delete element from an array

// #include <stdio.h>

// int main()
// {
//     int size;
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     int arr[size+1];
//     for(int i=0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     int pos;
//     printf("Enter the position from where you want to delete the element");
//     scanf("%d",&pos);
//     arr[pos-1]=arr[pos];
//     for(int i=pos;i<=size;i++){
//         arr[i]=arr[i+1];
//     }
//     size--;
//     for(int i=0;i<size;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }


//12. program to count frequency of each element in an array

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int freq[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    /* Air */
    for(int i=0;i<size;i++){
        int count = 1;
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }

    for(int i=0;i<size;i++){
        if(freq[i]!=0){
            printf("the freq of %d is %d\n",arr[i],freq[i]);
        }
    }
    return 0;
}
