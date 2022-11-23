/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:41:28 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/03 13:10:30 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str);

int main(void)
{
	char *c;
	c = "92233720368547758071";

	printf("%d\n", ft_atoi(c));
	printf("%d\n", atoi(c));
	
	c = "-456asdf";

	printf("%d\n", ft_atoi(c));
	printf("%d\n", atoi(c));
	return (0);
}
