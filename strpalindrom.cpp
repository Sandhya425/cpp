#include <iostream>     
using namespace std;    

int main() {
    string A;                  
    int freq[26] = {0}, odd=0; 

    cout << "Enter a string: ";  
    cin >> A;                 

    
    for(int i = 0; i < A.length(); i++) {
        freq[A[i] - 'a']++;      
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] % 2 != 0)     
            odd++;               
    }

    // अगर odd अक्षरों की संख्या 1 या उससे कम है तो palindrome बन सकता है
    if(odd <= 1)
        cout << "1";   // हाँ, palindrome बन सकता है
    else
        cout << "0";   // नहीं, palindrome नहीं बन सकता

    return 0;   // प्रोग्राम सफलतापूर्वक पूरा हुआ
}
