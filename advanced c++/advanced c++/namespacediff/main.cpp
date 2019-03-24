#include<iostream>
#include "absoperation.h"
#include "operation.h"
using namespace std;
using namespace Operation;
using namespace AbsOperation;
int main()
{
	cout <<"using namespace Operation::Add   "<< Operation::Add(1, 2) << endl;
	cout << "using namespace Operation::Sub   " << Operation::Sub(5, 8) << endl;
	cout << "using namespace AbsOperation::Add   " << AbsOperation::Add(-1, -2) << endl;
	cout << "using namespace AbsOperation::Sub   " << AbsOperation::Sub(-1, -2) << endl;
	system("pause");
	return 0;
}

