#include <iostream>
#include <cstring>
using namespace std;
void countVowels(const char* sentence, int vowelCounts[][2]) {
    
    if (*sentence == '\0') {
        return;
    }
    
    if (*sentence == 'A' ) {
        vowelCounts[0][0]++;  
        
    } 
    if ( *sentence == 'a') {
        
        vowelCounts[0][1]++; 
    } else if (*sentence == 'E') {
        vowelCounts[1][0]++; 
        
    } else if ( *sentence == 'e') {
        
        vowelCounts[1][1]++; 
    }  else if (*sentence == 'I') {
        vowelCounts[2][0]++; 
        
    } else if (*sentence == 'i') {
       
        vowelCounts[2][1]++; 
    }  else if (*sentence == 'O' ) {
        vowelCounts[3][0]++; 
          
    } else if ( *sentence == 'o') {
    
        vowelCounts[3][1]++;  
    } else if (*sentence == 'U' ) {
        vowelCounts[4][0]++;  
     
    } else if ( *sentence == 'u') {
       
        vowelCounts[4][1]++; 
    }

    countVowels(sentence + 1, vowelCounts);
}

int main() {
    char sentence[1000];
    cin.getline(sentence, sizeof(sentence));

    int vowelCounts[5][2] = {{0}};

    countVowels(sentence, vowelCounts);

    cout << "Count" << std::endl;
    cout << "A-" << vowelCounts[0][0] << std::endl;
    cout << "a-" << vowelCounts[0][1] << std::endl;
    cout << "E-" << vowelCounts[1][0] << std::endl;
    cout << "e-" << vowelCounts[1][1] << std::endl;
   cout << "I-" << vowelCounts[2][0] << std::endl;
    cout << "i-" << vowelCounts[2][1] << std::endl;
cout << "O-" << vowelCounts[3][0] << std::endl;
    cout << "o-" << vowelCounts[3][1] << std::endl;
   cout << "U-" << vowelCounts[4][0] << std::endl;
    cout << "u-" << vowelCounts[4][1] << std::endl;


    return 0;
}
