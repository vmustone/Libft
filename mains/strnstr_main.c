/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:11:17 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/14 14:48:45 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char n[10] = "abcd";
	char h[30] = "aaabcabcd";
	char n1[10] = "abcd";
	char h1[30] = "aaabcabcd";

	printf("%s\n", strnstr(h, n, 9));
	printf("%s\n", ft_strnstr(h1, n1, 9));
	return(0);
}
