#include<bits/stdc++.h>
using namespace std;
int main(){
    int deg,dis;
    cin>>deg>>dis;
    string dir;
    int count=0;
    double sp;
    deg-=112;
    while(deg>0){
        deg-=225;
        count++;
    }
    switch(count){
        case 0  :dir="N";break;
        case 1  :dir="NNE";break;
        case 2  :dir="NE";break;
        case 3  :dir="ENE";break;
        case 4  :dir="E";break;
        case 5  :dir="ESE";break;
        case 6  :dir="SE";break;
        case 7  :dir="SSE";break;
        case 8  :dir="S";break;
        case 9  :dir="SSW";break;
        case 10 :dir="SW";break;
        case 11 :dir="WSW";break;
        case 12 :dir="W";break;
        case 13 :dir="WNW";break;
        case 14 :dir="NW";break;
        case 15 :dir="NNW";break;
        default :dir="N";
    }
    sp=dis/60.0;
    if(0<=sp&&sp<0.25) cout<<"C 0"<<endl;
    else if(0.25<=sp&&sp<1.55) cout<<dir<<" 1"<<endl;
    else if(1.55<=sp&&sp<3.35) cout<<dir<<" 2"<<endl;
    else if(3.35<=sp&&sp<5.45) cout<<dir<<" 3"<<endl;
    else if(5.45<=sp&&sp<7.95) cout<<dir<<" 4"<<endl;
    else if(7.95<=sp&&sp<10.75) cout<<dir<<" 5"<<endl;
    else if(10.75<=sp&&sp<13.85) cout<<dir<<" 6"<<endl;
    else if(13.85<=sp&&sp<17.15) cout<<dir<<" 7"<<endl;
    else if(17.15<=sp&&sp<20.75) cout<<dir<<" 8"<<endl;
    else if(20.75<=sp&&sp<24.45) cout<<dir<<" 9"<<endl;
    else if(24.45<=sp&&sp<28.45) cout<<dir<<" 10"<<endl;
    else if(28.45<=sp&&sp<32.65) cout<<dir<<" 11"<<endl;
    else if(32.65<=sp) cout<<dir<<" 12"<<endl;
}