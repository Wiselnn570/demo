#include <iostream>
using namespace std;

void swap(int*, int*);


int main()
{
	int a = 3;
	int b = 4;
	swap(&a,&b);
	cout << "a = " << a << "\n" << "b = " << b << endl;
	system("pause");
	return 0;

}
void swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}