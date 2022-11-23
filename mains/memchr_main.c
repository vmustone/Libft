/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:05:17 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/10 17:13:16 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main()
{
	char a[] = "bonjourno";
	char b[] = "bonjourno";
	
	printf("%s\n", memchr(a, 'n', 2));
	printf("%s\n", ft_memchr(b, 'n', 2));
	return (0);
}
