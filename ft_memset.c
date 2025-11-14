/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:43:16 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/14 13:43:16 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *point, int value, size_t count)
{
	unsigned char			*s;
	unsigned char	c;

	s = point;
	c = value;
	while (count--)
		*s++ = c;
	return (point);
}
