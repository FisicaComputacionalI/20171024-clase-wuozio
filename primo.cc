//ROCIO FLORES HERNANDEZ
//CLASE DEL 24 DE OCTUBRE
//PROGRAMA QUE LEE UN NUMERO, TE DICE SI ES PRIMO O NO. EN DADO CASO DE QUE NO LO SEA TE DA SU DIVISOR.
#include <iostream>
using namespace std;
int main()
{
  long N=12;
  long flag=0;
  long divisor=0;

  cout<<"inserta un numero "<<endl;
  cin>> N;

  for (long i=2;i<=N/2;i++)
    {
      if (N%i==0){
	flag=1;
	divisor=i;
	break;
	}
    }
  if(flag==1){
    cout<<"tu numero no es primo "<<endl;
    cout<<"por que se divide entre "<<divisor<<endl;
  } 
  else
    cout<<" es primo"<<endl;
  return 0;
}
