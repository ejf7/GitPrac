#include <iostream>
#include <string>


int main()
{
   int x{2};
   int y{4};
   std::cout << "y = " << y << std::endl;
   std::cout << "x = " << x << std::endl;
   std::cout << "swapping..." << std::endl;

   int temp{5};

   temp = x;
   x = y;
   y = temp;
   std::cout << "y = " << y << std::endl;
   std::cout << "x = " << x << std::endl;
    
    
}



