/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:09:40 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/01 15:49:04 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stddef.h>

void ft_bzero(void *s, size_t n);

int	main(void)
{
	char srt[50] = "Hivessa koulussa";

	printf("%s\n", srt);
	bzero(srt + 6, 3);
	printf("%s\n", srt + 3);
	printf("oma funktio\n");
	ft_bzero(srt + 6, 3);
	printf("%s\n", srt + 3);
	return (0);
}
