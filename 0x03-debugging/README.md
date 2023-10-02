#	0x03. C - Debugging

**Tasks**

0. **Multiple mains**: In most projects, we often give you only one main file to test with. For example, this main file is a test for a <kbd>postitive_or_negative()</kbd> function similar to the one you worked with in <kbd>an earlier C project:</kbd>
<table>
<tr>
carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
</tr>
</table>


