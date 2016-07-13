#include <iostream>
#include <fstream>
#include "computerEngineeringPerson.h"
#include "personel.h"
#include "desterkPersonel.h"
#include "ogrenci.h"
#include "malzeme.h"
#include "labEkipman.h"
#include "ogretimEkipman.h"
using namespace std;
void secimEkrani();
int personelYukle();

void personelListele();
void destekPersonelListele();
void ogrenciListele();

void ogretimMalzemeListele();
void labMalzemeListele();

int personelEkle(string,string,string,double);
int personelSil(int);

int malzemeEkle(string,string,string);

personel personeller[100];
ogrenci ogrenciler[100];
desterkPersonel dPersoneller[100];

computerEngineeringPerson *pPersoneller[100];
computerEngineeringPerson *pdPersoneller[100];
computerEngineeringPerson *pOgrenciler[100];

malzeme *plabMalzemeler[100];
malzeme *pOgretimMalzemeler[100];



labEkipman labEkipmanlari[100];
ogretimEkipman ogretimEkipmanlari[100];

int main()
{
    int secim;
    string a,b,c;
    double d;
    bool geri=1;


    secimEkrani();

    while(secim != 9)
    {
        cin>>secim;
        switch (secim)
        {
            case 1:
                personelListele();
                cout<<"Geri Dönmek İçin 0'a basınız :";
                cin>>geri;
                if(!geri)
                {

                    secimEkrani();
                    break;

                }
            case 2:
                cout<<"Eklemek istediğiniz personelin,\nAd Soyad Kod (P ile Başlayan) ve Maaş bilgilerini \naralarında bir boşlukla yazınız:";
                cin>>a>>b>>c>>d;
                personelEkle(a,b,c,d);
                cout<<"Geri Dönmek İçin 0'a basınız :";
                cin>>geri;
                if(!geri)
                {
                    secimEkrani();
                    break;

                }
                case 3:
                destekPersonelListele();
                cout<<"Geri Dönmek İçin 0'a basınız :";
                cin>>geri;
                if(!geri)
                {

                    secimEkrani();
                    break;

                }

            case 4:
               cout<<"Eklemek istediğiniz destek personelinin,\nAd Soyad Kod (D ile Başlayan) ve Maaş bilgilerini \naralarında bir boşlukla yazınız:";
                cin>>a>>b>>c>>d;
                personelEkle(a,b,c,d);
                cout<<"Geri Dönmek İçin 0'a basınız :";
                cin>>geri;
                if(!geri)
                {
                    secimEkrani();
                    break;

                }
            case 5:
                ogrenciListele();
                cout<<"Geri Dönmek İçin 0'a basınız :";
                cin>>geri;
                if(!geri)
                {
                    secimEkrani();
                    break;

                }
              case 6:
                    cout<<"Eklemek istediğiniz ogrencinin,\nAd Soyad Kod (O ile Başlayan) ve Burs bilgilerini \naralarında bir boşlukla yazınız:";
                    cin>>a>>b>>c>>d;
                    personelEkle(a,b,c,d);
                    cout<<"Geri Dönmek İçin 0'a basınız :";
                    cin>>geri;
                    if(!geri)
                    {
                        secimEkrani();
                        break;

                    }
                case 7:
                    labMalzemeListele();
                    cout<<"Geri Dönmek İçin 0'a basınız :";
                    cin>>geri;
                    if(!geri)
                    {
                        secimEkrani();
                        break;

                    }
                case 8:
                    ogretimMalzemeListele();
                    cout<<"Geri Dönmek İçin 0'a basınız :";
                    cin>>geri;
                    if(!geri)
                    {
                        secimEkrani();
                        break;

                    }
                 case 9:
                    cout<<"Eklemek istediğiniz Malzemenin,\nAd Tur ve DemirbaşKodu (lab ekipmanlarını Kodu 'L' ogretim ekipmanları Kodu 'O' ile Başlar)\naralarında bir boşlukla yazınız:";
                    cin>>a>>b>>c;
                    malzemeEkle(a,b,c);
                    cout<<"Geri Dönmek İçin 0'a basınız :";
                    cin>>geri;
                    if(!geri)
                    {
                        secimEkrani();
                        break;

                    }
                case -1:
                    return 1;
                default:
                    cout<<"Yanlış Seçim Yaptınız..."<<endl<<endl;
                    secimEkrani();
                    break;
        }

    }

    return 0;
}
int sayac1,sayac2,sayac3;
int personelYukle(){
    string personelAdi,personelSoyadi,personelNo,b;
    double aldigiUcret;

    fstream oku;
    oku.open("personelListesi.txt");
    if(!oku)
    {
        cout<<"Personel Listesi Yok";
        return 1;
    }
sayac1=0;
sayac2=0;
sayac3=0;
    while(personelAdi!="-1")
    {
        oku>>personelAdi>>personelSoyadi>>personelNo>>aldigiUcret;
        if(personelAdi=="-1")  break;

        if(personelAdi!="SLNMS")
        {
            b=personelNo;
            b=b[0];
            if(b=="P")
            {
                pPersoneller[sayac1] = &personeller[sayac1];
                pPersoneller[sayac1]->personelEkle(personelAdi,personelSoyadi,personelNo,aldigiUcret);
                sayac1++;
            }
            if(b=="D")
            {
                pdPersoneller[sayac2] = &dPersoneller[sayac2];
                pdPersoneller[sayac2]->personelEkle(personelAdi,personelSoyadi,personelNo,aldigiUcret);
                sayac2++;
            }
            if(b=="O")
            {
                pOgrenciler[sayac3] = &ogrenciler[sayac3];
                pOgrenciler[sayac3]->personelEkle(personelAdi,personelSoyadi,personelNo,aldigiUcret);
                sayac3++;
            }
        }

    }
    oku.close();
}

