/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                          :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:23:21 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/14 17:23:21 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int caracter)
{
	if (caracter >= 'A' && caracter <= 'Z')
	{
		caracter += 32;
		return (caracter);
	}
	return (caracter);
}
