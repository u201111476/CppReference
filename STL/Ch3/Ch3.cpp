#include <iostream>
#include<vector>
#include "Ch3.h"
using namespace std;
/*
1.	模板表达式中的空格
vector<list<int> >;		//每个版本的C++都不会报错
vector<list<int>>;		//C++11之后才支持

2.	nullptr和std::nullptr_t

3.  auto的自动类型推导

4.  使用初始化列表统一初始化
    int x1(5.3);    //不会报错，但x1被转化为5
    int x2 = 5.3;   //不会报错，但x2被转化为5
    int x3{ 5.0 };  //报错，从"double"转换到"int"需要收缩转换
    int x4{5.3};      //报错，从"double"转换到"int"需要收缩转换
    char c1{ 7 };   //不会报错也没有警告，虽然7是整型数，但是不属于收缩转换
    char c2{ 9999 };    //报错，从"int"到"char"需要收缩转换
    std::vector<int> v1{ 1,2,4,5 }; //没啥毛病
    std::vector<int> v2{ 1,2.3,4,5.6 }; //报错，从"double"转换到"int"需要收缩转换
    创建类调用构造函数时会优先使用初始化列表的形式
    class P
    {
    P(int,int);
    P(std::initializer_list<int>);
    };
    P p1(77,5);     //调用P(int,int)
    P p2{77,5};     //调用P(std::initializer_list<int>)
    P p3{77,5,42};  //调用P(std::initializer_list<int>)
    P p4={77,5};    //调用P(std::initializer_list<int>)
    使用显式初始化列表构造函数时可以防止隐式转换
    class P
    {
    explicit P(int,int);
    explicit P(std::initializer_list<int>);
    };
    P p4 = { 1,2 };     //报错，复制列表初始化不能使用显式构造函数
    P p5 = { 1,2,3 };   //报错，复制列表初始化不能使用显式构造函数
    
5.  范围for循环
    语法结构：for(decl:coll){...}
    decl是coll中元素类型的遍历声明，coll是元素集合
    for(auto i:{1,2,3,4,5,6})
        {
            cout << i << "  " << endl;
        }
    想让某个vector的各个元素都乘以3，可以这样做
    vector<int> vec;
    ...
    for(auto& i:vec)
    {
        i*=3;
    }
    范围for循环可用于提供begin和end成员函数的容器，或者可被全局begin和end函数作用的容器
    
 */
namespace ch3
{
    //int x1(5.3);    //不会报错，但x1被转化为5,但是有警告
    //int x2 = 5.3;   //不会报错，但x2被转化为5，但是有警告
    //int x3{ 5.0 };  //报错，从"double"转换到"int"需要收缩转换
    //int x4{5.3};      //报错，从"double"转换到"int"需要收缩转换
    char c1{ 7 };   //不会报错也没有警告，虽然7是整型数，但是不属于收缩转换
    //char c2{ 9999 };    //报错，从"int"到"char"需要收缩转换
    std::vector<int> v1{ 1,2,4,5 }; //没啥毛病
    //std::vector<int> v2{ 1,2.3,4,5.6 }; //从"double"转换到"int"需要收缩转换
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
