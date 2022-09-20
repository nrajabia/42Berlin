#include <stdio.h>
#include <stdlib.h>

char **ft_split_whitespaces(char *str)
{
	char *address;
	int counter;
	int flag;

	counter = 0;
	while(str[counter] != '\0')
	{
		if (str[counter] != " "
			&& str[counter] != "	"
			&& str[counter] != "\n")
		{
			address = &str[counter + 1];
			address++;
		}
		else
			counter++;
	}
	address
}

int main()
{
	for(int i = 0; i < 3; i++)
		printf("%s", ft_split_whitespaces("hello world	\n I am Neda."))
	return(0);
}
