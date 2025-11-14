/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:24:01 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/16 12:24:01 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = pointer1;
	str2 = pointer2;
	i = 0;
	while (i < size)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
