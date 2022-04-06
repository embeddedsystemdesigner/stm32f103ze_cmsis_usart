#include <stdio.h>
#include <rt_misc.h>
#include "usart.h"


#pragma import(__use_no_semihosting_swi)





struct __FILE { int handle;  };

FILE __stdout;
FILE __stdin;
FILE __stderr;


int fputc(int c, FILE *f)
{
  if (c == '\n')
		{
			usart2_putchar('\r');
		}
		
		usart2_putchar(c);
	
    return (int)c;
}
///////////////////////////////////////////////////////////////////////////////////////




void _ttywrch(int c)
{
  usart2_putchar(c);
}
///////////////////////////////////////////////////////////////////////////////////////


void _sys_exit(int return_code)
{
label:  goto label;  
}
