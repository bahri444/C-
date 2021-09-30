#include <iostream>
using namespace std;
int main(){
    int masuk,pulang,hasil;
    cout<<"input jam kerja anda :";
    cin>>masuk;
    cout<<"input jam pulang anda :";
    cin>>pulang;
    if (pulang>masuk)
    {
        hasil=pulang-masuk;
    }else
    {        
        hasil= (pulang+12)-masuk;
    }    
        cout<<"anda kerja selama "<<hasil<<"jam"<<endl;    
}
