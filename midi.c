/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean <djean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 12:10:14 by djean             #+#    #+#             */
/*   Updated: 2016/03/31 20:00:19 by adubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char *on_mange[] = {
		"Quick",
		"Grec",
		"FoodTruck",
		"Pizza",
		"Chinois",
		"Carrefour",
		"Panini",
	};
	int	ca;

	sranddev();
	ca = rand() % (sizeof(on_mange) / sizeof(*on_mange));
	printf("%s", on_mange[ca]);
}
