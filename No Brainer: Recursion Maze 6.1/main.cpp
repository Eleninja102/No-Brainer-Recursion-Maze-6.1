//
//  main.cpp
//  No Brainer: Recursion Maze 6.1
//
//  Created by Coleton Watt on 2/14/22.
//

 
 
#include <iostream>
using namespace std;
 
 int go( int num){
    if( num < 0 )
 return num;        //Base Case
    else
 return num + go(num - 1); //Recursive Case
 }

void rain( int row ){
    if( row <= 0 ) return;
    else{
       
        for( int col=0; col < row; col++)
            cout << "# ";
        cout << endl;
        rain( row - 1 );
    }
    
}

bool isPalindrome(string word, int first, int last ){
    if(word[first] != word[last]){
        return false;
    }else if(first == last){
        return true;
    }else{
        bool x = isPalindrome(word, ++first, --last);
        return x;
       
    }
}
//Facilitate Recursive method call
bool isPalindrome(string word){
return isPalindrome(word, 0, word.length()-1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    std::cout << go(4) << endl;
    rain(4);
    string words[] = {"madam", "palindrome", "racecar"};
    for(int i = 0; i < 3; i++){
        cout << words[i] << ": "
             << (isPalindrome(words[i]) ? "Palindrome\n": "Not\n" );
    }
    return 0;
}
