/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monhidal <monhidal@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:35:50 by monhidal          #+#    #+#             */
/*   Updated: 2023/03/10 17:38:13 by monhidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*pointer;

	i = 0;
	pointer = (unsigned char *)str;
	while (i < n)
	{
		pointer[i] = c;
		i++;
	}
	return (pointer);
}
/*
int main(void)
{
    char str[] = "Hola que tal";
    ft_memset(str, 120, 4);
    printf("%s\n", str);
    return (0);
}*/
