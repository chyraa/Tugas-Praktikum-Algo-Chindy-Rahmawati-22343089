#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main (){

    int daftar_lulus[3][3]={{20,40,90},{35,55,100},{100,150,300}};
    int i, j, total;


    //Menampilkan data kelulusan
    cout<<"DAFTAR  KELULUSAN "<<endl;
   cout << "===========================" << endl;
   cout << "  TI  PTI  PTE  TRSE" << endl; 
        for (i=0; i<=2; i++){
            cout<<"Th ke- "<<i+1 << endl;
            for (j=0; j<3; j++){
                cout<<setw(5)<<daftar_lulus[i][j]<<endl;
                total=total+daftar_lulus[i][j];
            }

    }
    cout<<"Jumlah yang lulus    = "<<total<<endl;
    cout<<"Rata-rata yang lulus = "<<total/(i*j)<<endl;
}
