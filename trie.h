#include <string>
#include <vector>

class Node{
 public: 
  Node();

  void setNodeAt(char c, Node* n);

  Node* getNodeAt(char c);

  void setWordEnd(bool end);

  bool isWordEnd();
 private:
  Node* nodes[26];
  bool wordEnd;
};

class Trie{
 public:
  Trie();
  // TODO: Destructor?
  
  Trie(const Trie& other);

  Trie& operator=(Trie other);

  void addWord(std::string word);

  bool isWord(std::string word);

  std::vector<std::string> allWordsWithPrefix(std::string prefix);
  /*
 private:
  struct Node{
    Node* nodes[26];
    bool wordEnd;
  };
  */
  Node head;
};


