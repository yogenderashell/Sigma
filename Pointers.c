// <Pointers>

// #include <stdio.h>

// int main()
// {
//     char character = 'C';
//     int integer = 1;
//     float real  = 10.4f;
//     long long biginteger = 9898989811;
//     printf("Value of character: %c, address of character: %X\n",character,&character);
//     printf("Value of integer: %d, address of integer: %X\n",integer,&integer);
//     printf("Value of real: %f, address of real: %X\n",real,&real);
//     printf("Value of biginteger: %lld, address of biginteger: %X",biginteger,&biginteger);
//     return 0;
// }

// 2.program to add two numbers using pointers

// #include <stdio.h>

// int main()
// {
//     int first=14,second=15;
//     int* ptr1 = &first;
//     int* ptr2= &second;
//     int sum = *ptr1+*ptr2;
//     int diff = *ptr1-*ptr2;
//     int mul = *ptr1**ptr2;
//     printf("%d\n",sum);
//     printf("%d\n",diff);
//     printf("%d",mul);
//     return 0;
// }

// 3.program to swap two numbers using call by reference

// #include <stdio.h>

// int main()
// {
//     int first = 10,second = 20;
//     int* ptr1 = &first;
//     int* ptr2 = &second;
//     printf("%d\n",*ptr1);
//     printf("%d\n",*ptr2);
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
//     printf("%d\n",*ptr1);
//     printf("%d",*ptr2);
//     return 0;
// }


// 4. program to input and print array elements using pointers

// #include <stdio.h>

// int main()
// {
//     int arr[100];
//     int *ptr = arr;
//     int size = 8;
//     for(int i=0;i<size;i++){
//         scanf("%d",ptr);
//         ptr++;
//     }
//     ptr=arr;
//     for(int i=0;i<size;i++){
//         printf("%d\n",*ptr);
//         ptr++;
//     }
//     return 0;
// }


// 5. program to copy one array to another using pointers

// #include <stdio.h>
// #define size 5
// int main()
// {
//     int arr[size],copy[size];
//     int* ptr1 = arr;
//     int* ptr2 = copy;
//     for(int i=0;i<size;i++){
//         scanf("%d",ptr1+i);
//         *(ptr2+i) = *(ptr1+i);
//     }
//     for(int i=0;i<size;i++){
//         printf("%d",*(ptr1+i));
//     }
//     printf("\n");
//     for(int i=0;i<size;i++){
//         printf("%d",*(ptr2+i));
//     }
//     return 0;
// }

// 6. program to swap two arrays using pointers

// #include <stdio.h>
// #define size 5
// int main()
// {
//     int arr[size],copy[size];
//     int* ptr1 = arr;
//     int* ptr2 = copy;
//     printf("Enter the values of first array: \n");
//     for(int i=0;i<size;i++){
//         scanf("%d",(ptr1+i));
//     }
//     printf("Enter the values of second array: \n");
//     for(int i=0;i<size;i++){
//         scanf("%d\n",(ptr2+i));
//     }
//     printf("\n");
//     //
//     for(int i=0;i<size;i++){
//         printf("%d,",*(ptr1+i));
//     }
//     printf("\n");
//     for(int i=0;i<size;i++){
//         printf("%d,",*(ptr2+i));
//     }

//     for(int i=0;i<size;i++){
//         int temp = *(ptr2+i);
//         *(ptr2+i) = *(ptr1+i);
//         *(ptr1+i) = temp;
//     }
//     //printing
//     for(int i=0;i<size;i++){
//         printf("%d,",*(ptr1+i));
//     }
//     printf("\n");
//     for(int i=0;i<size;i++){
//         printf("%d,",*(ptr2+i));
//     }
    
//     return 0;
// }



// 7. program to reverse an array using pointers

// #include <stdio.h>
// #define size 5
// int main()
// {
//     int arr[size];
//     int *left = arr;
//     //input
//     int i;
//     for(i=0;i<size;i++){
//         scanf("%d",(left+i));
//     }
//     int *right = &arr[size-1];
//     while (left<right)
//     {
//         // swapping the elements
//         int temp = *left;
//         *left=*right;
//         *right = temp;
//         left++;
//         right--;
//     }
//     left = arr;
//     printf("%d\n",left);
//     printf("%d\n",right);

//     //output
//     for(i=0;i<size;i++){
//         printf("%d\n",*(left+i));
//     }
//     return 0;
// }


// 8. program to search element in array using pointers

