#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Friend
{
public:
	string name;
	string adress;
	int age;
	double weight;
	double height;

	void print() {
		cout << name << " " << age << " " << adress << " " 
			<< age << " " << weight << " " << height << endl;
	}
};

int main()
{
	Friend junsoo{"���ؼ�","����� ���ı� ����",28,55,170};

	vector<Friend> my_friend;
	my_friend.resize(2);
	my_friend[0]={ "���ؼ�","����� ���ı� ����",28,55,170 };
	my_friend[0].print();

	return 0;
}