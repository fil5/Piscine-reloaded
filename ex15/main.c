/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:47:21 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/08 18:06:48 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr(av[1]);
	}
	return (0);
}