// #include <stdio.h>
// #define size 8
// int main()
// {
//     int arr[size];
//     int *ptr = arr;
//     int index =0;
//     //scanf
//     int i;
//     for(i=0;i<size;i++){
//         scanf("%d",(ptr+i));
//     }
//     int ch;
//     printf("Enter the character you want to search: ");
//     scanf(" %d",&ch);
//     while (*ptr!=ch && ptr<(arr+size))
//     {
//         ptr++;
//         index++;
//     }

//     printf("index of the character: %d",index);
//     return 0;
// }

// 9. How to access two dimensional array using pointers in C programming?

// #include <stdio.h>
// #define size 3
// int main()
// {
//     int matrix[size][size];
//     int row,col;
//     for(row=0;row<size;row++){
//         for(col=0;col<size;col++){
//             scanf("%d",(*(matrix+row)+col));
//         }
//     }
//     for(row=0;row<size;row++){
//         for(col=0;col<size;col++){
//             printf("%d ",*(*(matrix+row)+col));
//         }
//         printf("\n");
//     }
//     printf("\nTesting\n");
//     printf("%d\n",*(*(matrix+0))+0);
//     printf("%d\n",*(*(matrix+1))+1);
//     printf("%d\n",*(*(matrix+2))+2);
//     return 0;
// }

//10. program to add two matrix using pointers CategoriesC programming
// #include <stdio.h>
// #define size 3
// int main()
// {
//     int Matrix1[size][size];
//     int Matrix2[size][size];
//     int Matrix3[size][size];
//     int i,j;
//     printf("Enter elements of first array: \n");
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             scanf("%d",(*(Matrix1+i)+j));
//         }
//     }
//     printf("Enter the elements of second array: \n");
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             scanf("%d",(*(Matrix2+i)+j));
//         }
//     }
//     printf("Elements of first array: \n");
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             printf("%d ",*(*(Matrix1+i)+j));
//         }
//         printf("\n");
//     }
//     printf("Elements of first array: \n");
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             printf("%d ",*(*(Matrix2+i)+j));
//         }
//         printf("\n");
//     }
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             *(*(Matrix3+i)+j)=*(*(Matrix2+i)+j)+*(*(Matrix1+i)+j);
//         }
//     }
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             printf("%d ",*(*(Matrix3+i)+j));
//         }
//         printf("\n");
//     }

//     return 0;
// }


//11. program to multiply two matrix using pointers
// #include <stdio.h>
// #define size 3
// int main()
// {
//     int Matrix1[size][size];
//     int Matrix2[size][size];
//     int Matrix3[size][size];
//     int i,j;
//     printf("Enter the value of Matrix1: \n");
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             scanf("%d",(*(Matrix1+i)+j));
//         }
//     }
//     printf("Enter the value of Matrix2: \n");
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             scanf("%d",(*(Matrix2+i)+j));
//         }
//     }

//     /* Air */
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             int sum=0;
//             for(int k=0;k<size;k++){
//                 sum+=(*(*(Matrix1+i)+k))*(*(*(Matrix2+k)+j));
//             }
//             *(*(Matrix3+i)+j) = sum;
//         }
//     }




//     printf("Matrix 1: \n");
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             printf("%d ",*(*(Matrix1+i)+j));
//         }
//         printf("\n");
//     }
//     printf("Matrix 2: \n");
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             printf("%d ",*(*(Matrix2+i)+j));
//         }
//         printf("\n");
//     }
//     printf("Air Product of Matrix 1 and Matrix 2 is : \n");
//     for(i=0;i<size;i++){
//         for(j=0;j<size;j++){
//             printf("%d ",*(*(Matrix3+i)+j));
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


//12. Program to find length of string using pointer

// #include <stdio.h>
// #define size 100
// int main()
// {
//     char text[size];
//     char *str = text;
//     int count=0;
//     printf("Enter the text: ");
//     gets(text);
//     while (*str++) count++;
//     printf("%d",count);
//     return 0;
// }

// 13. program to copy one string to another string

// #include <stdio.h>
// #define size 100
// int main()
// {
//     char text1[size];
//         char *str1 = text1;
//         char text2[size];
//         char *str2 = text2;
//         printf("Enter first string: ");
//         gets(text1);
//         while (*(str2++)=*(str1++));
        
//         printf("%s",text2);
//         return 0;
//     }


// 14.Program to concatenate two strings using pointer


#include <stdio.h>
#define size 100
int main()
{
    char text1[size],text2[size];
    char *str1= text1;
    char *str2= text2;
    printf("Enter first string: ");
    gets(text1);
    printf("Enter second string: ");
    gets(text2);
    while(*str1++);
    while (*(str1++)=*(str2++));
    printf("%s",text1);
    return 0;
}