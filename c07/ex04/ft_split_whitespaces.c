#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str)
{
	int counter;
	char *array;
	int first_dim;
	int second_dim;

	array = (char *)malloc(sizeof(char) * sizeof(str));
	if(!ptr)
		return(-1);
	counter = 0;
	first_dim = 0;
	second_dim = 1;
	ptr[0][0] = str[counter]; 
	while (str[counter++] != '\0')
	{
		while(str[counter] != 32
			&& str[counter] != 9
			&& str[counter] != 10)
		{
			ptr[first_dim][second_dim] = str[counter];
			counter++;
			second_dim++;
		}
		ptr[first_dim][second_dim] = '\0';
		first_dim++;
		second_dim = 0;
	}
	ptr[first_dim][second_dim] = '0';
	array = &ptr;
	return (array);
}

int main()
{
//	ft_split_whitespaces("hello world	I am Neda.");
	for(int i = 0; i < 5; i++)
		printf("%s\n", ft_split_whitespaces("hello world	I am Neda.")[i]);
	return(0);
}
