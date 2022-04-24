/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps_animation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 21:25:08 by skasmi            #+#    #+#             */
/*   Updated: 2022/04/23 21:25:30 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	steps(t_map *t)
{
	char	*str;

	str = ft_itoa(t->moves);
	mlx_string_put(t->mlx_ptr, t->mlx_win, 20, 20, 0xFFFFFF, "MOVES : ");
	mlx_string_put(t->mlx_ptr, t->mlx_win, 95, 20, 0xFFFFFF, str);
	free(str);
}
