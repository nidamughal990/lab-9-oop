#include <iostream>
using namespace std;
class A{
	public:
	static int count;
	A(){
		count++;
	}
	static void showcount(){
		cout<<"total objects created so far:"<<count<<endl;
	}
};
int A::count=0;
int main(){
	A a;
	A b;
	A c;
	A::showcount();
return 0;
}