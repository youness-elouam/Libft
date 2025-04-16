/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:34:27 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/16 17:23:21 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trimbgn(char const *s1, char const *set)
{
	int	i;
	int	bgn;

	bgn = 0;
	while (s1[bgn])
	{
		i = 0;
		while (set[i])
		{
			if (s1[bgn] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		bgn++;
	}
	return (bgn);
}

static int	trimend(char const *s1, char const *set)
{
	int	i;
	int	end;

	end = ft_strlen(s1) - 1;
	if (end <= 0)
		return (0);
	while (end != 0)
	{
		i = 0;
		while (set[i])
		{
			if (s1[end] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		a;
	char	*s;

	if (!s1)
		return (NULL);
	if (set == 0)
		return (ft_strdup((const char *)s1));
	i = trimbgn (s1, set);
	j = trimend (s1, set);
	if (j == 0)
	{
		s = ft_strdup("");
		return (s);
	}
	a = 0;
	s = ft_substr(s1, i, j - i + 1);
	return (s);
}

/*#include <stdio.h>

int main()
{
	char s[] = "_____younes_elouam hhk_____";
	char *t;

	t = ft_strtrim(s, 0);
	printf("%s\n", t);
}*/
