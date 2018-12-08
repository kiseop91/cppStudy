#include <iostream>
#include <bitset>
using namespace std;
//pool.ntp.org


int main() 
{
	int bit = 0b1111;  // ������ 2�������ִ¹�� 0b + ������
	int bit2 = 5;

	bitset<4> bits = 0b0000;	
	cout << bitset<8>(bit<<1) << endl;
	cout << bitset<8>(bit2) << endl;


	//��Ʈ������ �÷��� �����ϱ�  & |  ^   �÷��׿� ��Ʈ����ũ

	const unsigned int item1 = 1<<0;
	const unsigned int item2 = 1<<1;
	const unsigned int item3 = 1<<2;
	const unsigned int item4 = 1<<3;

	unsigned char item_flag = 0;
	cout << bitset<4>(item_flag) << endl;;

	item_flag = item_flag | item1; //or �������ϸ� �׻� 1�̵ȴ�.
	item_flag = item_flag ^ item1; //xor������ �ϸ� ����ġó�� �����ִ��Ҽ��ִ�.
	item_flag = item_flag ^ item1;
	item_flag = item_flag & item1; //and���� �������� �������ִ��� Ȯ���� �����ϴ�.
	//item_flag = item_flag ^ item1;

	cout << bitset<4>(item_flag) << endl;;

	if (bitset<4>(item_flag) == item1)//�������� �������ִ°�?
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
	cout << "�κ������� �� : " << cnt << endl;
	

	return 0;
}