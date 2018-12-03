#include <iostream>
#include "mySpace.h"

using namespace std;


int main()
{
	cout << " Myspace1 :  " << Myspace1::doSumething(1, 2) << endl;
	cout << " Myspace2 :  " << Myspace2::doSumething(1, 2) << endl;
	cout << " none "<<"\t  : "<< doSumething(1, 2) << endl;

	return 0;
}