#include <iostream>
#include <cstring>
using namespace std;
class sosimple
{
private:
	int num;
public:
	sosimple(int n) :num(n)
	{
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;
	}
	void showsimpledata()
	{
		cout << num << endl;
	}
	sosimple* getthispointer()
	{
		return this;
	}

};
int main()
{
	sosimple sim1(100);
	sosimple* ptr1 = sim1.getthispointer();
	cout << ptr1 << ", ";
	ptr1->showsimpledata();
}