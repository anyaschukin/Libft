# Libft

#### Final Score 111/100

## Challenge

Create your own basic library. 

For 42 students, using normal library functions (like ```atoi```, ```strdup```, ```strjoin```, etc.) is strictly forbidden. Students must write all their own functions from scratch. The functions created in **Libft** will become the basic building blocks of later programs and projects. <br />

**Libft** must conform to the [42 Norm](https://cdn.intra.42.fr/pdf/pdf/960/norme.en.pdf). Errors must be handled carefully. <br />
In no way can it quit in an unexpected manner (segmentation fault, bus error, double free, etc),  apart from undefined behaviors.

## Part 1 
#### (Mandatory Functions)

- ft_memset
- ft_bzero
- ft_memcpy
- ft_memccpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_strlen
- ft_strdup
- ft_strcpy
- ft_strncpy
- ft_strcat
- ft_strncat
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strstrs
- ft_strnstr
- ft_strcmp
- ft_strncmp
- ft_atoi
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

## Part 2 
#### (Mandatory Functions)

**ft_memalloc** <br />
>Allocates with ```malloc``` and returns a “fresh” memory area. The memory allocated is initialized to 0. If the allocation fails, the function returns NULL.

**ft_memdel** <br />
>Takes as a parameter the address of a memory area that needs to be freed with ```free```, then puts the pointer to NULL

**ft_strnew** <br />
>Allocates with ```malloc``` and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL.

**ft_strdel** <br />
>Takes as a parameter the address of a string that need to be freed with ```free```, then sets its pointer to NULL.

**ft_strclr** <br />
>Sets every character of the string to the value ’\0’.

**ft_striter** <br />
>Applies the function **f** to each character of the string passed as argument. Each character is passed by address to **f** to be modified if necessary

**ft_striteri** <br />
>Applies the function **f** to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to **f** to be modified if necessary.

**ft_strmap** <br />
>Applies the function **f** to each character of the string given as argument to create a “fresh” new string (with ```malloc```) resulting from the successive applications of **f**.

**ft_strmapi** <br />
>Applies the function **f** to each character of the string passed as argument by giving its index as first argument to create a “fresh” new string (with ```malloc```) resulting from the successive applications of **f**.

**ft_strequ** <br />
>Lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.

**ft_strnequ** <br />
>Lexicographical comparison between s1 and s2 up to n characters or until a ’\0’ is reached. If the 2 strings are identical, the function returns 1, or 0 otherwise.

**ft_strsub** <br /> 
>Allocates (with ```malloc```) and returns a “fresh” substring
from the string given as argument. The substring begins at
indexstart and is of size len. If start and len aren’t refering
to a valid substring, the behavior is undefined. If the
allocation fails, the function returns NULL.

**ft_strjoin** <br />
>Allocates (with ```malloc```) and returns a “fresh” string ending
with ’\0’, result of the concatenation of s1 and s2. If
the allocation fails the function returns NULL.

**ft_strtrim** <br />
>Allocates (with ```malloc```) and returns a copy of the string
given as argument without whitespaces at the beginning or at
the end of the string. Will be considered as whitespaces the
following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces
at the beginning or at the end, the function returns a
copy of s. If the allocation fails the function returns NULL.

**ft_strsplit** <br />
>Allocates (with ```malloc```) and returns an array of “fresh”
strings (all ending with ’\0’, including the array itself) obtained
by spliting s using the character c as a delimiter.
If the allocation fails the function returns NULL. Example
: ft_strsplit("*hello*fellow***students*", ’*’) returns
the array ["hello", "fellow", "students"].

**ft_itoa** <br />
>Allocate (with ```malloc```) and returns a “fresh” string ending
with ’\0’ representing the integer n given as argument.
Negative numbers must be supported. If the allocation fails,
the function returns NULL.

**ft_putchar** <br />
>Outputs the character c to the standard output.
 
**ft_putstr** <br />
>Outputs the string s to the standard output.

**ft_putendl** <br /> 
>Outputs the string s to the standard output followed by a
’\n’.

**ft_putnbr** <br />
>Outputs the integer n to the standard output.

**ft_putchar_fd** <br />
>Outputs the char c to the file descriptor fd.

**ft_putstr_fd** <br />
>Outputs the string s to the file descriptor fd.

**ft_putendl_fd** <br />
>Outputs the string s to the file descriptor fd followed by a
’\n’.

**ft_putnbr_fd** <br />
>Outputs the integer n to the file descriptor fd.

## Bonus

**ft_lstnew** <br />
>Allocates (with ```malloc```) and returns a “fresh” link. The
variables content and content_size of the new link are initialized
by copy of the parameters of the function. If the parameter
content is nul, the variable content is initialized to
NULL and the variable content_size is initialized to 0 even
if the parameter content_size isn’t. The variable next is
initialized to NULL. If the allocation fails, the function returns
NULL.

**ft_lstdelone** <br />
>Takes as a parameter a link’s pointer address and frees the
memory of the link’s content using the function del given as
a parameter, then frees the link’s memory using ```free```. The
memory of next must not be freed under any circumstance.
Finally, the pointer to the link that was just freed must be
set to NULL (quite similar to the function ```ft_memdel``` in the
mandatory part).

**ft_lstdel** <br />
>Takes as a parameter the adress of a pointer to a link and
frees the memory of this link and every successors of that link
using the functions ```del``` and ```free```. Finally the pointer to
the link that was just freed must be set to NULL (quite similar
to the function ft_memdel from the mandatory part).

**ft_lstadd** <br />
>Adds the element new at the beginning of the list.

**ft_lstiter** <br />
>Iterates the list lst and applies the function f to each link.

**ft_lstmap** <br />
>Iterates a list lst and applies the function f to each link to
create a “fresh” list (using ```malloc```) resulting from the successive
applications of f. If the allocation fails, the function
returns NULL.

## Personal Bonuses

**ft_itoa_base** <br />
> Converts an integer value to a null-terminated string
using the specified base, and stores the result in a char array that is
allocated using ```malloc```.

**ft_isupper** <br />
>Returns true if the character c passed as argument is in uppercase. Only works for ASCII characters.

**ft_islower** <br />
>Returns true if the character c passed as argument is in lowercase. Only works for ASCII characters.

**ft_strtolower** <br />
>Sets every character of the string to lowercase.

**ft_strtoupperr** <br />
>Sets every character of the string to uppercase.

**ft_strjoin_free** <br />
>```Malloc```s a new string s1 + s2 and frees the the strings passed as parameters.

**ft_strrotate** <br />
>Rotates a string or array, of x size by  x amt.

**ft_srt_int_tab** <br />
>Sorts (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order. Doubles are preserved.

**ft_unicode** <br />
>Converts a wide char value and stores the result in a char array (that is
allocated using ```malloc```).

**ft_putwchar** <br />
>Prints a unicode (wide char) character to the standard output. 

**ft_putwstr** <br />
>Prints a unicode (wide char) string to the standard output. 

**get_next_line** <br />
>int get_next_line(int const fd, char **line)
