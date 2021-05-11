//Code Signal Arcade
//Given the string, check if it is a palindrome.

bool checkPalindrome(string inputString) {
 bool isPalindrome = true;
 
 for(int i = 0; i < inputString.size(); i++){
     if (inputString[i] != inputString[(int) inputString.size() - i - 1]){
         isPalindrome = false;
         return false;
     }
 }
 return isPalindrome;
}
