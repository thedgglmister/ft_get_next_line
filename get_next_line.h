/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 12:02:29 by biremong          #+#    #+#             */
/*   Updated: 2017/01/28 17:44:40 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# define BUFF_SIZE 40

typedef struct	s_fd_struct
{
	int		fd;
	char	*str;
}				t_fds;

int				get_next_line(const int fd, char **line);
int				check_list_for_old_dirty_data\
					(t_list **head, int fd, char **line);
int				read_some_stuff\
					(t_list **head, int fd, char **line);
int				match_fd(void *data_ref, void *strct);
void			save_leftover_data\
					(t_list **head, char *nl_pnt, int fd, int extra_len);

#endif
