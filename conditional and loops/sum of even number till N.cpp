Problem
Result
Sum of Even Numbers till N
Send Feedback
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N

Output Format :
Required Sum 

Sample Input 1 :
 6

Sample Output 1 :
12

solution:
#include<iostream>
using namespace std;

int main()
{
    int N;
    // cout << "Enter the value of n: " << endl;
    cin >> N;
    int sum=0,i=1;
    while(i<=N){
        if(i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<< sum << endl;
}
