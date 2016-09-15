#include<iostream>
#include "trie.h"

using namespace std;

int main(int argc, char *argv[]){

  if(argc != 3){
    cout << "Invlaid arguments...\n";
    return 0;
  }
  
  string dict = argv[1];
  string q = argv[2];

  Trie t = *(new Trie());
  // Read dict in one line at a time
  t.addWord("word");

  if(t.isWord("word")){
      cout << "Word is found\n";
  }
  else{
    cout << "word is not found\n";
  }
}
