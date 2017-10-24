//programa que sume los primeros N numeros naturales
//clase 24 de octubre
//ROCIO FLORES HERNANDEZ
#include <iostream>
using namespace std;
int main()
{
  int N;
  int sum=0;
  cout<<"dame un numero"<<endl;
  cin>> N;
  for(int i=1;i<=N;i++)
    { sum=sum+i;
	}
  cout<<"la suma de esos naturales es "<<sum<<endl;
  return 0;
}
