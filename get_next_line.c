/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 21:03:27 by tpan              #+#    #+#             */
/*   Updated: 2016/12/18 16:48:59 by tpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list		*read_fd(int fd)
{
	static t_list	*read_head;
	t_list			*tmp;

	tmp = read_head;
	while (tmp != '\0')
	{
		if ((int)tmp->content_size == fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("\0", 1);
	tmp->content_size = fd;
	ft_lstadd(&read_head, tmp);
	return (tmp);
}

static void			join(t_list *node, size_t size)
{
	
}

int get_next_line(const int fd, char **line)
{
	static char *parse = NULL;
	char		*endl_index;
	size_t		ret;

	MEMCHECK(!parse && (parse = (char *)(ft_memalloc(sizeof char))) == NULL)

}
