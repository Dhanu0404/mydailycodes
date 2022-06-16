#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n,k;
      cin >> n >> k;
      int a[n],b[2];
      for (int i = 0;i < n; i++)
      {
         cin >> a[i];
      }
      sort(a, a + n);

      int d=0;
      for (int i = 0;i < n; i++)
      {
         int l = 1;
         for (int j = i + 1; j < n; j++)
         {
            if (a[i] == a[j])
            {
               l++;
            }
         }
         if(l>=k){b[d]=a[i];d++;}
      }
      if(b[1]<=1000000 && b[2]<=1000000){cout<<b[1]<<' '<<b[2]<<endl;}
      else {cout<<-1<<endl;}
   }

   return 0;
}
