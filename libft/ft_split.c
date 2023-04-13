/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmessett <pmessett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:21:26 by pmessett          #+#    #+#             */
/*   Updated: 2023/04/12 20:26:34 by pmessett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**new_s;
	int		i;
	int		j;

	new_s = (char **)malloc(ft_strlen(s));
	i = 0;
	j = 0;
	while (s[j])
	{
		new_s[i][j] = s[j];
		if (s[j] == c)
			i++;
		j++;
	}
	return (new_s);
}

// int	main(void)
// {
// 	char const *s = "eternamente";
// 	char c = 'e';

// 	printf("string:%s:\n", s);
// 	printf("char:%c:\n", c);
// 	printf("array of strings:%s:\n", ft_split(s, c));
// }