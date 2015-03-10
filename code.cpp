#include <iostream>

using namespace std;

int main(){
  cout << "hello world\n";
  for(int i=0; i<5; i++)
    cout << "ciao" << endl;
    
  int var=0;
  cout << "write a number: ";
  cin >> var;
  cout << "you wrote " << var << endl;
  
  return 0;
}
