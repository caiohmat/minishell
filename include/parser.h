/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcordeir <vcordeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 01:01:19 by vcordeir          #+#    #+#             */
/*   Updated: 2022/04/22 02:27:14 by vcordeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

typedef struct s_parser
{
	int		first_token;
	int		isredirection;
	int		input_redirection;
	int		output_redirection;
	int		iscommand;
	int		iscmdpath;
	int		isspecialchar;
	int		quoted;
	int		last_token;
	int		args_length;
	char	**path;
}		t_parser;

void	ft_initialize_parser_infos(t_parser *parser_infos);

#endif
