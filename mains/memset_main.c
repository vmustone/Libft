/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:16:28 by vmustone          #+#    #+#             */
/*   Updated: 2022/10/26 17:19:53 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void *ft_memset(void *b, int c, size_t len);

int	main(void)
{
	char str[50] = "olemme koulussa";
	printf("%s\n", str);
	memset(str + 6, '$', 5);
	printf("%s\n", str);
	ft_memset(str + 6, '$', 5);
	printf("%s\n", str);
	return (0);
}
