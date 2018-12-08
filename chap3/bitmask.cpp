#include <iostream>
#include <bitset>
using namespace std;
//pool.ntp.org


int main() 
{
	int bit = 0b1111;  // 변수에 2진수값넣는방법 0b + 이진수
	int bit2 = 5;

	bitset<4> bits = 0b0000;	
	cout << bitset<8>(bit<<1) << endl;
	cout << bitset<8>(bit2) << endl;


	//비트셋으로 플레그 설정하기  & |  ^   플레그와 비트마스크

	const unsigned int item1 = 1<<0;
	const unsigned int item2 = 1<<1;
	const unsigned int item3 = 1<<2;
	const unsigned int item4 = 1<<3;

	unsigned char item_flag = 0;
	cout << bitset<4>(item_flag) << endl;;

	item_flag = item_flag | item1; //or 연산을하면 항상 1이된다.
	item_flag = item_flag ^ item1; //xor연산을 하면 스위치처럼 껏다켯다할수있다.
	item_flag = item_flag ^ item1;
	item_flag = item_flag & item1; //and연산 아이템을 가지고있는지 확인이 가능하다.
	//item_flag = item_flag ^ item1;

	cout << bitset<4>(item_flag) << endl;;

	if (bitset<4>(item_flag) == item1)//아이템을 가지고있는가?
		cout << "item1" << endl;
	else
		cout << "No item" << endl;

	

	int arr[5]={ 1,2,3,4,5 };
	int i, j;
	int cnt = 0;
	for (int i = 0; i< (1<< (5)); i++) 
	{
		for (int j = 0; j < 5; j++)
		{
			if (i&(1 << j))
			{
				cout << arr[j];
			}
		}
		cnt++;
		cout << endl;
	}
	cout << "부분집합의 수 : " << cnt << endl;
	

	return 0;
}