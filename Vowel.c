#include <stdio.h>
int main(){
char ch;
printf("Enter a word");
scanf("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
    printf("%c is a vowel.\n",ch);/* code */
}else{
    printf("%c is not vowel.\n",ch);
}

}