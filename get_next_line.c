/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 21:03:27 by tpan              #+#    #+#             */
/*   Updated: 2016/12/19 15:29:42 by tpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

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

static void			join(t_list *node, char const *buff, size_t size)
{
	char			*tmp;

	if (node->content == NULL)
	{
		node->content = ft_strndup(buff, size);
		return ;
	}
	tmp = node->content;
	node->content = ft_strjoin(tmp, buff);
	free((void *)buff);
}

int					get_next_line(const int fd, char **line)
{
	char			*ptr;
	char			buff[BUFF_SIZE];
	size_t			ret;
	size_t			i;
	t_list			*nd;

	i = 0;
	ret = 0;
	MEMCHECK((fd < 0) || (!line) || read(fd, buff, BUFF_SIZE) < 0);
	nd = read_fd(fd);
	while (!ft_strchr(nd->content, '\n') && (ret = read(fd, buff, BUFF_SIZE)))
		join(nd, ft_strndup(buff, ret), ret);
	if (ret < BUFF_SIZE && ft_strlen(nd->content) == 0)
	{
		ft_bzero(&line, ft_strlen(*line));
		return (0);
	}
	ptr = nd->content;
	i = ft_wordlength(ptr, i, '\n');
	*line = (ptr[i] == '\n') ? (ft_strndup(ptr, i)) : (ft_strdup(nd->content));
	if ((ret == 0 && ptr[i] == 0))
		ft_bzero(nd->content, (ft_strlen(nd->content)));
	nd->content = (ptr[i] == '\n') ? (ft_strdup(nd->content + (i + 1))) :
		(nd->content + 0);
	return (1);
}
