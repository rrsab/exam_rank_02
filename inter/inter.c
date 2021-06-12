#include <unistd.h>

void	ft_inter(char *argv1, char *argv2)
{
	char ascii[255];
	int i1, i2;

	i1 = 0;
	while (argv1[i1])
	{
		i2 = 0;
		while (argv2[i2])
		{
			if (argv1[i1] == argv2[i2] && argv1[i1] != ascii[(int)argv1[i1]])
			{
				write(1, &argv1[i1], 1);
				ascii[(int)argv1[i1]] = argv1[i1];
			}
			i2++;
		}
		i1++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
