#include "cashRegister.h"
#include <iostream>
using namespace std;
double cashRegister::cashInOut(double giris){
cashOnHand+=giris;

}
double cashRegister::returnCash(){
return cashOnHand;

}
cashRegister::cashRegister(){
cashOnHand=30.0;

}
