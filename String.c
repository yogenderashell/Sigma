// <-----------String----------->
// 1.Write a C program to find length of a string.
// #include <stdio.h>

// int main()
// {
//     char string[100];
//     printf("Enter the string: ");
//     gets(string);
//     int count=0;
//     for(int i=0;string[i]!='\0';i++){
//         count++;
//     }
//     printf("total no. of characters in the string : %d",count);
//     return 0;
// }

// 2.Write a C program to copy one string to another string.

// #include <stdio.h>

// int main()
// {
//     int i;
//     char string[100];
//     printf("Enter the string: ");
//     gets(string);
//     char newstr[100];
//     for(i=0;string[i]!='\0';i++){
//         newstr[i]=string[i];
//     }
//     newstr[i] = '\0';
//     printf("string : %s",newstr);
//     return 0;
// }

// 3.program to concatenate two strings

// #include <stdio.h>
// #define size 100
// int main()
// {
//     char string[size];
//     char sstring[size];
//     char newstr[size+size];
//     printf("Enter first string: ");
//     gets(string);
//     printf("Enter first string: ");
//     gets(sstring);
//     int i=0,j;
//     while(string[i]!='\0'){
//         i++;
//     }
//     j=0;
//     while(sstring[j]!='\0'){
//         string[i]=sstring[j];
//         i++;
//         j++;
//     }
//     string[i]='\0';
//     printf("concatenated string: %s",string);
//     return 0;
// }


// 4. program to compare two strings

// #include <stdio.h>
// #define size 100

// int main()
// {
//     char firststring[size], secondstring[size];
//     printf("Enter first string: ");
//     gets(firststring);
//     printf("Enter second string: ");
//     gets(secondstring);

//     /* Air */
//     int i=0;
//     int isEqual=1;
//     while(firststring[i]!='\0' && secondstring[i]!='\0'){
//         if (firststring [i] != secondstring[i]) {
//             isEqual=0;
//             break;
//         }
//         i++;
//     }
//     if(isEqual){
//         printf("The two strings are equal");
//     }
//     else{
//         printf("Not equal");
//     }


//     return 0;
// }


// 5. program to convert lowercase string to uppercase

// #include <stdio.h>
// #define size 100
// int main()
// {
//     char str[size];
//     printf("Enter the string in upper case: ");
//     gets(str);
//     int i=0;
//     while (str[i]!='\0')
//     {
//         if (str[i] >= 'a' && str[i] <= 'z'){
//             str[i]=str[i]-32;
//         }
        
//         i++;
//     }
    
//     printf("%s",str);
//     return 0;
// }



//6. Write a C program to convert uppercase string to lowercase.

// #include <stdio.h>
// #define size 100
// int main()
// {
//     char string[size];
//     printf("Enter first string: ");
//     gets(string);
//     int i=0;
//     while (string[i]!='\0')
//     {
//         if(string[i]>='A' &&string[i]<='Z'){
//             string[i]+=32;
//         }
//         i++;
//     }
    
//     printf("%s",string);
//     return 0;
// }


// 7.program to toggle case of each character in a string


// #include <stdio.h>
// #define size 100
// int main()
// {
//     char str[size];
//     printf("Enter the string: ");
//     gets(str);
//     int i=0;
//     while (str[i]!='\0')
//     {
//         if(str[i]>='a' && str[i]<='z'){
//             str[i]-=32;
//         }
//         else if(str[i]>='A' && str[i]<='Z'){
//             str[i]+=32;
//         }
//         i++;
//     }
//     printf("%s",str); 
//     return 0;
// }

// 8. Write a C program to find total number of alphabets, digits or special character in a string.

// #include <stdio.h>
// #define size 100
// int main()
// {
//     char str[size];
//     printf("Enter the string: ");
//     gets(str);
//     int i=0;
//     int count_alpha = 0, count_digit = 0, count_special = 0;
//     while (str[i]!='\0')
//     {
//         if((str[i]<='z' && str[i]>='a') || (str[i]<='Z' && str[i]>='A')){
//             count_alpha++;
//         }
//         else if(str[i]<='9' && str[i]>='0'){
//             count_digit++;
//         }
//         else{
//             count_special++;
//         }
//         i++;
//     }
//     printf("char count: %d\n",count_alpha);
//     printf("digit count: %d\n",count_digit);
//     printf("special count: %d\n",count_special);
//     return 0;
// }


