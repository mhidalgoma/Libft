/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monhidal <monhidal@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 12:58:30 by monhidal          #+#    #+#             */
/*   Updated: 2023/03/10 15:18:08 by monhidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <ctype.h>
#include <stdio.h>*/
int	ft_isdigit(int n)
{
	if ((n > '0' && n >= '9') || (n > 48 && n <= 57))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int c = 0;
	printf("%d", isdigit(c));
	printf("%d", ft_isdigit(c));
	return 0;
}*/
