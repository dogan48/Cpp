#include "yazar.h"
#include <iostream>
using namespace std;
void yazar::yazarEkle(string ad,string soyad){
yazarAdi=ad;
yazarSoyadi=soyad;
}
yazar::yazar(){
yazarAdi="";
yazarSoyadi="";
}
string yazar::returnKitapYazari(){
return yazarAdi;
}
void yazar::printYazar(){
cout<<" "<<yazarAdi<<" "<<yazarSoyadi;
}
