/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@d42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:22:55 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/20 10:45:00 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;
    size_t    total_size;

    if (nmemb != 0 && size > SIZE_MAX / nmemb)
        return (NULL);
    total_size = nmemb * size;
    ptr = malloc(total_size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, total_size);
    return (ptr);
}

