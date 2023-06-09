#include <iostream>
using namespace std;
void mochila(float p[],float b[],float M){
  float *pt=p;
  float *bt=b;
  float be=0;
  float m=M;
  while(m>0){
    if(m-*pt>=0){
      m=m-*pt;
      be=be+*bt;
      pt++;
      bt++;
    }
    else {
      float res=(m / *pt) * (*bt);
      be=be+res;
      //be=be+((m / *p) * (*b) );
      m=-1;
    }
  }
  cout<<be<<endl;
}
int main() {

  float p[]={18,15,10};
  float b[]={25,24,15};
  mochila(p, b, 20);
  
}