#include "get_next_line.h"

int	get_next_line(char **line)
{
	int i = 0;
	int read_byte;
	char c;
	char *buf;
	
	if (!(buf = malloc(10000 + 1)))
		return (-1);
	while ((read_byte = read(0, &c, 1) > 0) && c != '\n' && c != '\0')
		buf[i++] = c;
	buf[i] = '\0';
	*line = buf;
	return (read_byte);
}

#include <stdio.h>
int main(void)
{
	char *line = NULL;

	while ((get_next_line(&line)) > 0)
	{
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	printf("%s\n", line);
	free(line);
	line = NULL;
}
