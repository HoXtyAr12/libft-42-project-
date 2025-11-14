/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:23:50 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/16 12:23:50 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *pointer, int value, size_t size)
{
	const unsigned char	*string;
	unsigned char		val;
	size_t				i;

	string = pointer;
	val = (unsigned char)value;
	i = 0;
	while (i < size)
	{
		if (string[i] == val)
			return ((void *)&string[i]);
		i++;
	}
	return (NULL);
}
