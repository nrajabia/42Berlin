#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str)
{
	char **address;
	int counter;
	char *ptr[10];
	int f_dim;
	int s_dim;
	
	for(int i = 0; i < 10; i++)
		ptr[i] = (char *)malloc(sizeof(char) * 10);
	counter = -1;
	f_dim = 0;
	s_dim = 0;
	while (str[++counter] != '\0')
	{
		if(str[counter] == 32
			&& str[counter] == 9
			&& str[counter] == 10)
		{
			ptr[f_dim][s_dim] = '\0';
			f_dim++;
			s_dim = 0;
		}
		else
		{
			ptr[f_dim][s_dim] = str[counter];
			s_dim++;
		}
	}
	ptr[f_dim + 1][0] = '0';
	address = ptr;
	return (address);
}
