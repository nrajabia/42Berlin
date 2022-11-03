#include <stdio.h>
#include <stdlib.h>
int ft_len(char*str)
{
	int counter;
	int i;

	counter = 0;
	i = -1;
	while(str[++i] != '\0')
		counter++;
	return(counter);
}

char **ft_split(char *str, char *charset)
{
	char **ptr;
	int strnum;
	int strnum_copy;
	int charnum;
	int i;

	strnum = 0;
	strnum_copy = 0;
	charnum = 0;
	i = 0;
	ptr = (char **)malloc((ft_len(str) + 1) * sizeof(char *));
	if(!str || !charset ||!ptr)
		return NULL;
	while(str[++strnum] != '\0')
	{
		ptr[i] = &str[strnum_copy]; 
		if(str[strnum] != charset[charnum])
			strnum++;
		else
		{
			while(charset[charnum++] != '\0')
			{
				if(charset[charnum] != str[strnum])
				{
					strnum -= charnum;
					continue;
				}
				strnum++;
			}
			charnum = 0;
			strnum_copy = strnum;
			i++;
		}
	}
	return (ptr);
}

int main()
{
	//for (int i = 0; i<6; i++)
		printf("%u \n", ft_split("hello world it is neda.", " ")[0][0]);
	return (0);
}
