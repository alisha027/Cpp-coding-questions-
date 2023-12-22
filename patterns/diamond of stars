Problem
Result
Code : Diamond of stars
Send Feedback
Print the following pattern for the given number of rows.
Note: N is always odd.




Pattern for N = 5




The dots represent spaces.





Input format :
N (Total no. of rows and can only be odd)

Output format :
Pattern in N lines

Constraints :
1 <= N <= 49

Sample Input 1:
5

Sample Output 1:
  *
 ***
*****
 ***
  *

Sample Input 2:
3

Sample Output 2:
  *
 ***
  *


solution ::


  #include<iostream>
using namespace std;
int main()
{
     int i,j,r;

    cin>>r;
   for(i=1;i<=(r+1)/2;i++)
   {
     for(j=1;j<=((r+1)/2-i);j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
   for(i=(r-1)/2;i>=1;i--)
   {
     for(j=1;j<=i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;;
   }
}
