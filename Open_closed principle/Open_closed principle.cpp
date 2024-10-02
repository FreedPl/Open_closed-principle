#include <iostream>
#include <vector>

// Абстрактний клас
class Shape
{
public:
    virtual void printArea() = 0; // Чисто віртуальна функція
};

// Клас кола
class Circle : public Shape
{
public:
    Circle(double r) : radius(r) {}
    void printArea() override
    {
        std::cout << "Площа кола: " << 3.14 * radius * radius << "\n";
    }

private:
    double radius;
};

// Клас прямокутника
class Rectangle : public Shape
{
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void printArea() override
    {
        std::cout << "Площа прямокутника: " << width * height << "\n";
    }

private:
    double width, height;
};

// Додано новий клас для трикутника
class Triangle : public Shape
{
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void printArea() override
    {
        std::cout << "Площа трикутника: " << 0.5 * base * height << "\n";
    }

private:
    double base, height;
};

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(4, 7);

    std::vector<Shape*> shapes = { &circle, &rectangle, &triangle };

    for (Shape* shape : shapes)
    {
        shape->printArea();
    }

    return 0;
}
