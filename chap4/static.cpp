#include <iostream>
using namespace std;

static int val = 1; // �� cpp���Ͽ����� ������������

extern double gravity;  //�ܺμ���

void doSomething()
{
	static int a=2; //����ƽ������ ó���ѹ��� ����ȵڿ� �缱���̵����ʴ´�. 
	                //���� ���� => �ּҰ��� �����ϰԸ���
	a++;
	cout << a << endl;
}
int main()
{
	doSomething();

	cout << gravity << endl;
	return 0;
}