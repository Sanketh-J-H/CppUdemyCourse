#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring();                       // No-args constructor
    Mystring(const char *s);          // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source);      // Move constructor
    ~Mystring();                      // Destructor

    Mystring &operator=(const Mystring &rhs); // Copy assignment
    Mystring &operator=(Mystring &&rhs);      // Move assignment
    Mystring operator+(const Mystring &rhs);  // concatenate the passed string to this string
    bool operator==(const Mystring &rhs);     // compare two objects string and return true or false
    bool operator!=(const Mystring &rhs);     // Compare two Mystring objects and return true if not equal
    bool operator>(const Mystring &rhs);      // Compare two Mystring objects for greater than
    bool operator<(const Mystring &rhs);      // Compare two Mystring objects for less than
    Mystring operator-();  //convert to lowercase
    void operator+=(const Mystring &rhs); // concatenate the given strings and store it in the lhs
    Mystring operator*(const int &rhs);   // copy and concatenate the string the number of times given
    void operator*=(const int &rhs);   // copy and concatenate the string the number of times given
    void display() const;

    int get_length() const; // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_