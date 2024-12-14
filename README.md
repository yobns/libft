# 42 libft

**Repo for 42 libft project**  
_The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

---

## 🗣️ About

🚀 **TL;DR**: This project consists of coding basic C functions, which are then compiled into a library for use in other projects of the cursus.  

---

## 📑 Index

### Functions from `<ctype.h>`

- **`ft_isalpha`**   - checks if the character is alphabetic.  
- **`ft_isdigit`**   - checks if the character is a digit.  
- **`ft_isalnum`**   - checks if the character is alphanumeric.  
- **`ft_isascii`**   - checks if the character is in the ASCII set.  
- **`ft_isprint`**   - checks if the character is printable.  
- **`ft_toupper`**   - converts a character to uppercase.  
- **`ft_tolower`**   - converts a character to lowercase.  

### Functions from `<stdlib.h>`

- **`ft_atoi`**      - converts a string to an integer.  
- **`ft_calloc`**    - allocates memory and initializes it to zero.  

### Functions from `<strings.h>` and `<string.h>`

- **`ft_bzero`**     - writes zeroes to a byte string.  
- **`ft_memset`**    - writes a byte to a byte string.  
- **`ft_memcpy`**    - copies memory area.  
- **`ft_memmove`**   - copies memory area (handles overlapping).  
- **`ft_memchr`**    - locates a byte in a byte string.  
- **`ft_memcmp`**    - compares memory areas.  
- **`ft_strlen`**    - computes the length of a string.  
- **`ft_strdup`**    - duplicates a string.  
- **`ft_strlcpy`**   - copies a string with size limitation.  
- **`ft_strlcat`**   - concatenates strings with size limitation.  
- **`ft_strchr`**    - locates the first occurrence of a character in a string.  
- **`ft_strrchr`**   - locates the last occurrence of a character in a string.  
- **`ft_strncmp`**   - compares strings up to a certain number of characters.  
- **`ft_strnstr`**   - locates a substring in a string, within size limits.  
- **`ft_strjoin`**   - concatenates two strings.  
- **`ft_strtrim`**   - trims characters from the start and end of a string.  
- **`ft_split`**     - splits a string by a delimiter.  
- **`ft_substr`**    - extracts a substring.  

### Other functions

- **`ft_putchar_fd`**   - writes a character to a file descriptor.  
- **`ft_putstr_fd`**    - writes a string to a file descriptor.  
- **`ft_putendl_fd`**   - writes a string followed by a newline to a file descriptor.  
- **`ft_putnbr_fd`**    - writes an integer to a file descriptor.  
- **`ft_itoa`**         - converts an integer to a string.  
- **`ft_strmapi`**      - creates a new string based on an input string and a function.  
- **`ft_striteri`**     - iterates over a string and applies a function to each character.  

---

## 🛠️ Usage

### Requirements

This library is written in **C** and requires the `gcc` compiler and standard libraries.

### Instructions

1. Clone the repository:
   ```bash
   git clone https://github.com/yobns/libft.git
   cd libft
2. Compile the library:
   ```bash
   make
3. Include it in your projects:
   ```bash
   #include "libft.h"
4. Link the compiled library when compiling your project:
   ```bash
   gcc your_program.c -L. -lft

