#ifndef _CASH_H_
#define _CASH_H_

class cashRegister{
    public:
    cashRegister();
    double cashInOut(double giris);
    double returnCash();

    private:
        double cashOnHand;
};
#endif
