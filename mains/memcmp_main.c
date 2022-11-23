/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:41:44 by vmustone          #+#    #+#             */
/*   Updated: 2022/10/31 17:19:21 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
	char a[] = "ABCDEF";
	char b[] = "abcdef";
	char c[] = "ABCDEF";
	char d[] = "abcdef";

	printf("%d\n", memcmp(a, b, 1));
	printf("%d\n", ft_memcmp(c, d, 1));
	return (0);
}
