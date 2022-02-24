#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
float equ(float all, double st){
    return (st/all)*log2(st/all);
}
int main()
{
    int f1=0;int f2=0;int dd;
    double st,nd, st2, nd2,all,all2,n;
    float info,info2, r, nnd, sst, nnd2, sst2;
    cout<<"*******************************************"<<endl;
    cout<<"******* Done By - Mohammed K Jumaah *******"<<endl;
    cout<<"*******************************************"<<endl<<endl;
    cout<<"Enter count for 1st (CLASS) : ";
    cin>>st;
    cout<<"Ener count for 2nd (CLASS) : ";
    cin>>nd;
    all = st+nd;
    if(st > 0){
        sst = equ(all, st);
    }
    if(nd > 0){
        nnd = equ(all, nd);
    }
    info = -sst - nnd;
    cout<<"------------------------"<<endl;
    cout<<"Info(D) = ";
    cout<<fixed << setprecision(3) <<info<<endl;
    cout<<"------------------------"<<endl;
    cout<<endl<<"Enter count of Attributes: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        f1=0;f2=0;
        cout<<endl<<"Enter count for 1st Att: ";
        cin>>st2;
        cout<<"Enter count for 2nd Att: ";
        cin>>nd2;
        all2 = st2+nd2;
        if(st2 > 0){
            sst2 = equ(all2, st2);
        }else{
            f1++;
        }
        if(nd2 > 0){
            nnd2 = equ(all2, nd2);
        }else{
            f2++;
        }
        if(f1 == 0 && f2 == 0){
            r = (all2/all) * (-sst2 - nnd2);
        }else if(f1 > 0){
            r = (all2/all) * -nnd2;
        }else if(f2 > 0){
            r = (all2/all) * -sst2;
        }
        info2+=r;
        cout<<endl<<"Result = "<<fixed << setprecision(3) <<r<<endl;
    }
    cout<<endl<<"Info(Att) = "<<fixed << setprecision(3) <<info2<<endl;

    cout<<"*********************"<<endl;
    cout<<"Gain = "<<fixed << setprecision(3) <<info - info2<<endl;
    cout<<"*********************"<<endl;
    cout << "Enter any KEY to EXIT ... ";
    cin>>dd;
    return 0;
}
