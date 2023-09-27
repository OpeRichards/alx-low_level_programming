#	0x02. C - Functions, nested loops

**Tasks**

0.** _putchar**: Write a program that prints _putchar, followed by a new line. 
The program should return 0

1. **I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**: Write a function that prints the alphabet, in lowercase, followed by a new line.
- Prototype: _void print\_alphabet(void);_
- You can only use _\_putchar_ twice in your code

2. **10 x alphabet**: Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
- Prototype: _void print\_alphabet\_x10(void);_
- You can only use _\_putchar_ twice in your code

3. **islower**: Write a function that checks for lowercase character.
- Prototype: _int \_islower(int c);_
- Returns _1_ if _c_ is lowercase
- Returns _0_ otherwise
FYI: The standard library provides a similar function: _islower_. Run _man islower_ to learn more.

4. **:isalpha**: Write a function that checks for alphabetic character.
- Prototype: _int \_isalpha(int c);_
- Returns _1_ if _c_ is a letter, lowercase or uppercase
- Returns _0_ otherwise
FYI: The standard library provides a similar function: _isalpha_. Run _man isalpha_ to learn more.

5. **Sign**: Write a function that prints the sign of a number.
- Prototype: _int print\_sign(int n);_
- Returns _1_ and prints _+_ if _n_ is greater than zero
- Returns _0_ and prints _0_ if _n_ is zero
- Returns _-1_ and prints _-_ if _n_ is less than zero

6. **There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**: Write a function that computes the absolute value of an integer.
- Prototype: _int \_abs(int);_
FYI: The standard library provides a similar function: _abs_. Run _man abs_ to learn more.

7. **There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**: Write a function that prints the last digit of a number.
- Prototype: _int print\_last\_digit(int);_
- Returns the value of the last digit

8. **I'm federal agent Jack Bauer, and today is the longest day of my life**: Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
- Prototype: _void jack\_bauer(void);_
- You can listen to _this soundtrack_ while coding :)

9. **Learn your times table**: Write a function that prints the 9 times table, starting with 0.
- Prototype: _void times\_table(void);_
- Format: see example

10. **a + b**: Write a function that adds two integers and returns the result.
- Prototype: _int add(int, int);_

11. **98 Battery Street, the OG**: Write a function that prints all natural numbers from n to 98, followed by a new line.
- Prototype: _void print\_to\_98(int n);_
- Numbers must be separated by a comma, followed by a space
- Numbers should be printed in order
- The first printed number should be the number passed to your function
- The last printed number should be _98_
- You are allowed to use the standard library
