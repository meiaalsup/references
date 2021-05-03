#include <iostream>

#include <memory>
#include <cstdlib>

#include <string>

struct MyType {
    MyType() { std::cout << "MyType ctor!" << std::endl; }
    ~MyType() { std::cout << "MyType dtor!" << std::endl; }
    int counter{0};
    // std::string foo;
    void print() const {
        std::cout << "counter is " << counter << std::endl;
    }
};

template <typename T>
struct SpecialPtrMemoryManager {
  SpecialPtrMemoryManager() {
    allocate();
  }
  
  ~SpecialPtrMemoryManager() {
    free();
  }

  T* get() const {
    return instancePtr_;
  }
  
  // called if I do myInstance*
  T& operator*() {
     return *instancePtr_;
  }

  T* operator->() {
     return instancePtr_;
  }
 
 private:
  T* allocate() {
    instancePtr_ = new T();
    return instancePtr_;
  }

  void free() {
    delete instancePtr_;
  }

  // int i;
  T* instancePtr_;
}; 
// = class { ... };


int main()
{

/*
    MyType foo;
    foo.print();
    foo.counter = 4;
    foo.print();

    // std::cout << "size of myType " << sizeof(long int) << std::endl;
    MyType* mallocedPtr = (MyType*)malloc(sizeof(MyType));
    // mallocedPtr->counter = 5;
    mallocedPtr->print();
    // malloc returns a void*
    
    MyType* myTypePtr = new MyType();
    (*myTypePtr).print();
    
    delete myTypePtr;
*/
    
    auto myStuff = SpecialPtrMemoryManager<MyType>();
    myStuff.get()->counter = 100;
    myStuff->print();

    return 0;
}

