#include"Header.h"
#include<assert.h>

int main()
{
    assert(Addition(10,11) == 22);  // Error current ans is 21 but for the testing

    assert(Addition(-10,20) == 10);

    assert(Addition(-10,-30) == -30);

    return EXIT_SUCCESS;
}