#include<stdio.h>
#include<string.h>

int checkPrimeNumber(int n)
{
    int i, flag = 1;

    for(i=2; i<=n/2; ++i)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
     int i, len, sum, flag;
     char ch[20];

     while(scanf("%s", ch)!=EOF)
     {
          sum=0;
          len=strlen(ch);

          for(i=0; i<len; i++)
          {
               if(ch[i]>=65 && ch[i]<=90)
               {
                    sum=sum+(ch[i]-38);
               }
               else if(ch[i]>=97 && ch[i]<=122)
               {
                    sum=sum+(ch[i]-96);
               }
          }
          flag=checkPrimeNumber(sum);
          if(flag==1)
               printf("It is a prime word.\n");
          else
               printf("It is not a prime word.\n");
     }
     return 0;
}

