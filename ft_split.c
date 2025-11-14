/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbenetri <marvin@42.fr>                   +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:24:34 by gbenetri          #+#    #+#             */
/*   Updated: 2025/10/20 18:00:00 by gbenetri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int    count_words(const char *s, char c)
{
    int    count;
    int    in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static char    *get_word(const char *s, char c)
{
    int        len;
    char    *word;
    int        i;

    len = 0;
    while (s[len] && s[len] != c)
        len++;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[len] = '\0';
    return (word);
}

static void    free_all(char **tab)
{
    int    i;

    i = 0;
    while (tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
}

char    **ft_split(const char *s, char c)
{
    char    **result;
    int        i;
    int        word_count;

    if (!s)
        return (NULL);
    word_count = count_words(s, c);
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return (NULL);
    i = 0;
    while (*s && i < word_count)
    {
        while (*s == c)
            s++;
        result[i] = get_word(s, c);
        if (!result[i])
            return (free_all(result), NULL);
        s += ft_strlen(result[i]);
        i++;
    }
    result[i] = NULL;
    return (result);
}

