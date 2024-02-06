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

#include <stdio.h>
#define size 5
int main()
{
    int arr[size],copy[size];
    int* ptr1 = arr;
    int* ptr2 = copy;
    printf("Enter the values of first array: \n");
    for(int i=0;i<size;i++){
        scanf("%d",(ptr1+i));
    }
    printf("Enter the values of second array: \n");
    for(int i=0;i<size;i++){
        scanf("%d\n",(ptr2+i));
    }
    printf("\n");
    //
    for(int i=0;i<size;i++){
        printf("%d,",*(ptr1+i));
    }
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d,",*(ptr2+i));
    }

    for(int i=0;i<size;i++){
        int temp = *(ptr2+i);
        *(ptr2+i) = *(ptr1+i);
        *(ptr1+i) = temp;
    }
    //printing
    for(int i=0;i<size;i++){
        printf("%d,",*(ptr1+i));
    }
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d,",*(ptr2+i));
    }
    
    return 0;
}