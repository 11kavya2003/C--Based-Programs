#include <string.h>
int main()
{
  	char str[100], ch;
  	int i, index;
  	index = -1;

  	printf("\n  Enter String :  ");
  	gets(str);

  	printf("\n Enter the string: ");
  	scanf("%c", &ch);

  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)
		{
  			index = i;
 		}
	}
    if(index == -1)
  	{
  		printf("\n Not found '%c' ", ch);
	}
	else
	{
		printf("\n The Last Occurrence Element '%c'' at Position %d ", ch, index +1);
	}
  	return 0;
}
