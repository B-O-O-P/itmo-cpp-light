
class A
{
public:
    virtual ~A() {}
};
class B : public virtual A {};
class C : public virtual A {};
class D : public virtual A, B, C {};

//  A    A
//  |v   |v
//  B    C    A
//  |    |    |v
//  +----+----+
//  |
//  D



template<class T>
bool isSameObject(T const* p, T const* q) {
    return dynamic_cast<const void*>(p) == dynamic_cast<const void*>(q);
}