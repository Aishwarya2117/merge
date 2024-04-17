#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);
    if(ch>='A'&& ch<='Z' )
{
    printf("%c is Uppercase letter ",ch);
   ch=ch+32;
   printf("\n%c ",ch);

}
else 
{
    printf("%c is lowercase letter ",ch);
   ch=ch-32;
   printf("\n%c ",ch);
    

}
}