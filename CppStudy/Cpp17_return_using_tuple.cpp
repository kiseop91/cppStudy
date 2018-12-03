/*
		18�� 12�� 03�� C++17ȯ�濡�� �Լ� ������ ������ �������¹�.
*/

#include <iostream>	
#include <tuple>
using namespace std;

tuple<int, int> my_func()  //Ʃ�÷� �����ҷ��� Ʃ�÷� ������ �Լ��� ������.
{

	return tuple<int,int>(123, 123);
}

auto my_func2()    //cpp 17 ������ auto�� ����Ͽ� ���ϰ� �ڵ��̰����ϴ�.
{

	return tuple(789, 123, 456, 4444); // ���Ͽ����� ������Ÿ���� ��ø� ���ص� �ڵ����� �ν��Ѵ�.
}

int main()
{
	tuple<int, int> result = my_func();
	cout << get<0>(result) << " " << get<1>(result) << endl;

	auto result2 = my_func2();
	cout << get<0>(result) << " " << get<1>(result) << endl;

	auto[a, b, c, d] = my_func2(); //auto�� ����. ������ �����԰� ���ÿ� �Ҵ��� ������
	cout << a << " " << b << " " << c << " " << d << endl;

	return 0;
}