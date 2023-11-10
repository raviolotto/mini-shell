/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer_list_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:12:07 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/10 15:56:42 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mini_shell.h"

t_lex	*lex_last(t_lex *head)
{
	t_lex *tmp;

	tmp = head;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

t_lex	*new_lex_node(void)
{
	t_lex	*tmp;

	tmp = malloc(sizeof(t_lex));
	if (!tmp)
		return (NULL);
	else if (tmp)
	{
		tmp->token = 0;
		tmp->next = NULL;
	}
	return (tmp);
}

void	lex_add_last(t_lex *head, t_lex *new)
{
	t_lex	*tmp;

	tmp = lex_last(head);
	tmp->next = new;
	return ;
}

void	free_lex(t_lex *head)
{
	t_lex	*tmp;

	while(head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

// int	free_all(t_listx **stack_a)
// {
// 	t_listx	*tmp;

// 	while (*stack_a)
// 	{
// 		tmp = *stack_a;
// 		*stack_a = (*stack_a)->next;
// 		free(tmp);
// 	}
// 	return (0);
// }


