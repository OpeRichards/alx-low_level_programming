#	0x03. C - Debugging

**Tasks**

0. **Multiple mains**: In most projects, we often give you only one main file to test with. For example, this main file is a test for a <kbd>postitive_or_negative()</kbd> function similar to the one you worked with in <kbd>an earlier C project:</kbd>
```
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
```

```
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 
```

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
```
Based on the <kbd>main.c</kbd> file above, create a file named <kbd>0-main.c</kbd>. This file must test that the function <kbd>positive_or_negative()</kbd> gives the correct output when given a case of <kbd>0</kbd>.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from <kbd>0x01. C - Variables, if, else, while - Task #0</kbd> to compile with this main file to test locally.

	- You only need to upload <kbd>0-main.c</kbd> and <kbd>main.h</kbd> for this task. We will provide our own <kbd>positive_or_negative()</kbd> function.
	- You are not allowed to add or remove lines of code, you may change only one line in this task.
```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$ 
```


