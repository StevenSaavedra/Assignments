#include <iostream>

class Rectangle
{
public:
    double width, height;
    Rectangle(double width, double height)
    {
        this->width = width;
        this->height = height;
    }

    double getArea()
    {
        return width * height;
    }

    double getPerimeter()
    {
        return 2 * (width + height);
    }
};

int main()
{

    double w, h;
    int i = 0, c=1;

    while (i <= 1)
    {
        std::cout << "Enter width rectangle "<< c <<" : " << std::endl;
        std::cin >> w;
        std::cout << "Enter height rectangle "<< c <<" : " << std::endl;;
        std::cin >> h;
        Rectangle a(w, h);

        std::cout << "Area of rectangle "<< c << " is: " << a.getArea() << std::endl;

        std::cout << "Perimeter of rectangle "<< c << " is: " << a.getPerimeter() << std::endl;;

        i++;
        c++;
    }

    return 0;
}
