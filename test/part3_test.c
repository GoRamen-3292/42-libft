#include "test.h"

void	fn_null(void *result);
void	print_content(void *c);
void	*add_1_ptr(void *ptr);

int	linked_lst_test(void)
{
	char	*str;
	t_list	*lst;
	t_list	*last_node;
	t_list	*node_zero;
	t_list	*node_two;
	t_list	*node_three;

	printf("=== Create a list ===\n");
	str = ft_strdup("0123456789ABCDEF");
	lst = ft_lstnew(&str[1]);
	ft_lstiter(lst, print_content);
	printf("\n=== add_front 0 ===\n");
	node_zero = ft_lstnew(&str[0]);
	ft_lstadd_front(&lst, node_zero);
	ft_lstiter(lst, print_content);
	printf("\n=== add_back 2 ===\n");
	node_two = ft_lstnew(&str[2]);
	ft_lstadd_back(&lst, node_two);
	ft_lstiter(lst, print_content);
	printf("\n=== add_back 3 ===\n");
	node_three = ft_lstnew(&str[3]);
	ft_lstadd_back(&lst, node_three);
	ft_lstiter(lst, print_content);
	printf("\n=== delete 3 ===\n");
	ft_lstdelone(node_three, fn_null);
	node_two->next = NULL;
	ft_lstiter(lst, print_content);
	printf("\n=== add_back 3 again ===\n");
	node_three = ft_lstnew(&str[3]);
	ft_lstadd_back(&lst, node_three);
	ft_lstiter(lst, print_content);
	printf("\n=== dupicate a list ===\n");
	t_list *dup_list = ft_lstmap(lst, add_1_ptr, fn_null);
	ft_lstiter(lst, print_content);
	printf("\n");
	ft_lstiter(dup_list, print_content);
	printf("\n=== clear the list ===\n");
	ft_lstclear(&lst, fn_null);
	printf("Now trying to break the code...\n");
	fflush(stdout);
	last_node = ft_lstnew(&str[4]);
	ft_lstadd_back(&lst, last_node);
	free(str);
	free(last_node);
	return (0);
}

void	fn_null(void *result)
{
	(void) result;
	return ;
}

void	print_content(void *c)
{
	printf("%c ", *(char *)c);
	fflush(stdout);
}

void	*add_1_ptr(void *ptr)
{
	return ((char *)ptr + 1);
}