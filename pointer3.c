#include <stdio.h>

int 
main(void)
{
    int x = 0x7F35DE16;
    int * ptr = &x;
    char * cptr = &x;
    printf("x = %X\n",x);
    printf("&x = %X\n",&x);
    printf("ptr = %X\n",ptr);
    printf("ptr+1 = %X\n",ptr+1);
    printf("ptr+2 = %X\n",ptr+2);
    printf("ptr+3 = %X\n",ptr+3);
    printf("ptr+4 = %X\n",ptr+4);
    
    printf("sub = %X\n",(ptr+4) - (ptr-1));



    printf("ptr-1 = %X\n",ptr-1);
    printf("ptr-2 = %X\n",ptr-2);
    printf("cptr = %X\n",cptr);
    printf("cptr+1 = %X\n",cptr+1);
    printf("cptr+2 = %X\n",cptr+2);
    printf("cptr+3 = %X\n",cptr+3);
    printf("cptr+4 = %X\n",cptr+4);
    printf("cptr-1 = %X\n",cptr-1);
    printf("cptr-2 = %X\n",cptr-2);
    printf("*ptr = %X\n",*ptr);
    printf("*char ptr = %X\n",*(cptr));
    printf("*char ptr = %X\n",*(cptr+1));
    printf("*char ptr = %X\n",*(cptr+2));
    printf("*char ptr = %X\n",*(cptr+3));
    printf("&ptr = %X\n",&ptr);
    printf("&cptr = %X\n",&cptr);
}