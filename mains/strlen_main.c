/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:43:38 by vmustone          #+#    #+#             */
/*   Updated: 2022/10/26 13:07:08 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t ft_strlen(char *s);

int main(void)
{
	char a[]="Moi";
	char b[]={'b', 'c', 'v', '\0'};
	printf("%zu\n", ft_strlen(a));
	printf("%zu\n", ft_strlen(b));
	printf("%lu\n", strlen(a));
	printf("%lu\n", strlen(b));
	return (0);
}
