#include <iostream>

int main()
{
    /*
    
    Null value = a special value that means something has no value.
    when a pointer is holding a null value,
    that pointer is NOT pointing at anything 

    nullptr = keyword represents a null pointer literal

    nullptrs are helpful when determining if an address
    was successfully assigned to a pointer

    IMPROTANT NOTICES:
    when using pointers, be careful that your code isn't
    dereferencing nullptr or pointing to free memory
    this will cause undefined bahavior
    
    */

    int *pointer = nullptr; // no pointer
    int x = 123;

    pointer = &x; // assigned it

    // checking system and balances
    // if my pointers is still a null pointer,
    // that means we did not successfully assign an address to my pointer

    if(pointer == nullptr)
    {
        std::cout << "Address was NOT assigned!\n";
    }
    else
    {
        std::cout << "Address was assigned!\n"; // MUST BE ASSIGNED AT ALL COST!
        std::cout << *pointer;
    }

    // If your pointer is still a null pointer
    // It's NOT safe to dereference that pointer!

    return 0;
}