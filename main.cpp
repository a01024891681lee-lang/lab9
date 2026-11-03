#include "book.h"


namespace Leedayoung2649098
{
    void parVal (book b){b+=1;}
    void parRef(book& r){r+=1;}
    void parPtr(book* p){*p+=1;}
    book retVal(book b){b+=1; return b;}
    book retRef(book& r){r+=1; return r;}
    book retPtr(book* p){*p+=1; return p;}
}

int main()
{
    using namespace Leedayoung2649098;
    book b{"title", 1, 10000}; std::cout << b;
    parVal(b); std::cout << b;
    book& r{b}; std::cout << r;
    parRef(r); std::cout << r;
    book* p{&b}; std::cout << *p;
    parPtr(p); std::cout << *p;
    std::cout << std::endl;

    b = book{"title2", 2, 20000};
    std::cout << b;
    std::cout << retVal(b);
    std::cout << r;
    std::cout << retRef(r);
    std::cout << *p;
    std::cout << *retPtr(p);
    std::cout << std::endl;
    book* ptr{new book};
    ptr->setTitle("title3");
    ptr->setID(3);
    ptr->setPrice(30000);
    std::cout << *ptr;
    delate ptr;
    return 0;
}




// 3. main.cpp파일에 테스트 코드를 작성합니다. 다음을 확인하여 테스트 코드를 완성해보세요. 
// 3-1. 전처리지시자를 넣으세요. 
// 3-2. main을 작성합니다. 
// 3-2-1. book형 객체3개를 선언하고 원하는 값으로 초기화합니다. 

// 3-2-2. bookGroup형을 가리키는 포인터변수를 선언하고 원하는 값으로 초기화하여 동적으로 할당합니다.  
// 3-2-3. bookGroup형을 가리키는 포인터변수에서 addBook멤버함수를 호출하는데 인자를 3-2-1에서 선언한 객체를 넣습니다. 즉, addBook멤버함수를 3번 호출합니다. 
// 3-2-4. bookGroup형을 가리키는 포인터변수에서 print멤버함수를 호출합니다
// . 
// 3-2-5. bookGroup형을 가리키는 포인터변수에서 동적으로 할당한 메모리를 해제합니다. 
