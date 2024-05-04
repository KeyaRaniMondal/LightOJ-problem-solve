//  #include<bits/stdc++.h>
// using namespace std;

// //long long sum[100000002];
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         long long num,n,l,r,n1,count=0;
//         scanf("%lld %lld",&l,&r);
//         if(l==r && l&1)
//           printf("%lld\n",l);
//           else
// {        num=(ceil)((l+r)/2);
// cout<<num<<" ";
// n=num;
//         if(n!=0 && n&1)
//         {

//             n--;
// count++;
//         }
//         n1=n+1;
//                 if(n1<=r && n1&1)
//         {

//             n1++;
// count++;
//         }

//        printf("%lld\n",count);}
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long num, n, l, r, n1, count = 0;
        scanf("%lld %lld", &l, &r);
        n = l + r;
        if (l % 2 == 0 && r % 2 == 0)
            cout << n / 2 - l << endl;
        else
            cout << (n / 2) + 1 - l << endl;
    }
}
