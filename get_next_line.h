/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 18:22:44 by tpan              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/05/24 14:10:01 by tpan             ###   ########.fr       */
=======
/*   Updated: 2017/01/13 16:31:13 by tpan             ###   ########.fr       */
>>>>>>> 5e5d3397bd0f06b6d50c4568b79e0882a2629806
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1024

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

<<<<<<< HEAD
=======
# define BUFF_SIZE 1000

# define MEMCHECK(x) if (x) return (-1);

>>>>>>> 5e5d3397bd0f06b6d50c4568b79e0882a2629806
int	get_next_line(const int fd, char **line);
#endif
