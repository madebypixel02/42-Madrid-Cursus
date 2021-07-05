# libft
Your very own libc library :smile:

### Table of Contents
* [Introduction](#introduction)
* [Function Overview](#function-overview)
* [Bonus](#bonus)
* [Installation](#installation)
* [Summary](#summary)

## Introduction
In this project we'll be implementing our home-made functions from libc, which will be very useful to get familiar with memory allocation, and to think of creative ways to implement these functions.

## Function Overview
```
ft_atoi			Reads a String, and, after ignoring spaces with ft_isspace, saves the string into an integer.
ft_bzero		
ft_calloc		Reserves x blocks of y bits of memory
ft_isalnum		Returns 1 if the input is a number or a letter in the ASCII table
ft_isalpha		Returns 1 if the input is a letter in the ASCII table
ft_isascii		Returns whether or not a value belongs to the ASCII table
ft_isdigit		Returns 1 if the input is a number in the ASCII table
ft_isprint		Returns whether a character is printable
ft_isspace		Returns if a character is a form of space (space, tab, etc)
ft_itoa			Saves the given number as a string (char array)
ft_memccpy		
ft_memchr		Looks for a matching character inside a part of the memory
ft_memcmp		Compares two parts of memory, returning 0 if they're the same, or else a nonzero value
ft_memcpy		Copies from one part of memory to another, ignoring possible overlaps
ft_memmove		Copies from one part of memory to another, preventing possible overlaps
ft_memset		
ft_putchar_fd	Prints a character to the given file descriptor
ft_putendl_fd	
ft_putnbr_fd	Prints number to the given file descriptor
ft_putstr_fd	Prints string to the given file descriptor
ft_split		Splits a string according to a given separator character
ft_strchr		Looks for a specific character inside a given string
ft_strdup		
ft_strjoin		
ft_strlcat		Concatenates two strings ensuring ending in \0

```
