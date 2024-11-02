#include<iostream>
using namespace std;
struct vv
{

	int x1;
	int x2;
};
class souifer
{
private:
	int x;
	int y;


public:
	void take_x()
	{
		x =15;

	}
	int get_x()
	{
		return x;

	}
	void set_y()
	{
		y = 23;

	}
	int get_y()
	{

		return y;
	}
};
int main()
{
	vv v1;
	
	souifer s;
	s.take_x();
	s.set_y();
	v1.x1 = 12;
	cout << v1.x1 << endl;
	cout << s.get_x() << endl;
	cout << s.get_y()<< endl;
	cout << s.get_y()+ s.get_x()+v1.x1 << endl;
	
	
	return 0;


}