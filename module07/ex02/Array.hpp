#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>

class Array
{
    private:
        T *arr;
        unsigned int s;
    public:
        Array()
        {
            arr = NULL;
            s = 0;
        }
        Array(unsigned int n)
        {
            arr = new T[n]();
            s = n;
        }
        ~Array()
        {
            delete [] arr;
        }
        Array( Array const & src )
        {
            *this = src;
        }

        Array &operator = (const Array &f)
        {
            T *newArr = new T[f.s]();
            for(unsigned int i = 0; i < f.s; i++)
                newArr[i] = f.arr[i];
            this->arr = newArr;
            this->s = f.s;
            return *this;
        }
        T &  operator[](unsigned int index)
        {
            if (index >= 0 && index < s)
                return (this->arr[index]);
            throw outOfBoundException();
        }
        unsigned int size()
        {
            return this->s;
        }
        class outOfBoundException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return "you tried to access an index out of bound";
            }
        };
};

#endif