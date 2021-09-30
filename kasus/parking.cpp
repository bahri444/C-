#include <iostream>
using namespace std;
int main(){
    int masuk,keluar,total_jam,bayar;
    cout<<"input jam masuk parkir :";
    cin>>masuk;
    cout<<"input jam keluar parkir :";
    cin>>keluar;
    if (keluar>masuk)
    {
        total_jam=keluar-masuk;
    }else { 
        total_jam= (keluar+12)-masuk;
    }
    for (int i = 1; i <= total_jam; i+=2)
    {
        bayar=total_jam*1000+4000;
    }
    for (int i = 2; i <= total_jam; i+=2)
    {
        bayar=total_jam*1000+4000;
    }
    cout<<endl;
        cout<<"anda parkir selama "<<total_jam<<"jam"<<endl;
    cout<<endl;
        cout<<"maka anda harus membayar Rp."<<bayar<<endl;
}