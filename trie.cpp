#include "trie.h"
#include <string>
#include <vector>

using namespace std;

Trie::Trie(){
  head = *(new Node());
}

Trie::Trie(const Trie& other){

}

Trie& Trie::operator=(Trie other){
  // swap fields, exchange pointers and primitives
  return *this; 
}

void Trie::addWord(string word){
  Node current = head;
  for(uint i = 0; i < word.length(); i++){
    char c = word[i];
    Node* next = current.getNodeAt(c);
    
    if(next != nullptr)
      current = *(next);
    else {
      Node* n = new Node();
      current.setNodeAt(c, n);
      current = *(n);

    if(i == word.length()-1)
      current.setWordEnd(true);
    }
 }
}
bool Trie::isWord(string word){
  Node current = head;
   for(uint i = 0; i < word.length(); i++){
    Node* next = current.getNodeAt(word[i]);
    
    if(next == nullptr)
      return current.isWordEnd();
    else{
      current = *(next);
    }
   }
  

  if(current.isWordEnd())
    return true;
  else
    return false;
}

vector<string> allWordsWithPrefix(string prefix);

Node::Node(){
  for(int i = 0; i < 26; i++){
    nodes[i] = nullptr;
  }
  wordEnd = false;
}

void Node::setNodeAt(char c, Node* n){
  int i = c - 97;
  nodes[i] = n;
}

Node* Node::getNodeAt(char c){
  int i = c - 97;
  return nodes[i];
}

void Node::setWordEnd(bool end){
  wordEnd = end;
}

bool Node::isWordEnd(){
  return wordEnd;
}
