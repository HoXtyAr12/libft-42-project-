/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:56:36 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/20 18:10:00 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int    i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (NULL);
}

