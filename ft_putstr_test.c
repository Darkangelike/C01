/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itieu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 16:41:21 by itieu             #+#    #+#             */
/*   Updated: 2020/10/15 19:12:58 by itieu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
		int i;

		i = 0;
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}

int main()
{
	char str[] = "Hello";
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}


