#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int i, T, len, count, j;

	scanf("%d", &T);
	getchar();
	for(i=1; i<=T; i++)
	{
		count = 0;
		gets(str);
		len = strlen(str);
		for(j=0; j<len; j++)
		{
			if(str[j] == 'a' || str[j] == 'd' || str[j] == 'g' || str[j] == 'j' || str[j] == 'm' || str[j] == 'p' || str[j] == 't' || str[j] == 'w' || str[j] == ' ')
				count = count + 1;
			else if(str[j] == 'b' || str[j] == 'e' || str[j] == 'h' || str[j] == 'k' || str[j] == 'n' || str[j] == 'q' || str[j] == 'u' || str[j] == 'x')
				count = count + 2;
			else if(str[j] == 'c' || str[j] == 'f' || str[j] == 'i' || str[j] == 'l' || str[j] == 'o' || str[j] == 'r' || str[j] == 'v' || str[j] == 'y')
				count = count + 3;
			else if(str[j] == 's' || str[j] == 'z')
				count = count + 4;
		}
		printf("Case #%d: %d\n", i, count);
	}
	return 0;
}

