#include <iostream>
using namespace std;
bool palindrome(std::string n, int start, int end)
{
     if((end - start == 2) || (end - start == 1))
     return true;
     
     if(n[start] == n[end])
     return palindrome(n,start+1,end-1);
     else
     return false;
}
int main() {
     std::string str = "cotoc";
     std::cout << " rec " << palindrome(str,0,(str.length()-1)) << std::endl;
     return 0;
}
