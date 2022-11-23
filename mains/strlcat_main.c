/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:27:32 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/10 17:36:47 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main()
{
	char *s = (char *)"AAAAAAAAA";
	char d[30]; memset(d, 0, 30);
//	char d[0] = 'B';

//	printf("%zu\n", strlcat(d, s, 0));
	printf("%zu\n", ft_strlcat(d, s, 0));
	return (0);
}
