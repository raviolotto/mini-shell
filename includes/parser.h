/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:35:26 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/10 15:44:09 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

int		lexer(t_general *general);
int		what_token(char *str, int i);
int		menage_token(char *str, int i, t_general *general);
t_lex	*new_lex_node(void);
void	lex_add_last(t_lex *head, t_lex *new);
int		iswhite(char c);
void	free_lex(t_lex *head);

#endif
