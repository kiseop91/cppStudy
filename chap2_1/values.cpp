#include <iostream>
#include <bitset>
#include <cstdint>  // 고정너비변수 fixed_width_integer
using namespace std;

int main()
{
	int i = 1;
	int j = 3;
	int k = -2;
	char a = 'H';
	long long llk = 12323213213213213;

	int uniform_initialization[3]{ 1,2,3 };   // 변수선언의 다양한 방법들.
	int direct_initialization(1123);

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;
	cout << (uintptr_t)static_cast<void*>(&k) << endl;
	cout << (uintptr_t)static_cast<void*>(&llk) << endl;
	cout << sizeof(llk) << endl;

	int16_t int16(5);
	int8_t charator(65); //내부적으로보면 케릭터이다.
	int_fast32_t fastint(123);  //32비트에서 가장빠른
	int_least16_t leastint(32132); //적어도 16비트

	return 0;
}