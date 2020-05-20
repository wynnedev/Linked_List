template <typename T>
TList<T>::TList()
{
    first = new Node<T>();
    first->prev = nullptr;
    last->next = nullptr;
    first->next = last;
    last->prev = first;
    last = new Node<T>();
    size = 0;
}

template <typename T>
void TList<T>::Print(std::ostream& os, char delim) const
{
    os << "List Size " << GetSize() <<std::endl;
    
    int sz = size;
    Node<T> * temp = first;
    while(sz)
    {
        os << temp->next->data << delim;
        temp = temp->next;
        --sz;
    }

    os << std::endl;
}

template <typename T>
bool TList<T>::IsEmpty() const
{
    if( size == 0)
    {
        std::cout << "List Empty" << std::endl;
        return true;
    }

    return false;
}

template <typename T>
int TList<T>::GetSize() const
{
    return size;
}

template <typename T>
T& TList<T>::GetFirst() const
{
    if(IsEmpty())
    {
        return dummy;
    }

    return first->next->data;
}

template <typename T>
T& TList<T>::GetLast() const
{
    if(IsEmpty())
    {
        return dummy;
    }

    return last->prev->data;
}

template <typename T>
void TList<T>::InsertFront( const T& d)
{
    Node<T> *newNode = new Node<T>(d);

    if(IsEmpty())
    {
        first->next = newNode;
        last->prev = newNode;    
    }

    else
    {
        first->next->prev = newNode;
        newNode->next = first->next;
        first->next = newNode;
    }
    ++size;
}

template <typename T>
void TList<T>::InsertBack( const T& d)
{
    Node<T> *newNode = new Node<T>(d);

    if(IsEmpty())
    {
        first->next = newNode;
        last->prev = newNode;    
    }

    else
    {
        last->prev->next = newNode;
        newNode->prev = last->prev;
        last->prev = newNode;
    }
    ++size;
}

template <typename T>
void TList<T>::RemoveFront()
{
    if(IsEmpty())
    {
        return;
    }

    if(size == 1)
    {
        Node<T> *temp = first->next;
        first->next = last;
        last->prev = first;
        delete temp;
    }
    
    Node<T> *temp = first->next;
    first->next->next->prev = nullptr;
    first->next = first->next->next;
    
    //delete temp;
}

template < typename T>
void RemoveBack()
{

}

