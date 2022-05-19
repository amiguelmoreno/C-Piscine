/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmoren <antmoren@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:40:32 by antmoren          #+#    #+#             */
/*   Updated: 2022/05/12 12:38:29 by antmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

static void	ft_reader(int fd, char *buf, char **str)
{
	int		i;
	char	*tmp;

}

char	get_next_line(int fd)
{
	char		*buf;
	static char	*str;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	if (BUFFER_SIZE < 1 || fd < 0 || read(fd, buf, 0) == -1)
	{
		free(buf);
		return (0);
	}
	ft_reader(fd, buf, &str);
	return (gnl_process(&str));
}
