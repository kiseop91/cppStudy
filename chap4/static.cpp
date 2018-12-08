#include <iostream>
using namespace std;

static int val = 1; // 이 cpp파일에서만 전역변수선언

extern double gravity;  //외부선언

void doSomething()
{
	static int a=2; //스테틱변수는 처음한번에 선언된뒤에 재선언이되지않는다. 
	                //정적 변수 => 주소값을 일정하게만듬
	a++;
	cout << a << endl;
}
int main()
{
	doSomething();

	cout << gravity << endl;
	return 0;
}