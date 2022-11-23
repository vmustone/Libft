/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:43:27 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/01 17:29:53 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
//void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(void)
{
	char	src[] = "0123456789";
	char	srcr[] = "0123456789";

	printf("src:%s\n", src);
	printf("srcr:%s\n", srcr);
	memmove(src + 3, src, 5);
	ft_memmove(srcr + 3, srcr, 5);
	printf("src:%s\n", src);
	printf("srcr%s\n", srcr);
	return (0);
}
