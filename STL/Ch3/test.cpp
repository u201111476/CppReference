#include <iostream>
#include <vector>
#include "Ch3.h"
using namespace std;
namespace ch3
{
	void test()
	{
		cout << "f(0)" << endl;
		f(0);
		cout << "f(NULL)" << endl;
		f(NULL);
		cout << "f(nullptr)" << endl;
		f(nullptr);
        print({ 12,3,5,7,11,13,17 });
        P p1(1, 2);
        P p2{ 1,2 };
        P p3{ 1,2,3 };
        //P p4 = { 1,2 };     //报错，复制列表初始化不能使用显式构造函数
        //P p5 = { 1,2,3 };   //报错，复制列表初始化不能使用显式构造函数
        for(auto i:{1,2,3,4,5,6})
        {
            cout << i << "  " << endl;
        }
        vector<int> vec{ 1,2,3 };
        for (auto i : vec)
            cout << "未乘3之前的vec:" << i << "  " << endl;
        for(auto& i:vec)
            i *= 3;
        for (auto i : vec)
            cout << "乘3之后的vec:" << i << "  " << endl;
        vector<P> vectorP{};
        vectorP.push_back(P());
        vectorP.push_back(P());
        cout << "接下来进行for loop:" << endl;
        for (auto i : vectorP)
            cout << "看看,这里会调用复制构造函数。" << endl;
        for (const auto& i : vectorP)
            cout << "看看，这里不会调用复制构造函数。" << endl;
        vector<P> vecP;
        P p6;
        vecP.push_back(std::move(p6));
	}
}