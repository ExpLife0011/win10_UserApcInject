// testexe.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <windows.h>

int main()
{
	while (1)
	{
		printf("��ע���\n");
		SleepEx(1000, TRUE);  //FALSE APC�ǲ���ִ�е�
	}
    return 0;
}

