
#include "get_next_line.h"
#include <libc.h>

int	main(int argc, char **argv)
{
	char *line = 0;
	if (argc == 2)
	{
		int fd = open (argv[1], O_RDONLY);
		while (get_next_line(fd,&line) > 0)
		{
			printf("%s\n",line);
			free(line);
		}
		printf("%s\n",line);
		free(line);
		close(fd);
	}
	return (0);
}
