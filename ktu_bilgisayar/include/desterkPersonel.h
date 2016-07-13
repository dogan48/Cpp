#ifndef DESTERKPERSONEL_H
#define DESTERKPERSONEL_H
#include "computerEngineeringPerson.h"


class desterkPersonel: public computerEngineeringPerson
{
    public:
        desterkPersonel();
        virtual ~desterkPersonel();
         void personelEkle(string,string,string,double);
         string personelNoGonder();
        void yaz() const;
    protected:
        string destekPersonelKodu;
        double maas;
    private:
};

#endif // DESTERKPERSONEL_H
