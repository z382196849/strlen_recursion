#include<stdio.h>

int myStrlen(const char* str)
{
    if(*str != '\0')
    {
  	return 1 + myStrlen(str + 1);
    }
    else
    {
  	return 0;
    }
}

int main()
{
    int len = 0;
    len = myStrlen("success!");
    printf("len = %d", len);
    getchar();
    return;
}