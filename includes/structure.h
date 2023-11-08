/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:16:18 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/08 16:00:38 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef struct s_general
{
	char			*args;
	struct t_lex	*lexer;
}	t_general;

typedef struct s_lex
{
	char			*command;
	struct s_lex	*next;
}	t_lex;

#endif
