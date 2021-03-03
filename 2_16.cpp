#include <iostream>
using namespace std;

class CDemo
{
public:
	CDemo(int ii = 0) :i(ii)
	{
		j = i;
		cout << j << endl;
	}
	static int Incr()
	{
		return ++j;
	}
private:
	int i;
	static int j;
};
int CDemo::j = 0;
int main(void)
{
	CDemo ab;
	cout << "ab=" << ab.Incr() << endl;
	cout << "j=" << CDemo::Incr() << endl;
	system("pause");
	return 0;
}