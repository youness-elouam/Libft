/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:24:04 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/08 11:16:55 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int			i;
	int			len;
	char		*sdup;

	i = 0;
	len = ft_strlen(src);
	sdup = malloc(sizeof(char) * (len + 1));
	if (sdup == 0)
		return (0);
	while (src[i])
	{
		sdup[i] = src[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
