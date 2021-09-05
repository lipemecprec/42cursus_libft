/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <faguilar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 23:16:01 by faguilar          #+#    #+#             */
/*   Updated: 2021/09/03 20:36:47 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

/* \param content The data contained in the element.
   \param next The next element’s address or NULL if it’s the last element.*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

int		ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
/* \brief The  memchr() function scans the initial n bytes of the memory area
pointed to by s for the first instance of c. Both c and the bytes of the memory
area pointed to by s are interpreted as unsigned char.
\return a pointer to the matching byte or NULL if the character does not  occur
in the given memory area. */
void	*ft_memchr(const void *s, int c, size_t n);
/* \brief The memcmp() function compares the first n bytes (each interpreted as
unsigned char) of the memory areas s1 and s2.
\return an integer less than, equal to, or greater than zero if the first n
bytes of s1 is found, respectively, to be less than, to match, or be greater
than the first n bytes of s2.*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/* \brief The memcpy() function copies n bytes from memory area src to memory
area dest. The memory areas must not overlap.
\return a pointer to dest.*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/* \brief The memmove() function copies n bytes from memory area src to memory
area dest. The memory areas may overlap: copying takes place as though the
bytes in src are first copied into a temporary array that does not overlap src
or dest,  and  the  bytes are then copied from the temporary array to dest.
\return a pointer to dest. */
void	*ft_memmove(void *dest, const void *src, size_t n);
/* \brief The memset() function fills the first n bytes of the memory area
pointed to by s with the constant byte c.
\return a pointer to the memory areas.*/
void	*ft_memset(void *s, int c, size_t n);
/* \brief The strchr() function
\return a pointer to the first occurrence of the character c in the string s.*/
char	*ft_strchr(const char *s, int c);
/* \brief The  strdup() function
\return a pointer to a new string which is a duplicate of the string s.*/
char	*ft_strdup(const char *s);
/* strlcat() appends string src to the end of dst. It will append at most
dstsize – strlen(dst) – 1 characters. It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize.*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/* \brief The strlcpy() function copies up to size - 1 characters from the
NUL-terminated string src to dst, NUL-terminating the result.*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
/* \brief The strcmp() function compares the two strings s1 and s2.  The locale
is not taken into account (for a locale-aware comparison.
\return an integer less than, equal to, or greater than zero if s1 (or the
first n bytes thereof) is found, respectively, to be less than, to match, or be
greater than s2.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*  The strnstr() function locates the first occurrence of the null-terminated
string needle in the string haystack, where not more than size characters
are searched.
\return haystack If needle is an empty string, or, NULL if needle is not
found, or, a pointer to the first occurence of needle in haystack.*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t size);
/* \brief The strrchr() function
\return a pointer to the last occurrence of the character c in the string s.*/
char	*ft_strrchr(const char *s, int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/* \brief Allocates (with malloc(3)) and returns a substring from the string
’s’. The substring begins at index ’start’ and is of maximum size ’len’.
\return the substring or NULL if the allocation fails.*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
/* \brief Allocates (with malloc(3)) and returns a new string, which is the
result of the concatenation of ’s1’ and ’s2’.
\return the concatenation or NULL if the allocation fails.*/
char	*ft_strjoin(char const *s1, char const *s2);
/* \brief Allocates (with malloc(3)) and returns a copy of’s1’ with the
characters specified in ’set’ removed from the beginning and the end of the
string.
\return the trimmed string or NULL if the allocation fails.*/
char	*ft_strtrim(char const *s1, char const *set);
/* \brief Allocates (with malloc(3)) and returns an array of strings obtained by
splitting ’s’ using the character ’c’ as a delimiter.
\return The array of new strings resulting from the split.
NULL if the allocation fails.*/
char	**ft_split(char const *s, char c);
/* \brief Allocates (with malloc(3)) and returns a string representing the
integer received as an argument. Negative numbers must be handled.
\return The string representing the integer. NULL if the allocation fails. */
char	*ft_itoa(int n);
/* \brief Applies the function ’f’ to each character of the string ’s’ to
create a new string (with malloc(3)) resulting from successive applications of
’f’.
\return the string created from the successive applications of ’f’. NULL if the
allocation fails. */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* \brief Applies the function f to each character of thestring passed as
argument, and passing its index as first argument. Each character is passed by
address to f to be modified if necessary*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
/* Outputs the character ’c’ to the given file descriptor.*/
void	ft_putchar_fd(char c, int fd);
/* Outputs the string ’s’ to the given file descriptor.*/
void	ft_putstr_fd(char *s, int fd);
/* Outputs the string ’s’ to the given file descriptor, followed by a newline.*/
void	ft_putendl_fd(char *s, int fd);
/* Outputs the integer ’n’ to the given file descriptor. */
void	ft_putnbr_fd(int n, int fd);
/* utputs the string ’s’ to the given file descriptor.*/
void	ft_putstr_fd(char *s, int fd);
/* \bried Allocates (with malloc(3)) and
\return a new element.
\param content value 't_list content' will be set to.
\return the new element */
t_list	*ft_lstnew(void *content);
/*	\brief Adds the element ’new’ at the beginning of the list.
\param **lst Address of a pointer to the first link of a list.
\param *new  Address of a pointer to the element to be added to the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new);
/* \brief Counts the nunber of elements in a list.
\param *lst The beginning of the list.
\return Length of the list. */
int		ft_lstsize(t_list *lst);
/* \brief
\return the last element of the list.
\param **lst The beginning of the list.
\return Last element of the list. */
t_list	*ft_lstlast(t_list *lst);
/* \brief Adds the element 'new' to the end of the list.
\param **lst The beginning of the list.
\param *new Address of a pointer to the element to be addes to the list.*/
void	ft_lstadd_back(t_list **lst, t_list *new);
/* \brief Takes as a parameter an element and frees the memory of the element’s
content using the function ’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
\param *lst The element to free.
\param (*del) The address of the function used to delete the content. */
void	ft_lstdelone(t_list *lst, void (*del)(void *));
/* \brief Deletes and frees the given element and every successor of that
element, using the function ’del’ and free(3). Finally, the pointer to the list
must be set to NULL.
\param *lst The adress of a pointer to an element.
\param (*del) The address of the function used to delete the element's content.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *));
/* \brief Iterates the list ’lst’ and applies the function ’f’ to the content
of each element.
\param *lst The adress of a pointer to an element.
\param (*f) The adress of the function used to iterate on the list. */
void	ft_lstiter(t_list *lst, void (*f)(void *));
/* \brief Iterates the list ’lst’ and applies the function ’f’ to the content
of each element. Creates a new list resulting of the successive applications of
the function ’f’. The ’del’ function is used to delete the content of an
element if needed.
\param *lst The adress of a pointer to an element.
\param (*f) The adress of the function used to iterate on the list.
\param (*del)  The adress of the function used to delete the content of an
element if needed. */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
