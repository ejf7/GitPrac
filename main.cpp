#include <iostream>
#include <string>

int add_numbers(int a, int b)
{
   return a + b;
}

int main()
{
   int x{10};
   int y{8};
   int z{15};
   std::cout << "y = " << y << std::endl;
   std::cout << "x = " << x << std::endl;
   std::cout << "swapping..." << std::endl;

   int temp{0};

   temp = x;
   x = y;
   y = temp;
   std::cout << "y: " << y << std::endl;
   std::cout << "x: " << x << std::endl;

   std::cout << "Adding " << z << ", and " << x << std::endl;
   auto a = add_numbers(z, x);
   std::cout << "Answer = " << a << std::endl;
    
    
}



