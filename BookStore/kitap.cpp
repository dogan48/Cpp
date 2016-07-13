#include "kitap.h"

void kitap::kitapEkle(string Ad,double fiyat){
kitapAdi=Ad;
kitapFiyati=fiyat;
}
string kitap::returnKitapAdi(){
return kitapAdi;
}
kitap::kitap(){
kitapAdi="";
kitapFiyati=0;
}
double kitap::returnKitapFiyati(){
return kitapFiyati;
}
void kitap::printKitap(){
cout<<kitapAdi<<" "<<kitapFiyati<<"TL ";
}
