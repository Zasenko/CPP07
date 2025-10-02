#ifndef ARRAY_TPP
#define ARRAY_TPP

//size()

template<typename T>
class Array {
    private:
        T elem[];
    public:
        Array();
        Array(unsigned int n);
        ~Array();
        Array(const Array &copy);
        Array &opeartor=(const Array &src);
};

#endif