#include <iostream>
#include <math.h>
#include <iomanip>
#include "sum_cdi.h"
using namespace std;

int main(int argc,char** argv)
{
    long long int mynmb;
    long long int first=1;
    long long int rst;
    long long int frst;
    int tms=0;

    cout<<"enter ur number , enter times :\n";
    mynmb=stoll(argv[1]);
    tms=stoi(argv[2]);
    rst=first+mynmb;
    sum_cdi *smcd=new sum_cdi();
    smcd->cdi=0;
    cout<<first << " + " << mynmb << " ::== " << rst << " with " << smcd->cdis(rst,0) <<"\n";
    for(int i=0;i<=tms;i++){
     frst=rst+rst;
     smcd->cdi=0;
     cout<<rst << " + " << rst << " ::== " << frst << " or *2 with " << smcd->cdis(frst,0) <<"\n";
     rst=frst;
     if(smcd->cdis(frst,0)==4){cout<<"\n";}
    }
    return 0;
}
