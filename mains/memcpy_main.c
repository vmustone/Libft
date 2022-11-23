/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:18:21 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/01 16:16:15 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
	//char str[50] = NULL;
	//char str1[50] = "moimoimoi";
	//char dest[50] = NULL;
	//char dest1[50] = "";
	printf("%s\n", memcpy(NULL, NULL, 8));	
	printf("%s\n", ft_memcpy(NULL, NULL, 8));
	//printf("%s\n", dest);
	return (0);
}
