#include <iostream>
//This just asked to create a weird algorithm, it was under the general section of the USACO problems
using namespace std;
void weird(int n) {
while(n>1){
  if (n%2==0){
    n/=2;
    cout<<n<<" ";
}else{
   n*=3;
    n+=1;
    cout<<n<<" ";
}
}
  }

int main() {
  weird(3);
}
