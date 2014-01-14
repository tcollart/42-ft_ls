/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 01:14:09 by tcollart          #+#    #+#             */
/*   Updated: 2013/12/15 04:14:44 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS
# define FT_LS

# include "./libft/libft.h"
# include <string.h>
# include <stdlib.h>
# include <dirent.h> 
# include <sys/stat.h>
# include <sys/types.h>
# include <pwd.h>
# include <uuid/uuid.h>
# include <grp.h>
# include <time.h>

typedef struct			sl_list
{
	char				*rights;
	char				*n_links;
	char				*uids;
	char				*gids;
	char				*sizes;
	char				*times;
	char				*files;
	struct sl_list		*prev;
	struct sl_list		*next;
}						ls_list;

char *		get_total_blocks(char *flags, char *str);

char *		get_rights(struct stat infos);
char *		get_links(struct stat infos, int len);
char *		get_uid(struct stat infos);
char *		get_gid(struct stat infos);
char *		get_size(struct stat infos, int len);
char *		get_date(struct stat infos);
char *		get_files(struct dirent *dir);

int			count_total_blocks(void);
int			count_elements(char *directory);
int			get_larger_number_size(void);
int			get_larger_number_nlink(void);

ls_list		*push_it_to_the_lists(ls_list *item, struct stat infos, 
										ls_list *previous, struct dirent *dir);

ls_list		*sort(ls_list *list, int size);
ls_list		*ft_list_bubble_sort_r(ls_list *list, int size);
void		ft_int_bubble_sort(int *list, size_t n);

char		test_l(char *str);
char		test_R(char *str);
char		test_a(char *str);
char		test_r(char *str);
char		test_t(char *str);

void		print_result(ls_list *list);
void		print_result_r(ls_list *list);
void		print_result_simple(ls_list *list);
void		proc(ls_list **list, ls_list **temp, char *argu1, char *argu2);

#endif /* !FT_LS */
