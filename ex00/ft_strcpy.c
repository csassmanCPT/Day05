/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csassman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:11:02 by csassman          #+#    #+#             */
/*   Updated: 2020/07/15 15:24:15 by csassman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1 ,&c, 1);
}
char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while (src[i]!='\0')
	{
		ft_putchar(src[i]);
		dest[i] = src[i];
		i +=1;
	}
	dest[i] = '\0';
	return(dest);
}
int main(void)
{
	char str1[26] = "char string manipulation";
	char str2[26];
	ft_strcpy(str2,str1);
	return(0);
}

