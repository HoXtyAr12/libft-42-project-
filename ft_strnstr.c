/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:25:39 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/16 12:25:39 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t    i;
    size_t    j;

    if (*needle == '\0')
        return ((char *)haystack);
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] && needle[j]
            && i + j < len && haystack[i + j] == needle[j])
            j++;
        if (needle[j] == '\0')
            return ((char *)&haystack[i]);
        i++;
    }
    return (NULL);
}
