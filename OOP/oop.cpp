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
	Friend junsoo{"강준수","서울시 송파구 개롱",28,55,170};

	vector<Friend> my_friend;
	my_friend.resize(2);
	my_friend[0]={ "강준수","서울시 송파구 개롱",28,55,170 };
	my_friend[0].print();

	return 0;
}