/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmustone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:13:28 by vmustone          #+#    #+#             */
/*   Updated: 2022/11/15 18:16:21 by vmustone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
 		char const *s = "\tsplit\tthis\tfor\tme\t!\t";
 		//char const *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
        char    c = '\t';
        //char    c = ' ';
        char **newstrs;
        int i;

        i = 0;
        newstrs = ft_split(s,c);
        while(newstrs[i])
        {
			printf("%d: %s\n", i, newstrs[i]);
           // ft_putstr_fd(newstrs[i], 1);
            i++;
        }
        printf("%i\n", i); 
	return (0);
}
