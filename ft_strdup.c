/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@42.fr>                   +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:24:51 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/20 18:00:00 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    size_t    len;
    char    *dup;
    size_t    i;

    if (!s1)
        return (NULL);
    len = ft_strlen(s1);
    dup = (char *)malloc(len + 1);
    if (!dup)
        return (NULL);
    i = 0;
    while (i < len)
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
