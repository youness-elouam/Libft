/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouam <yel-ouam@student.1337.m>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:24:18 by yel-ouam          #+#    #+#             */
/*   Updated: 2024/11/15 18:04:14 by yel-ouam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int main()
{
	int i;

 	i = -1;
 	while (i < 530)
 	{
 		if (!!ft_isalpha(i) != !!isalpha(i))
		{
			printf("%d\n", i);
		}
 		i++;
 	}
 	printf("good !!!");
}*/
