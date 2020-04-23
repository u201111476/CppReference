#pragma once

namespace ch3
{
	void f(int);
	void f(void*);
    void print(std::initializer_list<int> vals);
    class P
    {
    public:
        P();
        P(const P&);
        P(P&&);
        P(int, int);
        P& operator=(P&&);
        explicit P(std::initializer_list<int>);
        explicit P(int a, int b, int c);
    };


	void test();
}
