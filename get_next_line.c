/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 21:03:27 by tpan              #+#    #+#             */
/*   Updated: 2016/12/18 01:21:56 by tpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list		*read_fd(int fd)
{
	static t_list	*read_head;
	t_list			*temp;

	temp = read_head;
	while (temp != '\0')
	{
		if (
	}
}

int get_next_line(const int fd, char **line)
{
	static char *parse = NULL;
	char		*endl_index;
	size_t		ret;

	MEMCHECK(!parse && (parse = (char *)(ft_memalloc(sizeof char))) == NULL)


}

