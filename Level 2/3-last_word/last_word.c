#include <unistd.h>

void	last_word(char *str)
{
	int	j;
	int i;

	i = 0;
	j = 0;
	 // Find the end of the string
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1; //here j value where i finish and 
			//use it for Other while for last word
		i++;
	}     // here j equal where i stop
	while (str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}


/*Other Solution
#include <unistd.h>

void	last_word(char *str)
{
	int	i = 0;
	 // Find the end of the string
	while (str[i] != '\0')
		i++;
	// Move backwards to skip trailing spaces and tabs
	i--;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while (i > 0)
	{	
		if(str[i] == 32 || str[i] == '\t')
			break;
		i--;
	}
	i++;
	while (str[i] != '\0' && str[i] != 32 && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}

*/