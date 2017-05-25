/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 14:51:12 by tpan              #+#    #+#             */
/*   Updated: 2017/05/24 22:08:53 by tpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*result;
	size_t	len;

	len = ft_strlen(s1);
	if (n < len)
		len = n;
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	result[len] = '\0';
	return (char *)ft_memcpy(result, s1, len);
}
