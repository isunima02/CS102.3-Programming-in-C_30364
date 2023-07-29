#include <stdio.h>
#include <stdlib.h>

int main()
{
       char aa;
      printf("enter letter");
      scanf("%c",&aa);
      switch(aa)
    {
         case'a':printf("a is a vowel");break;
         case'e':printf("e is a vowel");break;
         case'i':printf("i is a vowel");break;
         case'o':printf("o is a vowel");break;
         case'u':printf("u is a vowel");break;
         case'A':printf("A is a vowel");break;
         case'E':printf("E is a vowel");break;
         case'I':printf("I is a vowel");break;
         case'O':printf("O is a vowel");break;
         case'U':printf("U is a vowel");break;
         default:printf("%c is not a vowel",aa);
 }

        return 0;
}
