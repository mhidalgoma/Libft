/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monhidal <monhidal@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:26:30 by monhidal          #+#    #+#             */
/*   Updated: 2023/03/15 19:46:30 by monhidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*pointer;

	i = 0;
	pointer = (unsigned char *)str;
	while (i < n)
	{
		pointer[i] = '\0';
		++i;
	}
	return (pointer);
}
/*
int	main(void)
{
	char	str[] = "monica";
	ft_bzero(str, 2);
	return(0);
}*/
