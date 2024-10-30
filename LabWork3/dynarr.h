template <class T>

class dynArr
{
private:
    T *data;
    int size;
public:
    dynArr(int);
    ~dynArr(); // ~ refers destructor
    void setValue(int, T);
    T getValue(int);
};


