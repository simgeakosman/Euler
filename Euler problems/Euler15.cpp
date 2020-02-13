//Euler15
#include <iostream>
using namespace std;

int main(){

  int  sayi,pay=1,payda=1,sonuc=1;

  cout << "Sayi giriniz: ";
  cin >> sayi;
  

  for (int i = 2; i <= 2*sayi; i++){
   pay *= i;
  }
   for (int i = 2; i <= sayi; i++){
   payda *= i;
  }
  payda*=payda;
  sonuc=pay/payda;
  cout<<sonuc;
  return 0;
}


