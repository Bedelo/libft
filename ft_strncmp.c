/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:06:01 by bsunda            #+#    #+#             */
/*   Updated: 2023/11/15 08:37:28 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (c1[i] == c2[i] && c1[i] && c2[i] && i < n - 1)
		i++;
	return ((c1[i] - c2[i]));
}

/*int	main(void)
{
	int		size = 6;
	char	s1[20] = "u truuuc";
	char	s2[15] = "u truuuk";
	printf("%d\n%d\n", ft_strncmp(s1, s2, size), strncmp(s1, s2, size));
	return (0);
}
*/