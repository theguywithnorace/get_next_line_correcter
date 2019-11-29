/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothee <timothee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:49:13 by timothee          #+#    #+#             */
/*   Updated: 2019/11/29 18:27:51 by tiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

int main (int ac, char **av)
{
	char *l = 0;
	int fd;

	if (ac == 2)
		fd = open (av[1], O_RDONLY);
	else
	{
		printf("MISSING ARGS\n");
		return (0);
	}

	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	printf(">>>>  int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);// printf("int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	// printf("int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	// printf("int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	// printf("int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	// read(fd, b, sizeof(b));
	// write(1,b,sizeof(b));
}
