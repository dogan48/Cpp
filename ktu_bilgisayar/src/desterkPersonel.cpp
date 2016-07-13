#include "desterkPersonel.h"
#include "computerEngineeringPerson.h"

desterkPersonel::desterkPersonel()
{
    //ctor
}

desterkPersonel::~desterkPersonel()
{
    //dtor
}
void desterkPersonel::yaz() const
{
cout<<destekPersonelKodu<<" "<<ad<<" "<<soyad<<" "<<maas<<"TL"<<endl;
}
string desterkPersonel::personelNoGonder()
{
return destekPersonelKodu;
}
void desterkPersonel::personelEkle(string dpAd,string dpsAd,string dpKodu,double dpMaas)
{
ad=dpAd;
soyad=dpsAd;
destekPersonelKodu=dpKodu;
maas=dpMaas;
}
