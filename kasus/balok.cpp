#include <iostream>
using namespace std;
int main(){
    int panjang,lebar,tinggi,hasil;
    cout<<"silahkan input panjang balok:";
    cin>>panjang;
    cout<<"silahkan input lebar balok:";
    cin>>lebar;
    cout<<"silahkan input tinggi balok:";
    cin>>tinggi;

    hasil=panjang*lebar*tinggi;
    cout<<"volume balok di atas adalah :"<<hasil<<endl;
    cout<<"-----------------------------"<<hasil<<endl;
    return 0;
}