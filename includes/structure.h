/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:16:18 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/09 14:41:51 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef struct s_lex
{
	char			*command;
	int				token;  //1 = |, 2 = >, 3 = >>, 4 = <, 5 = <<, 0 = é un comando
	struct s_lex	*next;
}	t_lex;

typedef struct s_general
{
	char			*args;
	struct s_lex	*lexer;
}	t_general;


#endif
