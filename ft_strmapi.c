/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:56:36 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/17 17:40:00 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *new_str;

    if (!s || !f)
        return (NULL);
    i = ft_strlen(s);
    new_str = malloc(sizeof(char) * (i + 1));
    if (!new_str)
        return (NULL);

    i = 0;
    while (s[i])
    {
        new_str[i] = f(i, s[i]);
        i++; 
    }
    new_str[i] = '\0';
    return(new_str);
}
