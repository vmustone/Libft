/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:06:42 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/10 14:41:02 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main()
{
	char a[] = "t";
	char b[] = "t";
	char c[] = "t";
	char d[] = "t";

	printf("%d\n", strncmp(a, b, 0));
	printf("%d\n", ft_strncmp(c, d, 0));
	return (0);
}
