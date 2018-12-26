# 26.12.18
//Напишите программу, находящую k-ую порядковую статистику. Программа должна работать за время O(n) в среднем.

#include <iostream>

using namespace std;


 int stat(int *A, int n, int key)
 {
     int B[n][2];
     B[0][1]=1;
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
  for (int i = 0; i<n; i++)
  {
      B[i][0] = A[i];

  }

  for(int i = 1; i < n; i++)
  {


          if(B[i][0]==B[i-1][0]) B[i][1]=B[i-1][1];
          else B[i][1] = B[i-1][1]+1;


  }

    int left = 0, right = n, mid, ans;
    bool flag = 0;
    while (left<=right)
    {
        mid = left+(right-left)/2;
        if (key == B[mid][1]){ans = B[mid][0]; flag =1; break;}
        else if (key < B[mid][1]){right = mid - 1;}
        else if (key > B[mid][1]) left = mid + 1;
    }
    if (flag == 1) return ans;

 }

int main()
{
    int n, key;
cin >> n;
  int arr[n];
  for (int i = 0; i<n; i++)
  {
      cin >> arr[i];
  }
  cin >> key;
  cout << stat(arr, n, key);
    return 0;
}
