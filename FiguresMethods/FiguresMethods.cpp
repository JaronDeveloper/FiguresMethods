#include <iostream>

class  Figures
{
public:
	int A, B, C, D; //углы 
	int a, c, b, d; //стороны 	

	Figures() {}
	Figures(int a, int b, int c, int A, int B, int C) {
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	}
	Figures(int a, int b, int c, int d, int A, int B, int C, int D) {
		std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		std::cout << std::endl;
	}	
	
	virtual void PrintInfoFigures(int counternumberSides,int ANumber, int BNumber, int CNumber,int DNumber, 
		std::string NameFigures)
	{		
		std::cout << NameFigures << std::endl;

		if (counternumberSides == 0) {
			std::cout << "Правильная" << std::endl;		
		}
		if (counternumberSides == 3) {
			if (ANumber - 10 == BNumber && 90 == CNumber) {
				std::cout << "Правильная" << std::endl;
			}
			if (ANumber + 10 == BNumber && 90 == CNumber) {
				std::cout << "Неправильная" << std::endl;
			}
			if (ANumber + 10 == BNumber && BNumber + 10 == CNumber) {
				std::cout << "Правильная" << std::endl;
			}
			if (ANumber == BNumber && BNumber == CNumber) {
				std::cout << "Правильная" << std::endl;
			}				
			if (ANumber < BNumber && BNumber > CNumber || ANumber == CNumber && CNumber < BNumber) {
				std::cout << "Неправильная" << std::endl;
			}
		}
		if (counternumberSides == 4) {
			if (ANumber + 10 == BNumber && BNumber + 10 == CNumber && CNumber + 10 == DNumber) {
				std::cout << "Неправильная" << std::endl;
			}
			if (ANumber + 10 == BNumber && BNumber - 10 == CNumber && CNumber == DNumber - 10) {
				std::cout << "Неправильная" << std::endl;
			}
			if (ANumber == BNumber &&  CNumber == DNumber) {
				std::cout << "Правильная" << std::endl;
			}
		}
		std::cout << "Количество сторон: " << counternumberSides << std::endl;	
	}	
};

class UnknownFigures : public Figures {
public:
};

class  Triangle : public Figures
{
public:
	Triangle() {
		a = 10, b = 20, c = 30;
		A = 50, B = 60, C = 70;		
	}	
};

class Quadrilateral : public Figures {
public:
	Quadrilateral() {
		a = 10, b = 20, c = 30, d = 40;
		A = 50, B = 60, C = 70, D = 80;		
	}	
};

class RightRriangle : public Figures {
public:
	RightRriangle() {
		a = 10, b = 20, c = 30;
		A = 50, B = 60, C = 90;
	}
};

class RightRriangle2 : public Figures {
public:
	RightRriangle2() {
		a = 10, b = 20, c = 30;
		A = 50, B = 40, C = 90;		
	}
};

class IsoscelesTriangle : public Figures {
public:
	IsoscelesTriangle() {
		a = 10, b = 20, c = 10;
		A = 50, B = 60, C = 50;		
	}
};

class EquilateralTriangle : public Figures {
public:
	EquilateralTriangle() {
		a = 30, b = 30, c = 30;
		A = 60, B = 60, C = 60;		
	}
};

class Rectangle : public Figures {
public:
	Rectangle() {
		a = 10, b = 20, c = 10, d = 20;
		A = 90, B = 90, C = 90, D = 90;	
	}
};

class Square : public Figures {
public:
	Square() {
		a = 20, b = 20, c = 20, d = 20;
		A = 90, B = 90, C = 90, D = 90;		
	}
};

class Parallelogram : public Figures {
public:
	Parallelogram() {
		a = 20, b = 30, c = 20, d = 30;
		A = 30, B = 40, C = 30, D = 40;	
	}
};

class Rhombus : public Figures {
public:
	Rhombus() {
		a = 30, b = 30, c = 30, d = 30;
		A = 30, B = 40, C = 30, D = 40;
	}	
};

int main() {
	setlocale(LC_ALL, "Russian");

    UnknownFigures unknownFigures;
    Figures* f= &unknownFigures;
	f->PrintInfoFigures(0,0,0,0,0,"Фигура: ");
	std::cout << std::endl;

	Triangle t;
	f = &t;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	Quadrilateral qL;
	f = &qL;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Четырехугольник: ");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	RightRriangle rightRriangle;
	f = &rightRriangle;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Прямоугольный треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	RightRriangle2 rightRriangle2;
	f = &rightRriangle2;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Прямоугольный треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	IsoscelesTriangle isoscelesTriangle;
	f = &isoscelesTriangle;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Равнобедренный треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	EquilateralTriangle equilateralTriangle;
	f = &equilateralTriangle;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "Равносторонний треугольник: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	Rectangle rectangle;
	f = &rectangle;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Прямоугольник: ");
	Figures(f->a, f->b, f->c,f->d, f->A, f->B, f->C, f->D);

	Square square;
	f = &square;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Квадрат: ");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	Parallelogram parallelogram;
	f = &parallelogram;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Параллелограмм: ");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	Rhombus rhombus;
	f = &rhombus;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "Ромб: ");
	Figures(f->a, f->b, f->c,f->d,f->A, f->B, f->C, f->D);
	
	return 0;
}