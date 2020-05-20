// STL.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "main.h"
#ifdef CH3
#include "Ch3/Ch3.h"
#endif
int main()
{
#ifdef CH3
	ch3::test();
#endif
    return 0;
}

