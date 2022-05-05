#include <iostream>
#include <fstream>
using namespace std;

int main () {

int n2=1;
int nf;
int fib=1;
int sum=0;
while(fib<4000000){
if (fib % 2 ==0){
	sum=sum+fib;
}
cout<<fib<<"\n";
nf=fib;
fib=fib+n2;
n2=nf;

}
cout<<sum;
exit(0);
}