// 9. program to count total number of vowels and consonants in a string

// #include <stdio.h>
// #define size 100

// int main()
// {
//     char str[size];
//     printf("Enter first string: ");
//     gets(str);
//     int i,vowelcount,concount;
//     i=vowelcount=concount=0;
//     while (str[i]!='\0')
//     {
//         if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){            
//         if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'||
//             str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
//                 vowelcount++;
//             }
//         else{
//             concount++;
//         }
//         }
//         i++;
//     }
//     printf("Total no. of vowel: %d\nTotal no. of consonant: %d",vowelcount,concount);
//     return 0;
// }

// 10. Write a C program to count total number of words in a string.

// #include <stdio.h>
// #define size 100

// int main()
// {
//     char str[size];
//     printf("Enter first string: ");
//     gets(str);
//     int word_count = 1;
//     int i=0;
//     while (str[i]!=0)
//     {
//         if (str[i] == ' '){
//             word_count++;
//         }
//         i++;
//     }
//     printf("%d",word_count);
//     return 0;
// }

// 11. Write a C program to find reverse of a string.

// #include <stdio.h>
// #define size 100
// int main()
// {
//     char string[size],newstr[size];
//     printf("Enter the string: ");
//     gets(string);
//     int count=0;
//     for(int i=0;string[i]!='\0';i++){
//         count++;
//     }
//     int j=0;
//     for(int i=count-1;i>=0;i--){
//         newstr[j]=string[i];
//         j++;
//     }
//     newstr[j]='\0';
//     printf("%s",newstr);
//     return 0;
// }

// 12. program to check whether a string is palindrome or not


// #include <stdio.h>
// #define size 100
// int main()
// {
//     char string[size],newstr[size];
//     printf("Enter the string: ");
//     gets(string);
//     int count=0;
//     for(int i=0;string[i]!='\0';i++){
//         count++;
//     }
//     int j=0;
//     for(int i=count-1;i>=0;i--){
//         newstr[j]=string[i];
//         j++;
//     }
//     newstr[j]='\0';
//     int i = 0;
//     int isPali = 1;
//     while (newstr[i]!='\0')
//     {
//         if(newstr[i]!=string[i]){
//             isPali = 0;
//             break;
//         }
//         i++;
//     }
//     if (isPali){
//         printf("is pali");
//     }
//     else{
//         printf("not pali");
//     }
    
    
//     return 0;
// }


// 13,14,15. program to find the first occurrence of a character in a string

// #include <stdio.h>
// #define size 100
// #include <string.h>
// int main()
// {
//     char str[size],ch;
//     printf("Enter the first string: ");
//     fgets(str, size, stdin);
//     printf("Enter the character: ");
//     scanf("%c",&ch);
//     printf("%s and %c",str,ch);
//     int index;
//     int i=0;
//     int arr[10];
//     for(int i=0;i<size;i++){
//         arr[i]=0;
//     }
//     while (str[i]!='\0')
//     {
//         if (str[i]==ch){
//             arr[i]=i;
//         }
//         i++;
//     }
//     for(int i=0;i<10;i++){
//         if(arr[i]!=0){
//             printf("%d",arr[i]);
//         }
//     }
//     return 0;
// }


// 16. program to count occurrences of a character in a string
// #include <stdio.h>
// #define size 100

// int main()
// {
//     char str[size],ch;
//     printf("Enter first string: ");
//     gets(str);
//     printf("Enter a character to search for: ");
//     scanf("%c",&ch);
//     int char_count=0;
//     int i=0;
//     while (str[i]!='\0')
//     {
//         if(str[i]==ch){
//             char_count++;
//         }
//         i++;
//     }
//     printf("%d",char_count);
//     return 0;
// }



