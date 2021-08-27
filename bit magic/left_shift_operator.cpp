// Left shift (<<) operator -> takes two args first one the number to be shifted and second one by how much 

#include <iostream>
using namespace std;

int main() {
	int x = 3;
	cout<<(x << 1)<<endl;
	cout<<(x << 2)<<endl;
	int y = 4;
	int z = x << y;
	cout << z << endl;
	return 0;
}