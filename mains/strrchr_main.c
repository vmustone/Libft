/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:29:08 by vmustone          #+#    #+#             */
/*   Updated: 2022/10/31 12:57:45 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);

int main()
{
	char a[] = "moi12345moi54321";
	char b[] = "moi12345moi54321";
	
	printf("%s\n", strrchr(a, '1'));
	printf("%s\n", ft_strrchr(b, '1'));
	return (0);
}
