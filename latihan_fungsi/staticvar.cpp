#include<iostream>
using namespace std;

void hitung(){
    static int total = 0;   //menggunakan static
    total++;
    cout<<"Nilai total = "<<total<<endl;

}

int main()
{
    hitung();
    hitung();
    hitung();
    hitung();

}
