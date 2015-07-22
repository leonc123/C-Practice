#include <stdio.h>

/*Copying input to output version 2
In OS X, EOF is signalled with ctrl-D
*/

/*
By default, OS X (formerly Mac OS X) terminals recognize EOF when control-D is pressed at the beginning of a line.

In detail, the actual operation is that, when control-D is pressed, all bytes in the terminal’s input buffer are sent to the running process using the terminal. At the start of a line, no bytes are in the buffer, so the process is told there are zero bytes available, and this acts as an EOF indicator.

This procedure doubles as a method of delivering input to the process before the end of a line: The user may type some characters and press control-D, and the characters will be sent to the process immediately, without the usual wait for enter/return to be pressed. After this “send all buffered bytes immediately” operation is performed, no bytes are left in the buffer. So, when control-D is pressed a second time, it is the same as the beginning of a line (no bytes are sent, and the process is given zero bytes), and it acts like an EOF.

You can learn more about terminal behavior by using the command “man 4 tty” in Terminal. The default line discipline is termios. You can learn more about the termios line discipline by using the command “man termios”.
*/


int main()
{
	int c;
	
	while ((c = getchar()) != EOF)
	{
		putchar(c);	
	}
}
