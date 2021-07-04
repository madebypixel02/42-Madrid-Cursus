# ft_printf

Because ft_putstr & ft_putnbr aren't enough :stuck_out_tongue_winking_eye:

### Table of Contents

* [ft_print what?](#ft_print-what)
* [Capabilities](#capabilities)
* [Limitations](#limitations)
* [Installation](#installation)
* [Summary](#summary)

## ft_print what?
Printf is likely one of the most popular commands people see when learning a new programming language, and for a good reason. They are easy to understand and very powerful too. This is why learning to implement our own version of printf can help us better understand what happens internally when entering ``printf("Hello World")``!

## Capabilities
Our version of the printf function will be called ``ft_printf``, and will be able to work with the following inputs:
```
Specifiers:
	%	Prints the percent character
	c	Prints a character
	s	Prints a string (array of characters)
	d,i	Prints an integer
	u	Prints an unsigned integer
	x	Prints an unsigned hexadecimal integer (lowecase a-f)
	X	Prints an unsigned hexadecimal integer (uppercase A-F)

Flags:
	Width		Specifies the minimum width of the printed variable (adds spaces when necessary)
	Precision	Selects the minimum number of elements of the variable that are printed (Eg. number of chars from a string)
	-			Pads text to the left (adds spaces to the right)
	0			Pads text with zeroes instead of spaces
	.			Separates Width and Precision
	*			Indicates that the Width or the Precision will be specified using an additional variable
```

Our ft_printf function has the following prototype:
```C
int ft_printf(const char *str, ...);
```

The general idea of the function is to iterate over ``str`` and print normally until a ``%`` is read. From there, we parse the next elements until one of the Specifiers is found or until the end of the string ``\0`` is reached, whichever comes first. The general structure of the elements we want to parse is the following:

```
%[Flags][Width].[Precision][Specifier]
```

## Limitations

As this is quite a straightforward approach at printf, there are a few limitations to consider, namely:

* Our ft_printf does not have buffer management, unlike the real printf
* This implementation of printf doesn't handle overflows and unexpected inputs the same way the real printf would
* Our ft_printf isn't nearly as powerful as the real prinft since many features are not included
* Since our ft_printf relies on our personal libft library, which makes it slower in performance when compared to the original printf

## Installation

In order for you to test this printf, you'll need the following dependencies:

```
gcc clang python-norminette
```

* Testing the ft_printf function
```
git clone https://github.com/madebypixel02/42-Madrid-Cursus.git
cd 42-Madrid-Cursus/ft_printf
make
```
Feel free to replace your own libft inside the ``ft_printf`` folder

* Usage:
```
make test	Compiles ft_printf and libft with the main.c inside the tests/ folder. Checks for leaks in Mac and Linux (Uses valgrind command in linux)
make git	Stages every modified file to commit and pushes to upstream branch

```

## Summary

This was my second project as a 42 student in Madrid. Looking forward to the new projects coming next!
July 4th, 20201
