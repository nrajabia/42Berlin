#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}
char **ft_split(char *str, char *charset)
{
	char **ptr;
	int str_count;
	int charset_count;

	str_count = 0;
	ptr = malloc(sizeof(char*) * 5);
	for (int j = 0; j < 5; j++)
		ptr[j] = malloc(sizeof(char) * 5);
	if(!ptr)
		return(0);
	while (str[str_count] != '\0')
	{
		charset_count = 0;
		while (charset[charset_count] != '\0')
		{
			if(str[str_count] == charset[charset_count])
			{
				ptr[str_count] = '\0';
				str_count++;
			}
			charset_count++;
		}
		ptr[str_count] = str[str_count];
		str_count++;
	}
	return (ptr);
}

int main()
{
	for (int i = 0; i<6; i++)
		printf("%s\n", ft_split("hello world it is neda.", " ")[i]);
	return (0);
}
