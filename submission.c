#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include "helperfunction.h"
# define MAX_SIZE 2000 



int main()
{
    int starttime = 5000;
    char str[MAX_SIZE] = {0};
    LoadInfo(str, MAX_SIZE);
    Sleep(starttime);
    VirtualOutput(str, MAX_SIZE);   
    return 0;
}