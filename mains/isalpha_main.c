/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:27:48 by vmustone          #+#    #+#             */
/*   Updated: 2022/10/25 12:34:31 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_isalpha(int c);

int main(void)
{
	int c;
	c = 1;

	printf("%d\n", ft_isalpha(c));
	return (0);
}