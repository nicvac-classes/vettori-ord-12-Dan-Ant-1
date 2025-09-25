#include <iostream>
using namespace std;

int main() {
int n,i,j,t;
cout<<"Quante cifre vuoi?" << endl;
cin>>n;
<vector> int v[n];
i=0;
while (i<n)
{
   v[i]=rand ()n*10;
   i=i+1;
}
i=0;
t=0;
while (i<n)
{
   j=0;
   while (j<=n-2)
   {
    if (v[j]>v[j+1])
    {
       t=v[j];
       v[j]=v[j+1];
       v[j+1]=t;
    }
    j=j+1;
    
   }
   cout<<v[i]<<endl;
   i=i+1;
   
}


}


