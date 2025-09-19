#include<string>
#include<iostream>


struct Node
{
    Node *links[26];
    bool flag = false;


    // this function check if the character already exists in the tries and return true or false 
    bool containKey(char ch)
    {
        return (links[ch - 'a'] != NULL);
    }


    // this insert or put the character into tries
    void put(char ch , Node * node)
    {
        links[ch - 'a'] = node;
    }


    // this function moves the node to next tries
    Node * get(char ch)
    {
        return links[ch - 'a'];
    }


    // this function , just simply set flag true is called
    bool setEnd()
    {
        return flag = true;
    }


    // this function return the flag of current tries.
    bool isEnd()
    {
        return flag;
    }
};


class Trie 
{
    private: Node* root;


    public:

    Trie()
    {
        root = new Node();
    }


    // time complexity will be O(len of word)

    // Inserting into the tries
    void insert(std::string word)
    {
        Node* node = root;
        for(int i = 0 ; i < word.length() ; i++)
        {
            if(!node->containKey(word[i]))
            {
                node->put(word[i] , new Node());
            }

            // moves to the reference tries
            node = node->get(word[i]);
        }

        node->setEnd();
    }




    // Searching something in tries
    bool search(std::string word)
    {
        Node * node = root;

        for(int i = 0 ; i < word.length() ; i++)
        {
            if(!node->containKey(word[i]))
            {
                return false;
            }

            node = node->get(word[i]);
        }

        return node->isEnd();


    }


    // O(len)
    // find something which start with the given prefix in the tries
    bool startwith(std::string prefix)
    {
        Node* node = root;

        for(int i = 0 ; i < prefix.length() ; i++)
        {
            if(!node->containKey(prefix[i]))
            {
                return false;
            }

            node = node->get(prefix[i]);
        }

        return true;
    }


};



int main()
{

    std::string str= "apple";
    Trie trie;

    trie.insert(str);
    trie.insert("app");
    trie.insert("flow");
    trie.insert("appling");
    trie.insert("application");
    trie.insert("banning");
    trie.insert("flower");



    std::cout<<trie.search(str)<<std::endl;

    std::cout<<trie.startwith("app")<<std::endl;
}