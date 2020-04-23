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
        //P p4 = { 1,2 };     //���������б��ʼ������ʹ����ʽ���캯��
        //P p5 = { 1,2,3 };   //���������б��ʼ������ʹ����ʽ���캯��
        for(auto i:{1,2,3,4,5,6})
        {
            cout << i << "  " << endl;
        }
        vector<int> vec{ 1,2,3 };
        for (auto i : vec)
            cout << "δ��3֮ǰ��vec:" << i << "  " << endl;
        for(auto& i:vec)
            i *= 3;
        for (auto i : vec)
            cout << "��3֮���vec:" << i << "  " << endl;
        vector<P> vectorP{};
        vectorP.push_back(P());
        vectorP.push_back(P());
        cout << "����������for loop:" << endl;
        for (auto i : vectorP)
            cout << "����,�������ø��ƹ��캯����" << endl;
        for (const auto& i : vectorP)
            cout << "���������ﲻ����ø��ƹ��캯����" << endl;
        vector<P> vecP;
        P p6;
        vecP.push_back(std::move(p6));
	}
}