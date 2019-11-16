#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

class Box{
public:
    double getVolum(void){
        return length * breadth * height;
    }
    void setLength(double len){
        length = len;
    }
    void setBreadth(double bre){
        breadth = bre;
    }
    void setHeight(double hei){
        height = hei;
    }
    Box operator+(const Box& b){
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
private:
    double length;
    double breadth;
    double height;
};

int main(){
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(6.0);
    Box2.setBreadth(7.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolum();
    cout << "Volume of Box1 : " << volume << endl;

    volume = Box2.getVolum();
    cout << "Volume of Box2 : " << volume << endl;

    Box3 = Box1 + Box2;

    volume = Box3.getVolum();
    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}

/*class printData{
public:
    void print(int i){
        cout << "整数为：　" << i << endl;
    }
    void print(double f){
        cout << "浮点数为：　" << f << endl;
    }
    void print(char c[]){
        cout << "字符串为： " << c << endl;
    }
};
int main(void){
    printData pd;
    pd.print(5);
    pd.print(500.263);
    char c[] = "Hello C++";
    pd.print(c);

    return 0;
}*/
/*template <class T>
class Stack{
private:
    vector<T> elems;

public:
    void push(T const&);
    void pop();
    T top() const;
    bool empty() const{
        return elems.empty();
    }
};

template <class T>
void Stack<T>::push(T const& elem){
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop(){
    if(elems.empty()){
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const{
    if(elems.empty()){
        throw out_of_range("Stack<>::top(): empty stack");
    }
    return elems.back();
}

int main(){
    try{
        Stack<int> intStack;
        Stack<string> stringStack;
        intStack.push(7);
        cout << intStack.top() << endl;

        stringStack.push("hello");
        cout << stringStack.top() << endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch(exception const& ex){
        cerr << "Exception: " << ex.what() << endl;
        return -1;
    }
}*/

/*template <typename T> T const& Max(T const& a, T const& b){
    return a < b ? b:a;
}
int main() {
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}*/