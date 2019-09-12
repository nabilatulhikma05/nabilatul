#include <iostream>
using namespace std;

int main() {
	int a=5; 
	int *b;
	b = &a;
	cout<<"NIlai Variabel a adalah "<<a<<endl;
	cout<<"Alamat Variabel a adalah "<<b<<endl;
	cout<<"Isi dari variabel b adalah "<<b<<endl;
	cout<<"Nilai yang tertampung dalam variabel b adalah "<<*b<<endl;
	
	return 0;
}
