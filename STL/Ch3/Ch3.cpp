#include <iostream>
#include<vector>
#include "Ch3.h"
using namespace std;
/*
1.	ģ����ʽ�еĿո�
vector<list<int> >;		//ÿ���汾��C++�����ᱨ��
vector<list<int>>;		//C++11֮���֧��

2.	nullptr��std::nullptr_t

3.  auto���Զ������Ƶ�

4.  ʹ�ó�ʼ���б�ͳһ��ʼ��
    int x1(5.3);    //���ᱨ����x1��ת��Ϊ5
    int x2 = 5.3;   //���ᱨ����x2��ת��Ϊ5
    int x3{ 5.0 };  //������"double"ת����"int"��Ҫ����ת��
    int x4{5.3};      //������"double"ת����"int"��Ҫ����ת��
    char c1{ 7 };   //���ᱨ��Ҳû�о��棬��Ȼ7�������������ǲ���������ת��
    char c2{ 9999 };    //������"int"��"char"��Ҫ����ת��
    std::vector<int> v1{ 1,2,4,5 }; //ûɶë��
    std::vector<int> v2{ 1,2.3,4,5.6 }; //������"double"ת����"int"��Ҫ����ת��
    ��������ù��캯��ʱ������ʹ�ó�ʼ���б����ʽ
    class P
    {
    P(int,int);
    P(std::initializer_list<int>);
    };
    P p1(77,5);     //����P(int,int)
    P p2{77,5};     //����P(std::initializer_list<int>)
    P p3{77,5,42};  //����P(std::initializer_list<int>)
    P p4={77,5};    //����P(std::initializer_list<int>)
    ʹ����ʽ��ʼ���б��캯��ʱ���Է�ֹ��ʽת��
    class P
    {
    explicit P(int,int);
    explicit P(std::initializer_list<int>);
    };
    P p4 = { 1,2 };     //���������б��ʼ������ʹ����ʽ���캯��
    P p5 = { 1,2,3 };   //���������б��ʼ������ʹ����ʽ���캯��
    
5.  ��Χforѭ��
    �﷨�ṹ��for(decl:coll){...}
    decl��coll��Ԫ�����͵ı���������coll��Ԫ�ؼ���
    for(auto i:{1,2,3,4,5,6})
        {
            cout << i << "  " << endl;
        }
    ����ĳ��vector�ĸ���Ԫ�ض�����3������������
    vector<int> vec;
    ...
    for(auto& i:vec)
    {
        i*=3;
    }
    ��Χforѭ���������ṩbegin��end��Ա���������������߿ɱ�ȫ��begin��end�������õ�����
    
 */
namespace ch3
{
    //int x1(5.3);    //���ᱨ����x1��ת��Ϊ5,�����о���
    //int x2 = 5.3;   //���ᱨ����x2��ת��Ϊ5�������о���
    //int x3{ 5.0 };  //������"double"ת����"int"��Ҫ����ת��
    //int x4{5.3};      //������"double"ת����"int"��Ҫ����ת��
    char c1{ 7 };   //���ᱨ��Ҳû�о��棬��Ȼ7�������������ǲ���������ת��
    //char c2{ 9999 };    //������"int"��"char"��Ҫ����ת��
    std::vector<int> v1{ 1,2,4,5 }; //ûɶë��
    //std::vector<int> v2{ 1,2.3,4,5.6 }; //��"double"ת����"int"��Ҫ����ת��
    void f(int)
    {
	    cout << "called f(int)" << endl;
    }

	void f(void*)
	{
		cout << "called f(void*)" << endl;
	}

    void print(std::initializer_list<int> vals)
    {
        for(auto it=vals.begin();it!=vals.end();++it)
        {
            cout << *it << "\n";
        }
    }

    P::P()
    {
        cout << "P()" << endl;
    }

    P::P(const P&)
    {
        cout << "P(const P&)" << endl;
    }

    P::P(P&&)
    {
        cout << "P(P&&)" << endl;
    }
    P& P::operator=(P&& p1)
    {
        cout << "operator=(P&&)" << endl;
        return *this;
    }

    P::P(int arg1, int arg2)
    {
        cout << "P(int,int)" << endl;
    }

    P::P(std::initializer_list<int>)
    {
        cout << "P(std::initializer_list<int>)" << endl;
    }

    P::P(int a, int b, int c)
    {
        cout << "P(int,int,int)" << endl;
    }



}
