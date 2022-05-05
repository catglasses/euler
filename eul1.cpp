#include <iostream>
#include <fstream>
using namespace std;

int main () {
int d3;
int d5;
int d15;
int sum=0;
int max=0;
int cnt=0;
while(max<1000){
	d3=3*cnt;
	max=d3;
	if(max<1000){
	sum=sum+d3;
	cnt=cnt+1;}
}
cout<<sum<<"\n";
max=0;
cnt=0;
while(max<1000){
	d5=5*cnt;
	max=d5;
	if(max<1000){
	sum=sum+d5;
	cnt=cnt+1;}
}
max=0;
cnt=0;
while(max<1000){
	d15=15*cnt;
	max=d15;
	if(max<1000){
	sum=sum-d15;
	cnt=cnt+1;}
}

cout<<sum;
exit(0);
}