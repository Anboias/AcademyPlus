/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_match.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 23:07:05 by biasinov          #+#    #+#             */
/*   Updated: 2016/12/08 23:11:27 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//sketch//

void	find_match(map, t_p *tetriments, int size)
{
	int i;
	t_c coord;

	i = 0;
	coord = find_spot(map);
	while (i < size)
	{
		if (try_fit(map, coord.x, coord.y, *tetriments) == 0)
		{
			put_element();
		}
	}
}
