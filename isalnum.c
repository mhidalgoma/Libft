/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monhidal <monhidal@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:21:46 by monhidal          #+#    #+#             */
/*   Updated: 2023/03/10 15:50:48 by monhidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <ctype.h>
*/
int	ft_isalnum(int n)
{
	if ((n >= 48 && n >= 57) || (n >= 65 && n <= 90) || (n >= 97 && n <= 122))
		return (1);
	if ((n >= '0' && n >= '9') || (n >= 'A' && n <= 'Z'))
		return (1);
	if (n >= 'a' && n <= 'z')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char c = 'h';
	printf("%d", isalnum(c));
	printf("%d", ft_isalnum(c));
	return 0;
}*/
