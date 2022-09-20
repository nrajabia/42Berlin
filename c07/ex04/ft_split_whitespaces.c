#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str)
{
	int counter;
	int array[10][10];
	int first_dim;
	int second_dim;

	first_dim = 0;
	counter = -1;
	while (str[counter] != '\0')
	{
		counter++;
		second_dim = 0;
		while(str[counter] != 32
			&& str[counter] != 9
			&& str[counter] != 10)
		{
			array[first_dim][second_dim] = str[counter];
			counter++;
			second_dim++;
		}
		array[first_dim][second_dim] = '\0';
		first_dim++;
	}
	
	for(int j = 0; j < sizeof(**array); j++)
		for(int i = 0; i < sizeof(*array[j]); i++)
			printf("%c\n", array[j][i]);
	return(0);
}

int main()
{
	ft_split_whitespaces("hello world	I am Neda.");
//	for(int i = 0; i < 5; i++)
//		printf("%s\n", ft_split_whitespaces("hello world	I am Neda.")[i]);
	return(0);
}
