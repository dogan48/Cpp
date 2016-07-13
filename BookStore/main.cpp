#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include "kitap.h"
#include "cashRegister.h"

using namespace std;
void showSelection ();
int arama(int,int);
double satinAlma(int);

kitap kitaplik[10000];
cashRegister musteri;

int main(){
    cashRegister();
    kitap();
    int kitapSayisi,choice,satinAlinacak,aramaTuru;
    string kAdi,yAdi,ySoyadi;
    double kFiyati,kasayaEklenecek;
    ifstream infile;
	ofstream outfile;

    infile.open("liste.txt");

    if(!infile)
	{
	   cout<<"Kitap Listesi Bulunamadı"
  		 <<"Program Kapatılıyor..."<<endl;
   	   return 1;
	}
	infile>>kitapSayisi;
	for(int i=0;i<kitapSayisi;i++){
        infile>>kAdi>>kFiyati>>yAdi>>ySoyadi;
        kitaplik[i].kitapEkle(kAdi,kFiyati);
        kitaplik[i].yazarEkle(yAdi,ySoyadi);

	}
   showSelection();

    cin >> choice;
     while (choice != 9) {
       switch (choice ) {
          case 1:
              cout<<"Kitaplar:"<<endl;
              for(int j=0;j<kitapSayisi;j++){
                    cout<<j+1<<" ";
                    kitaplik[j].printKitap();

                    cout<<endl;
                    }
                cout<<"Satın Almak İstediğiniz Kitabın Numarasını Yazınız : ";
                cin>>satinAlinacak;
               if(satinAlinacak>0 and satinAlinacak<=kitapSayisi){
                satinAlma(satinAlinacak);
                cout<<endl;}
                else cout<<"Yanlış Seçim Yaptınız..."<<endl;
                break;
          case 2:
                cout<<"Yazarlar:"<<endl;
              for(int j=0;j<kitapSayisi;j++){
                    cout<<j+1<<" ";
                    kitaplik[j].printYazar();
                    cout<<"  ";
                    kitaplik[j].printKitap();
                    cout<<endl;
                    }
                cout<<"Satın Almak İstediğiniz Kitabın Numarasını Yazınız : ";
                cin>>satinAlinacak;
                if(satinAlinacak>0 and satinAlinacak<=kitapSayisi){
                satinAlma(satinAlinacak);
                cout<<endl;}
                else cout<<"Yanlış Seçim Yaptınız..."<<endl;
                break;
          case 3:
            cout<<"Tüm Liste:"<<endl;
               for(int j=0;j<kitapSayisi;j++){
                    cout<<j+1<<" ";
                    kitaplik[j].printKitap();
                    cout<<"  ";
                    kitaplik[j].printYazar();
                    cout<<endl;
                    }
                cout<<"Satın Almak İstediğiniz Kitabın Numarasını Yazınız : ";
                cin>>satinAlinacak;
                if(satinAlinacak>0 and satinAlinacak<=kitapSayisi){
                satinAlma(satinAlinacak);
                cout<<endl;}
                else cout<<"Yanlış Seçim Yaptınız..."<<endl;
                break;
        case 4:
            cout<<"Kitaba göre aramak için 1 e,"<<endl<<"Yazara göre aramak için 2 ye basınız : ";
            cin>>aramaTuru;
            arama(aramaTuru,kitapSayisi);

            break;
        case 5:
            cout<<"Mevcut Bakiyeniz : "<<musteri.returnCash()<<"TL"<<endl;
            cout<<"Kasaya Eklemek İstediğiniz Miktarı Giriniz : ";
            cin>>kasayaEklenecek;
            musteri.cashInOut(kasayaEklenecek);
            cout<<"Yeni Bakiyeniz : "<<musteri.returnCash()<<"TL"<<endl<<endl;
            break;
        default:
            cout<<"Geçersiz Seçim Yaptınız..."<<endl;
            break;

         }
    showSelection();
    cin >> choice;
}


      return 0;
}
int arama(int aramaTuru,int kitapSayisi){
string aranacakKelime,S;
int satinAlinacak;
bool bulundu=0;
if(aramaTuru==1){
            cout<<"Aramak istediğiniz kitap : ";
            cin>>aranacakKelime;
            transform(aranacakKelime.begin(), aranacakKelime.end(), aranacakKelime.begin(), ::tolower);
             //__________________________________________________________________

              cout<<"Kitaplar:"<<endl;
              for(int j=0;j<kitapSayisi;j++){
              S=kitaplik[j].returnKitapAdi();
              transform(S.begin(), S.end(), S.begin(), ::tolower);
                if(aranacakKelime==S){
                    cout<<j+1<<" ";
                    kitaplik[j].printKitap();
                    cout<<"  ";
                    kitaplik[j].printYazar();
                    cout<<endl;
                    bulundu=1;
                    }
                    }
                if(bulundu){

                cout<<"Satın Almak İstediğiniz Kitabın Numarasını Yazınız : ";
                cin>>satinAlinacak;
                if(satinAlinacak>0 and satinAlinacak<=kitapSayisi){
                satinAlma(satinAlinacak);
                cout<<endl;}
                else cout<<"Yanlış Seçim Yaptınız..."<<endl;
                }
                else{
                cout<<"Aradığınız Kitap Elmizde Bulunmamaktadır..."<<endl;
                return 0;}

            //_________________________________________________________________

            }
            else
             if(aramaTuru==2){
            cout<<"Aramak istediğiniz yazar : ";
            cin>>aranacakKelime;
            transform(aranacakKelime.begin(), aranacakKelime.end(), aranacakKelime.begin(), ::tolower);
//__________________________________________________________________

              cout<<"Yazarlar:"<<endl;
              for(int j=0;j<kitapSayisi;j++){
              S=kitaplik[j].returnKitapYazari();
              transform(S.begin(), S.end(), S.begin(), ::tolower);
                if(aranacakKelime==S){
                    cout<<j+1<<" ";
                    kitaplik[j].printYazar();
                    cout<<"  ";
                    kitaplik[j].printKitap();
                    cout<<endl;
                    bulundu=1;
                    }
                    }
                if(bulundu){

                cout<<"Satın Almak İstediğiniz Kitabın Numarasını Yazınız : ";
                cin>>satinAlinacak;
                if(satinAlinacak>0 and satinAlinacak<=kitapSayisi){
                satinAlma(satinAlinacak);
                cout<<endl;}
                else cout<<"Yanlış Seçim Yaptınız..."<<endl;
                }
                else{
                cout<<"Aradığınız Yazara Ait Kitap Elmizde Bulunmamaktadır..."<<endl;
                return 0;}

            //_________________________________________________________________



}
}
void showSelection () {
  cout << "____________________|Book Store|____________________" << endl;
  cout << "*||* Kitap listesi icin 1 e," << endl;
  cout << "*||* Yazar listesi icin 2 ye," << endl;
  cout << "*||* Tum liste ve Satin Alma icin 3 e, " << endl;
  cout << "*||* Arama Yapmak İçin 4 e, "<<endl;
  cout << "*||* Para Eklemek İçin 5 e, "<<endl;
  cout << "*||* Cikmak icin 9 a Basınız." << endl;
}
double satinAlma(int talep){
int onay,basariliSatis=0;
double paraGir;

kitaplik[talep-1].printKitap();
cout<<"Satın Almak için 1 e basınız : ";
cin>>onay;
while(!basariliSatis){
    if(onay==1){
        if(musteri.returnCash()>=kitaplik[talep-1].returnKitapFiyati()){
            musteri.cashInOut(-1*(kitaplik[talep-1].returnKitapFiyati()));

            cout<<"Para Üstünüz : "<<musteri.returnCash()<<"TL, Yine Bekleriz...";
            basariliSatis=1;
        }
        else{

            cout<<"Paraniz yetmiyor ";
            cout<<kitaplik[talep-1].returnKitapFiyati()-musteri.returnCash();
            cout<<" TL daha verin : ";
            cin>>paraGir;
            musteri.cashInOut(paraGir);
            }
        }
        else return 0;
    }
}

