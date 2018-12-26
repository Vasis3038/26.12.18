# 26.12.18
//Реализуйте решение непрерывной задачи о рюкзаке

#include <iostream>
#include <vector>

using namespace std;

  struct struc
 {
  int m;
  int c;
  int l;
 };

  int main()
{
    int N,M,mnum=0;
    int max=0;
    
    cin>>N>>M;
    vector <struc> ar(N);
        for(int i=0;i<N;i++)
        {
    
          cin>>ar[i].m>>ar[i].c;
          
          ar[i].l=ar[i].c/ar[i].m;
          if(ar[i].l>max)max=ar[i].l;

        }
        
    cout<<M*max;
    
    return 0;
}
