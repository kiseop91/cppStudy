/*
		18년 12월 03일 C++17환경에서 함수 리턴을 여러개 내보내는법.

		함수를 헤더파일과 씨피피파일로 나눠서 관리하는 법.
*/

#include <iostream>	
#include <tuple>
#include "calculate.h"
using namespace std;

tuple<int, int> my_func();

auto my_func2()    //cpp 17 에서는 auto를 사용하여 편하게 코딩이가능하다.
{
	return tuple(789, 123, 456, 4444); // 리턴에서도 데이터타입을 명시를 안해도 자동으로 인식한다.
}                                      // auto는 함수의 구현이 메인위에있어야 빌드가된다.

int main()
{
	tuple<int, int> result = my_func();
	cout << get<0>(result) << " " << get<1>(result) << endl;

	auto result2 = my_func2();
	cout << get<0>(result) << " " << get<1>(result) << endl;

	auto[a, b, c, d] = my_func2(); //auto의 편리함. 변수를 생성함과 동시에 할당이 가능함
	cout << a << " " << b << " " << c << " " << d << endl;



	cout << add(1, 2) << endl;
	cout << subtract(1, 2) << endl;
	cout << multi(1, 2) << endl;


	return 0;
}


tuple<int, int> my_func()  //튜플로 리턴할려면 튜플로 선언한 함수를 만들자.
{
	return tuple<int, int>(123, 123);
}