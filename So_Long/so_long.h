#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <mlx.h>
#include <X11/X.h>
#include <X11/keysym.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10 
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}				t_list;
 
int		found_newline(t_list *list);
t_list	*find_lst_node(t_list *list);
char	*get_line(t_list *list);
void	copy_str(t_list *list, char *str);
int		len_to_newline(t_list *list);
void	polish_list(t_list **list);
char	*get_next_line(int fd);
void	dealloc(t_list **list, t_list *clean_node, char *buf);
void	create_list(t_list **list, int fd);
void	append(t_list **list, char *buf);
char 	**add_to_map(char **map, char *new_line);

#endif /* SO_LONG_H  */