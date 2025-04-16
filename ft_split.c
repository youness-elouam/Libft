/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:52:44 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/16 17:28:24 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenwrd(char const *s, char c, int *i)
{
	int	len;

	len = 0;
	while (s[*i] == c)
	{
		if (s[*i] == '\0')
			break ;
		(*i)++;
	}
	while (s[*i] && s[*i] != c)
	{
		len++;
		(*i)++;
	}
	return (len);
}

static int	nwrd(const char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		if (s[i] != c)
			n++;
		while (s[i] != c && s[i])
			i++;
		if (!s[i])
			break ;
		i++;
	}
	return (n);
}

static char	**freeall(char **s, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free (s[j]);
		j++;
	}
	free (s);
	return (NULL);
}

static char	**cpy_s(char **sp, char const *s, char c, int n)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (i < n)
	{
		len = lenwrd(s, c, &j);
		sp[i] = malloc (sizeof(char) * (len + 1));
		if (!sp[i])
			return (freeall(sp, i));
		ft_strlcpy(sp[i], s + (j - len), len + 1);
		i++;
	}
	sp[n] = NULL;
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	char	**sp;

	if (!s)
		return (NULL);
	n = nwrd(s, c);
	sp = malloc(sizeof(char *) * (n + 1));
	if (!sp)
		return (NULL);
	sp = cpy_s(sp, s, c, n);
	return (sp);
}

/*#include <stdio.h>

int main()
{
	int i;
	char s[100] = "youness";
	char **str = ft_split(s, 0);

	if (!str)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	i = 0;
	while (str[i] != NULL)
	{
		printf("%s\n", str[i]);
		i++;
	}
	if (str[1] == 0)
		printf("gooood\n");

	// Free allocated memory
	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);

	return (0);
}*/
