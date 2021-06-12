#include <unistd.h>

void	ft_union(char *str, char *ascii)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ascii[(int)str[i]])
		{
			write(1, &str[i], 1);
			ascii[(int)str[i]] = str[i];
		}
		i++;	
	}
}

int main(int argc, char **argv)
{
	char	ascii[255];
	if (argc == 3)
	{
		ft_union(argv[1], ascii);
		ft_union(argv[2], ascii);
	}
	write(1, "\n", 1);
	return (0);
}
