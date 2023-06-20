#include <stdio.h>

/**
 * Checks if the given character is an alphabetic character.
 * @param c The character to be checked.
 * @return 1 if c is an alphabetic character, 0 otherwise.
*/
int _isalpha(int c) {
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
return 1;
return 0;
int main(void) {
char ch = '7';
if (_isalpha(ch)) 
printf("%c is an alphabetic character.\n", ch);
else 
printf("%c is not an alphabetic character.\n", ch);

return 0;
}
}
