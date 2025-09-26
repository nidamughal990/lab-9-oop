#include <iostream>
using namespace std;
class A{
	public:
	static int count;
	A(){
		count++;
	}
};
int A::count=0;

int main(){
	A a;
	A b;
	A c;
	cout<<"total object of the class created so far :"<<A::count<<endl;
	return 0;
}