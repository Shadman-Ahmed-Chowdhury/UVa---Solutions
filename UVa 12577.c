#include<stdio.h>

int main()
{
     int i=1;
     char str[100];

     while(1)
     {
          gets(str);
          if(strcmp(str, "*")==0)
               break;
          else if(strcmp(str, "Hajj") == 0)
               printf("Case %d: Hajj-e-Akbar\n", i);
          else if(strcmp(str, "Umrah") ==0)
               printf("Case %d: Hajj-e-Asghar\n", i);
          i++;
     }
     return 0;
}

