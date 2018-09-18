#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>

class HuffmanCodes
{
    struct Node
    {
        char data;
        size_t freq;
        Node* left;
        Node* right;
        Node(char data, size_t freq) : data(data),
        freq(freq),
        left(nullptr),
        right(nullptr)
        {}
        ~Node()
        {
            delete left;
            delete right;
        }
    };
    
    struct compare
    {
        bool operator()(Node* l, Node* r)
        {
            return (l->freq > r->freq);
        }
    };
    
};
