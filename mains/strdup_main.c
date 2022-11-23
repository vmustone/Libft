/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:12:39 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/01 20:21:27 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main()
{
	char *s1;
	char *s2;
	char *ret1;
	char *ret2;

	s1 = "moimoimoi";
	s2 = "moimoimoi";
	ret1 = strdup(s1);
	ret2 = ft_strdup(s2);

	printf("%s\n", ret1);
	printf("%s\n", ret2);
	return (0);
}
