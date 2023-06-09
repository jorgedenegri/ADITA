#include <iostream>
using namespace std;

void cambio(int m[],int pago, int precio,int t){
  int *p=m+(t-1);
  int np= pago-precio;
  while(np>0){
    if(np-*p>=0){
      np=np-*p;
      cout<<*p<<endl;
    }
    else{
      p--;
    }
    
  }

}

int main() {
  //int m[]={1,2,5,10,20,50};
  int m[]={1,90,100};
  int t=sizeof(m)/sizeof(m[0]);
  cambio(m,181,1,t);
  //cout<<sizeof(m)/sizeof(m[0]);
}