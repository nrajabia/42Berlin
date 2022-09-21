#include <unistd.h>

void ft_putchar(char *str)
{
	int count;

	count = 0;
	while(str[count++] != '\0')
		write(1, &str[count], 1);
}

void ft_print_words_tables(char **tab)
{
	
}
