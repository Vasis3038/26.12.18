# 26.12.18
//Напишите программу позволяющую эффективно проверять принадлежность пары значений массиву. Например, пара (2,3) принадлежит массиву [1,2,3,5,7,11,13,17], а пара (3,4) - нет. Можно считать, что количество запросов многократно превышает размер массива



#include <iostream>

using namespace std;
 void qsort(int *A, int n)
 {
  int per =0;
  for (int l = 1; l < n; l++)
  {
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
bool Bin(int A[], int n, int key)
{
    int left = 0, right = n, mid;
    bool flag = 0;
    while (left<=right)
    {

        mid =left+(right-left)/2;
        if (key == A[mid]){flag =1; break;}
        else if (key < A[mid]){right = mid - 1;}
        else if (key > A[mid]) left = mid + 1;
    }
    return flag;
}


int main()
{
    int n, x, y;
    bool flagx = 0, flagy = 0;
    cin >> n;
  int arr[n];
  for (int i = 0; i<n; i++)
  {
      cin >> arr[i];
  }
   qsort(arr, n);
    cin >> x;
   cin >> y;

   flagx= Bin(arr, n, x);
   flagy= Bin(arr, n, y);

if( flagx == 1 && flagy == 1) cout <<"YES";
else cout << "NO";
    return 0;
}
