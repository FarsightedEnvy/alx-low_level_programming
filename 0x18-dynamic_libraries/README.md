0x18. C - Dynamic libraries

Tasks
0. A library is not a luxury but one of the necessities of life
mandatory
Create the dynamic library libdynamic.so containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

1. Without libraries what have we? We have no past and no future
mandatory

Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

_putchar(char c):

This function writes a character to the standard output (usually the terminal).
It takes a single character c as an argument.
Returns 1 on success, and -1 on error.
_islower(int c):

Checks if the input character c is a lowercase letter.
Returns 1 if c is a lowercase letter, and 0 otherwise.
_isalpha(int c):

Checks if the input character c is an alphabetic character (either uppercase or lowercase).
Returns 1 if c is an alphabetic character, and 0 otherwise.
_abs(int n):

Computes the absolute value of an integer n.
Returns the absolute value of n.
_isupper(int c):

Checks if the input character c is an uppercase letter.
Returns 1 if c is an uppercase letter, and 0 otherwise.
_isdigit(int c):

Checks if the input character c is a digit (0-9).
Returns 1 if c is a digit, and 0 otherwise.
*_strlen(char s):

Computes the length of a string s.
Returns the length of the string.
*_puts(char s):

Prints a string s to the standard output (usually the terminal) followed by a newline.
Doesn't return anything.
**_strcpy(char dest, char src):

Copies the string src to the buffer dest.
Returns a pointer to the destination string (dest).
*_atoi(char s):

Converts a string s to an integer.
Returns the converted integer.
**_strcat(char dest, char src):

Concatenates (appends) the string src to the end of the string dest.
Returns a pointer to the resulting string.
**_strncat(char dest, char src, int n):

Concatenates (appends) at most n characters from the string src to the end of the string dest.
Returns a pointer to the resulting string.
**_strncpy(char dest, char src, int n):

Copies at most n characters from the string src to the buffer dest.
Returns a pointer to the destination string (dest).
**_strcmp(char s1, char s2):

Compares two strings s1 and s2.
Returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.
*_memset(char s, char b, unsigned int n):

Fills the first n bytes of the memory area pointed to by s with the constant byte b.
Returns a pointer to the memory area s.
**_memcpy(char dest, char src, unsigned int n):

Copies n bytes from memory area src to memory area dest.
Returns a pointer to dest.
*_strchr(char s, char c):

Locates the first occurrence of character c in the string s.
Returns a pointer to the located character, or NULL if the character is not found.
**_strspn(char s, char accept):

Computes the length of the initial segment of the string s that consists of only characters from the string accept.
Returns the length of the initial segment.
**_strpbrk(char s, char accept):

Searches the string s for any of the characters in the string accept.
Returns a pointer to the first occurrence in s of any of the characters in accept, or NULL if no such character is found.
**_strstr(char haystack, char needle):

Locates the first occurrence of the substring needle in the string haystack.
Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
