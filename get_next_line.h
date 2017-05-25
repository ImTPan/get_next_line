/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:35:31 by tpan              #+#    #+#             */
/*   Updated: 2017/05/24 22:16:24 by tpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1024
# define ERRCHECK(x) if (x) return (-1)
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int	get_next_line(const int fd, char **line);
#endif
