#ifndef PERSONEL_H
#define PERSONEL_H
#include "computerEngineeringPerson.h"


class personel: public computerEngineeringPerson
{
    public:
        personel();
        virtual ~personel();
        void yaz() const;
        void personelEkle(string,string,string,double);
        string personelNoGonder();
    protected:
    string personelKodu;
    double maas;
    private:
};

#endif // PERSONEL_H
