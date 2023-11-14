/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:16:18 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/14 16:06:03 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef struct s_lex
{
	char			*command;
	int				token;	//1 = |, 2 = >, 3 = <, 4 = >>, 5 = <<, 0 = é un comando
	int				pipe_status;	//0 = prima pipe, 1 pipe in mezzo, 2 pipe finale
	struct s_lex	*next;
}	t_lex;

typedef struct s_general
{
	char			*args;
	int				flag1;
	struct s_lex	*lexer;
}	t_general;

#endif
