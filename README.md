
# Libft

![libft_github_png](https://github.com/user-attachments/assets/2176414d-6560-4a5e-a346-849cbe7518ae)

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white) 	![Git](https://img.shields.io/badge/git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white) ![Bash Script](https://img.shields.io/badge/bash_script-%23121011.svg?style=for-the-badge&logo=gnu-bash&logoColor=white) ![Markdown](https://img.shields.io/badge/markdown-%23000000.svg?style=for-the-badge&logo=markdown&logoColor=white) 	![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white) ![Vim](https://img.shields.io/badge/VIM-%2311AB00.svg?style=for-the-badge&logo=vim&logoColor=white) 



**Libft** is the first project of my programming track at [42 Porto](https://www.42porto.com). The main goal of this project is to rebuild my library of functions in C programming language, re-implementing my own versions of the standard `libc` with some aditional ones, which we deal with characters, strings, memory, convertion and allocation. Plus, we have the `bonus` part, where we are able to deal with linked lists.

---

# Content

- [Summary](#Summary)
- [Functionalities](#Functionalities)
- [Usability](#Usability)
- [Structure](#Structure)
- [Installation](#Installation)
- [Feedback](#Feedback)
- [Contact](#Contact)

---

# Summary

**Libft** is a library in C that contains standard functions in C, like `strlen`, `atoi`, `strdup`, etc. Not only, it includes additional and bonuses functions that expands it's functionalities, like string manipulation, number convertion and linked lists manipulation.

This project was a great exercise to understand how the standard library in C programming language works, and a great opportunity to deepen the concepts we were exposed in the Piscine.

---

# Functionalities

## Libc functions:

- Characters manipulation: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.

- String manipulation: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`.

- Memory manipulation: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`.

- Conversion and allocation: `ft_atoi`, `ft_calloc`.

## Additional functions:

- String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`.

- File descriptors: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

## Bonuses:

- Linked lists manipulation: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

# Usability

## Compilation
To compile the library you can use the `make` command in the terminal:

```Bash
make
```

This will generate the `libft.a` file, which is the static library that has all the implemented functions.

## How to include in your project
To use the **Libft** in your project, include the header `libft.h` and link it during compilation:

```C
#include "libft.h"
```

And compile your project with:

```Bash
cc -Wall -Wextra -Werror -c your_program.c -o your_program
```

---

# Structure
libft/\
├── Makefile\
├── libft.h\
├── src/\
│   ├── ft_atoi.c\
│   ├── ft_bzero.c\
│   ├── ft_calloc.c\
│   ├── ft_isalnum.c\
│   ├── ft_isalpha.c\
│   ├── ft_isascii.c\
│   ├── ft_isdigit.c\
│   ├── ft_isprint.c\
│   ├── ft_itoa.c\
│   ├── ft_lstadd_back.c\
│   ├── ft_lstadd_front.c\
│   ├── ft_lstclear.c\
│   ├── ft_lstdelone.c\
│   ├── ft_lstiter.c\
│   ├── ft_lstlast.c\
│   ├── ft_lstmap.c\
│   ├── ft_lstmap.c\
│   ├── ft_lstnew.c\
│   ├── ft_lstsize.c\
│   ├── ft_memchr.c\
│   ├── ft_memcmp.c\
│   ├── ft_memcpy.c\
│   ├── ft_memmove.c\
│   ├── ft_memset.c\
│   ├── ft_putchar_fd.c\
│   ├── ft_putendl_fd.c\
│   ├── ft_putnbr_fd.c\
│   ├── ft_putstr_fd.c\
│   ├── ft_split.c\
│   ├── ft_strchr.c\
│   ├── ft_strdup.c\
│   ├── ft_striteri.c\
│   ├── ft_strjoin.c\
│   ├── ft_strlcat.c\
│   ├── ft_strlcpy.c\
│   ├── ft_strlen.c\
│   ├── ft_strmapi.c\
│   ├── ft_strncmp.c\
│   ├── ft_strnstr.c\
│   ├── ft_strrchr.c\
│   ├── ft_strtrim.c\
│   ├── ft_substr.c\
│   ├── ft_tolower.c\
│   └── ft_toupper.c\
└── obj/\

---

# Installation
1. Clone the repository:

```Bash
git clone https://github.com/gabrielhdbarbosa/libft.git
```

3. Browse to the project dir:

```Bash
cd libft
```

4. Compile it:

```Bash
make
```

---

# Feedback

---

# Contact

If you have any question or suggestion feel free to contact me!

![Gmail](https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white) : ghrb2811@gmail.com

[![LinkedIn](https://img.shields.io/badge/linkedin-%230077B5.svg?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/gabrielhdb/)

---

Made with 🫀 by me!

---
