/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:45:46 by jcardina          #+#    #+#             */
/*   Updated: 2023/11/27 16:56:32 by jcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/mini_shell.h"

int	pathfinder(char **matrixtmp, t_general *general)
{
	char	*path;

	
}

int	build_matrix(char *str, t_lex *node, t_general *general)
{
	char	**matrixtmp;

	matrixtmp = ft_split(str, ' ');
	node->command2 = pathfinder(matrixtmp, general);
	return (0);
}

int	list_commander(t_general *general)
{
	t_lex	*tmp;

	tmp = general->lexer;
	while(tmp)
	{
		build_matrix(tmp->command, tmp, general);
		tmp = tmp->next;
	}
}
