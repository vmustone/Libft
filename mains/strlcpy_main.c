/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:53:21 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/01 13:39:55 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);

int main()
{
	char str[] = "349348&^&^(**)(";
	char dst[] = "0123456789";
	char str1[] = "34934&&^&^(**)(";
	char dst1[] = "0123456789";
	printf("%s\n", str);
	printf("%s\n", dst);
	printf("%lu\n", strlcpy(dst, str, 0));
	printf("%lu\n", ft_strlcpy(dst1, str1, 0));
	printf("%s\n", dst);
	printf("%s\n", dst1);
	return (0);
}
