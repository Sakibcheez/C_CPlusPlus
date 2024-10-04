
template <class T>
class dynArr
{
private:
    T *data;
    int size;
public:
    dynArr(int);
    ~dynArr();
    void setValue(int, T);
    T getValue(int);
};


