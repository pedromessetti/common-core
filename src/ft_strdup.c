/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:30:24 by pmessett          #+#    #+#             */
/*   Updated: 2023/05/29 13:10:14 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Returns a pointer to a new string which
is a duplicate of the string s.
Memory for new str is obtained with malloc()
and can be freed with free().*/
char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc(ft_strlen(s)+1);
	if (!dst)
		return (NULL);
	while (s[i])
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// int main(void)
// {
// 	char *minha = "Hello World!";

// 	printf(":%s:\n", ft_strdup(minha));
// 	return (0);
// }