#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate(void)
{
    int res = rand() % 3;

    if (res == 0)
        return (dynamic_cast<Base *>(new A));
    else if (res == 1)
        return (dynamic_cast<Base *>(new B));
    else 
        return (dynamic_cast<Base *>(new C));
}

void    identify(Base *p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a) 
        a->print();
    else if (b)
        b->print();
    else if (c)
        c->print();
}

void    identify(Base &p)
{
   	try {
		A &a = dynamic_cast<A &>(p);
		a.print();
	}
	catch (std::exception &e){
	}
	try {
		B &b = dynamic_cast<B &>(p);
		b.print();
	}
	catch (std::exception &e){
	}
	try {
		C &c = dynamic_cast<C &>(p);
		c.print();
	}
	catch (std::exception &e){
	}
}

int     main(void)
{
	srand(time(NULL));

	Base *basePtr = generate();
	Base & baseRef = *basePtr;

	identify(basePtr);
	identify(baseRef);

	delete basePtr;
	return 0;
}