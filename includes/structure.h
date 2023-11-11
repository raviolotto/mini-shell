/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:16:18 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/11 18:16:54 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef struct s_lex
{
	char			*command;
	int				token;  //1 = |, 2 = >, 3 = <, 4 = >>, 5 = <<, 0 = é un comando
	int				pipe_status; //0 = prima pipe, 1 pipe in mezzo, 2 pipe finale
	struct s_lex	*next;
}	t_lex;

typedef struct s_general
{
	char			*args;
	struct s_lex	*lexer;
}	t_general;


#endif
