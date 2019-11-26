/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothee <timothee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:49:13 by timothee          #+#    #+#             */
/*   Updated: 2019/11/26 11:47:49 by tiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		check(char *s, int max)
{
	int i;

	i = 0;
	while (i < max && s[i] != '\n')
		i++;
	return (i);
}

char	*initialize(char *s)
{
	if (!s)
	{
		if (!(s = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
			return (0);
	}
	return (s);
}

void	copy_and_shorten(char **l, char **s, int n, int f)
{
	(*l) = ft_strdup_m(*s);
	(*s) = ft_substr_m(*s, n + 1, BUFFER_SIZE - f - 1);
}

int		get_next_line(int fd, char **line)
{
	int			rd;
	int			n;
	static char	*s;
	char		buff[BUFFER_SIZE];

	if (fd <= 0)
		return (fd);
	s = initialize(s);
	n = 0;
	rd = read(fd, buff, BUFFER_SIZE);
	s = ft_strjoin_free(s, buff, BUFFER_SIZE);
	while (check(s, ft_strlen(s)) == ft_strlen(s) && rd > 0) // => on n'a rien trouvé
	{
		rd = read(fd, buff, BUFFER_SIZE);
		s = ft_strjoin_free(s, buff, BUFFER_SIZE);
	}
	if (check(s, ft_strlen(s)) < ft_strlen(s))
	{
		copy_and_shorten(line, &s, check(s, ft_strlen(s)),
				check(buff, BUFFER_SIZE));
		return (1);
	}
	return (0);
}

int main ()
{
	int fd;
	char *l;
	// char b[100];

	if (!(l = malloc(10000)))
		return (0);

	fd = open("./get_next_line.h", O_RDONLY);
	printf("fd : %d  .. l : %p \n", fd, l);
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

	// printf("int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	// printf("int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	// printf("int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	// printf("int answer : %d    String : _%s_\n", get_next_line(fd, &l), l);
	// read(fd, b, sizeof(b));
	// write(1,b,sizeof(b));
}
