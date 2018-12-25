# 26.12.18
//Напишите программу, находящую в массиве такой элемент, что равные ему составляют в массиве - большинство. Если такого элемента нет - выведите “NO”

#include <iostream>

using namespace std;

 void qsort(int *A, int n)
 {
  int per =0;
  for (int l = 1; l < n; l++){
    for(int g = n-1; g>=l; g--)
    {
        if(A[g-1] > A[g])
        {
            per = A[g-1];
            A[g-1]=A[g];
            A[g]=per;
        }
    }
  }
 }

 void most(int*A, int n){
     int ans = 0;
     bool flag = 0;
     qsort( A,  n);
for (int i = 0; i<n/2; i++){
    if (A[i] = A[i+1]){
            int g = i;
        while (A[g] == A[g+1])
        {
        ans++;
        g++;
        }
         if (ans > (n/2))
         {
         cout << A[i];
         flag = 1;
         break;
         }
    }
}
if (flag == 0) cout << "NO!";
 }

int main()
{
  int n;
  cin >> n;
  int A[n];
  bool flag = 0;
  for(int i =0; i<n; i++)
  {
  cin >> A[i];
  }
most(A, n);
    return 0;
}
