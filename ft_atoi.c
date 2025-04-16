/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:43:29 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/15 20:11:09 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	s;

	i = 0;
	n = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		s = -s;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n * s);
}

/*int main()
{
	printf("%d\n", ft_atoi(" -+12"));
	printf("%d\n", atoi(" -+12"));
}*/
