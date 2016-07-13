#include "personel.h"
#include <iostream>
using namespace std;

personel::personel()
{
    //ctor
}

personel::~personel()
{
    //dtor
}
void personel::yaz() const
{
cout<<personelKodu<<" "<<ad<<" "<<soyad<<" "<<maas<<"TL"<<endl;
}
string personel::personelNoGonder()
{
return personelKodu;
}
void personel::personelEkle(string pAd,string psAd,string pKodu,double pMaas)
{
ad=pAd;
soyad=psAd;
personelKodu=pKodu;
maas=pMaas;
}
