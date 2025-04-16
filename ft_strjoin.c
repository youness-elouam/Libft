/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:57:50 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/16 15:48:12 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	i = ft_strlen(s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	ft_strlcpy(str, s1, i + 1);
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	//printf("%s\n", strjoin("youness", "elouam"));
	printf("%s\n",ft_strjoin(0, "elouam"));
}*/
