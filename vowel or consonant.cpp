#include <iostream>
using namespace std;

int main()
{
    char alphabet;
   cout << "Enter a character"<< endl;
   cin>>alphabet;
   if(alphabet=='a' || alphabet=='A' || alphabet=='e' || alphabet=='E' ||
	alphabet=='i' || alphabet=='I' || alphabet=='o' || alphabet=='O' ||
	alphabet=='u' || alphabet=='U')
   {
        cout << " The entered character is a Vowel" << endl;
   }
   else
   {
    cout << " The entered character is a Consonant" << endl;
   }
   return 0;
}
