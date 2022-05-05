#include <iostream>
#include <fstream>
using namespace std;

int main () {
long long int i,n,o,z,b,c;
b=600851475143;
c=7;
n=b/c;
 z=0;
 bool is_prime;
while (z!=1){is_prime = true;
  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {cout<<c<<"a\n";is_prime = false;c++;n=b/c;
		while(b%n!=0){c++;cout<<c<<"b\n";n=b/c;}}
      }
         	if(b%n==0&&is_prime==true){
      	o=n;z++;cout<<n<<"n\n";break;}
  c++;n=b/c;while(b%n!=0){c++;cout<<c<<"c\n";n=b/c;}
}

cout<<o<<" is the highest divisible\n";
exit(0);

}