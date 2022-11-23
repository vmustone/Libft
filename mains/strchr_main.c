/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:26:48 by vmustone          #+#    #+#             */
/*   Updated: 2022/10/31 12:28:58 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int main()
{
	char a[]="moi124moimoi12456";
	char b = ' ';
	char c[]="moi124moimoi12456";
	char d = ' ';

	printf("%s\n", strchr(a, b));
	printf("%s\n", ft_strchr(c, d));
	return (0);
}
