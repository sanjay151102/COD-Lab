#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char robotChk[10];
    int val;
    cin>>robotChk;
    val = strcmp("yes", robotChk);
    if(val==0)
        cout<<"You can't Proceed!";
    else
        cout<<"You're Welcome!";
    cout<<endl;
    return 0;
}
