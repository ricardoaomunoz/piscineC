/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 17:33:28 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 14:16:26 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATE_LIST_H
#define CREATE_LIST_H

#include "libro.h"

typedef struct Nodo {
	Libro Libro;
	struct Nodo* siguiente;
} Nodo;

typedef struct Lista {
	Nodo* cabeza;
} Lista;
#endif
