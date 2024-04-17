#include<stdio.h>
int main()
{
    char ch;
    printf("Accept a letter");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u' )
    {
        printf("%c is vowel", ch);
    }
    else
    {
        printf("%c is consent", ch);
    }

}