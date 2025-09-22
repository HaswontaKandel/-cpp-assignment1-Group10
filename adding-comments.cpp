#include <iostream>
using namespace std;// allows us to use cout without std::

int main() {
     // using cout
    cout<< "Line 1: Lev Nikolayevich Tolstoy was a Russian writer" << endl;
    // using std::cout directly
    std::cout<< "Line 2: He is regarded as one of the greatest and most influential authors of all time." << endl;
   
    //Adding two extra blank lines with std::endl
    cout<<std::endl<<std::endl;

    cout<< "Line 3: Born to an aristocratic family, Tolstoy achieved acclaim in his twenties." << endl;
    std::cout<< "Line 4: With his semi-autobiographical trilogy, Childhood, Boyhood and Youth." << endl;
    cout<< "Line 5: And one of his best, based on his experiences in the Crimean War, War and Peace." << endl;
    return 0;
}
