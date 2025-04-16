/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:53:03 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/15 17:42:14 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	strn(char *s, int len, long nbr)
{
	int	i;
	int	sn;

	i = len - 1;
	sn = 0;
	if (nbr == 0)
		s[i] = '0';
	if (nbr < 0)
	{
		sn = 1;
		nbr = -nbr;
	}
	if (nbr == 0)
		s[i] = '0';
	while (nbr > 0)
	{
		s[i] = ((nbr % 10) + '0');
		nbr /= 10;
		i--;
	}
	if (sn == 1)
		s[0] = '-';
	s[len] = '\0';
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nbr;

	len = intlen(n);
	nbr = n;
	s = malloc (sizeof(char) * (len + 1));
	if (s == 0)
		return (0);
	strn(s, len, nbr);
	return (s);
}

/*#include <stdio.h>

int main()
{
	printf("%s\n", ft_itoa(-121021));
	printf("%d\n", intlen(-121021));
}*/
