#include<stdio.h>
#include<string.h>

void print_reverse(char str[])
{
     int i;
     for(i= strlen(str) - 1 ; i>=0; i--)
     {
          printf("%c", str[i]);
     }
}

int main()
{
     int i, j, k, t, s_len;
     char s[1002], word[1002];

     while(scanf(" %[^\n]", s) != EOF)
     {

          s_len=strlen(s);
          for(j=0, k=0; j<s_len; j++)
          {
               if(s[j] != ' ')
               {
                    word[k] = s[j];
                    k++;
               }
               else if(k > 0)
               {
                    word[k] = '\0';
                    print_reverse(word);
                    printf(" ");
                    k=0;
               }
          }
          if(k > 0)
          {
                    word[k] = '\0';
                    print_reverse(word);
          }
          printf("\n");
     }
     return 0;
}

