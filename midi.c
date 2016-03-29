/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   midi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djean <djean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 12:10:14 by djean             #+#    #+#             */
/*   Updated: 2016/03/29 12:21:42 by djean            ###   ########.fr       */
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
	};
	int	ca;

	sranddev();
	ca = rand() % (sizeof(on_mange) / sizeof(char*));
	printf("%s", on_mange[ca]);
}
