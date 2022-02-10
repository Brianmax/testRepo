template<class T>
struct node
{
    T key;
    T node<T> *next;
    node(T k, node<T> n)
    {
        key = k;
        next = n;
    }
    void print(T k);
};