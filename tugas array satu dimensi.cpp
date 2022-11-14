#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int bilPrima[5] = {1,3,5,7,11};
	int i;
	
	cout << "Menampilkan Bilangan Prima " << endl;
	cout << "===========================" << endl;
	for (i=0;i<5;i++){
		cout << "bilangan Prima ke-" << i+1 << endl;
		cout << bilPrima[i] << endl;
	}
	
	getch();
	return 0;
}
