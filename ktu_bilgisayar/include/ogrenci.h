#ifndef OGRENCİ_H
#define OGRENCİ_H
#include "computerEngineeringPerson.h"

class ogrenci: public computerEngineeringPerson
{
    public:
        ogrenci();
        virtual ~ogrenci();
         void personelEkle(string,string,string,double);
         string personelNoGonder();
        void yaz() const;
    protected:
    string ogrenciKodu;
    double burs;
    private:
};

#endif // OGRENCİ_H