int personelEkle(string a,string b,string c,double d)
{
    string okunan;
  personelYukle();
    fstream oku;
    oku.open("personelListesi.txt");
    if(!oku)
    {
        cout<<"Personel Listesi Yok";
        return 1;
    }
    for(int i=0;i<sayac1+sayac2+sayac3;i++)
    {
        oku>>okunan>>okunan>>okunan>>okunan;
    }
    oku<<endl<<a<<" "<<b<<" "<<c<<" "<<d<<endl<<"-1"<<endl;
    oku.close();

    cout<<"Personel Eklendi"<<endl;

    }

int personelSil(int silinecek)
{
    string deger1,deger2,deger3;
    double deger4;
    fstream oku;
    oku.open("personelListesi.txt");
    if(!oku)
    {
        cout<<"Personel Listesi Yok";
        return 1;
    }

    for(int i=0;i<silinecek;i++,oku>>deger1>>deger2>>deger3>>deger4)
    {

        oku<<"SLNMS";
    }
}
void personelListele()
{
   personelYukle();

    for(int i=0;i<sayac1;i++)
    {
           cout<<i+1<<" ";
           pPersoneller[i]->yaz();

    }
}
void destekPersonelListele()
{
   personelYukle();

    for(int i=0;i<sayac2;i++)
    {
           cout<<i+1<<" ";
           pdPersoneller[i]->yaz();

    }
}
void ogrenciListele()
{
   personelYukle();

    for(int i=0;i<sayac3;i++)
    {
           cout<<i+1<<" ";
           pOgrenciler[i]->yaz();

    }
}

void secimEkrani()
{
  cout <<endl<< "*********KTU BILGISAYAR*********" << endl;
  cout << "1 Personel Listele"<< endl;
  cout << "2 Personel Ekle"<< endl;
  cout << "3 Destek Personel Listele"<<endl;
  cout << "4 Destek Personel Ekle"<<endl;
  cout << "5 Ogrenci Listele"<<endl;
  cout << "6 Ogrenci Ekle"<<endl;
  cout << "7 labaratuar Malzeme Listele"<<endl;
  cout << "8 Ogretim Malzeme Listele"<<endl;
  cout << "9 Malzeme Ekle"<<endl;
  cout << "-1 Çıkış" << endl;
}

int labSay,OgretimSay;
int malzemeYukle(){
    string malzemeAdi,malzemeTuru,malzemeNo,c;


    fstream oku;
    oku.open("malzemeListesi.txt");
    if(!oku)
    {
        cout<<"Malzeme Listesi Yok";
        return 1;
    }
labSay=0;
OgretimSay=0;
    while(malzemeAdi!="-1")
    {
        oku>>malzemeAdi>>malzemeTuru>>malzemeNo;
        if(malzemeAdi=="-1")  break;

            c=malzemeNo;
            c=c[0];
            if(c=="L")
            {
            plabMalzemeler[labSay]=&labEkipmanlari[labSay];
            plabMalzemeler[labSay]->malzemeEkle(malzemeAdi,malzemeTuru,malzemeNo);
            labSay++;
            }

            if(c=="O")
            {
            pOgretimMalzemeler[OgretimSay]=&ogretimEkipmanlari[OgretimSay];
            pOgretimMalzemeler[OgretimSay]->malzemeEkle(malzemeAdi,malzemeTuru,malzemeNo);
            OgretimSay++;
            }
        }


    oku.close();
}
void labMalzemeListele()
{
   malzemeYukle();

    for(int i=0;i<labSay;i++)
    {
           cout<<i+1<<" ";
           plabMalzemeler[i]->malzemeYaz();


    }
}
void ogretimMalzemeListele()
{
   malzemeYukle();

    for(int i=0;i<OgretimSay;i++)
    {
           cout<<i+1<<" ";
           pOgretimMalzemeler[i]->malzemeYaz();


    }
}

int malzemeEkle(string a,string b,string c)
{
    string okunan;
   malzemeYukle();
    fstream oku;
    oku.open("malzemeListesi.txt");
    if(!oku)
    {
        cout<<"Malzeme Listesi Yok";
        return 1;
    }
    for(int i=0;i<labSay+OgretimSay;i++)
    {
        oku>>okunan>>okunan>>okunan;
    }
    oku<<endl<<a<<" "<<b<<" "<<c<<endl<<"-1";
    oku.close();

    cout<<"Malzeme Eklendi"<<endl;


    }
