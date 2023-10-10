#include <iostream>

class  Figures
{
public:
	std::string NameFigures;

	Figures() {}
	Figures(int sizeArray,int sizeSide[],int sizeAngles[],char abcSide[], char abcAngles[]) {
		for (int i = 0;i < sizeArray;i++) {
			std::cout << abcSide[i] << " = ";
			std::cout << sizeSide[i] << " ";
		}	
		std::cout << std::endl;
		for (int i = 0;i < sizeArray;i++) {			
			std::cout << abcAngles[i] << " = ";
			std::cout << sizeAngles[i] << " ";
		}
		std::cout << std::endl;
	}

	virtual std :: string getType() {
		return NameFigures;
	}
};

void print_info(Figures* f) {
	std :: cout << f->getType() << std :: endl;
}



class  Triangle : public Figures
{
public:	
	static const int sizeArray = 3;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	std::string NameFigures= "�����������:";
	
	int a = 10,b = 20,c = 30;//�������
	int	A = 50,B = 60,C = 70;//����
	//int AA, BB, CC;	
	
	void info(){//int a,int b,int c,int A,int B,int C) {
		//AA = A;
		//BB = B;
		//CC = C;
       //sizeArray = 3;
	    siDe[sizeArray], Angles[sizeArray];
	    abcSide[sizeArray],abcAngles[sizeArray];	
	
		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';

		std::cout << "���������� ������: " << sizeArray << std::endl;

		Figures(sizeArray,siDe, Angles,abcSide,abcAngles);
		std::cout << std::endl;
	}
	//Triangle():NameFigures("�����������") {}

	std :: string getType() override {
		return NameFigures;
	}
};

class Quadrilateral : public Figures {
public:
	std::string NameFigures = "���������������:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	int a = 10, b = 20, c = 30, d = 40;
	int A = 50, B = 60, C = 70, D = 80;
	//int AA, BB, CC, DD;
	
	void info(){//int a,int b,int c,int d,int A,int B,int C,int D) {

		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "���������� ������: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}	

	std::string getType() override {
		return NameFigures;
	}
};

class RightRriangle : public Figures {
public:
	std::string NameFigures = "������������� �����������:";

	static const int sizeArray = 3;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

    int a = 10, b = 20, c = 30;
	int A = 50, B = 60, C = 90;
	//int CC;

	void info(){//int a,int b,int c,int A,int B,int C) {
	//	CC = C;

		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;		

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;		

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';		

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';		

		std::cout << "���������� ������: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class IsoscelesTriangle : public Figures {
public:
	
	int	a = 10, b = 20, c = 10;
	int	A = 50, B = 60, C = 50;			
	
	std::string NameFigures = "�������������� �����������:";

	static const int sizeArray = 3;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int aa, cc;
	//int AA,CC;

	void info(){//int a, int b, int c, int A, int B, int C) {
		/*
		CC = C;
		AA = A;
		aa = a;
		cc = c;		
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';

		std::cout << "���������� ������: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}

};

class EquilateralTriangle : public Figures {
public:
	
	int	a = 30, b = 30, c = 30;
	int	A = 60, B = 60, C = 60;		
	
	std::string NameFigures = "�������������� �����������:";

	static const int sizeArray = 3;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int CC,AA,BB;

	void info(){//int a, int b, int c, int A, int B, int C) {
		/*
		CC = C;
		AA = A;
		BB = B;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';

		std::cout << "���������� ������: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}
	std::string getType() override {
		return NameFigures;
	}
};

class Rectangle : public Figures {
public:
	
	int	a = 10, b = 20, c = 10, d = 20;
	int	A = 90, B = 90, C = 90, D = 90;	
	
	std::string NameFigures = "�������������:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int AA, BB, CC, DD;

	void info(){//int a, int b, int c, int d, int A, int B, int C, int D) {
		/*
		AA = A;
		BB = B;
		CC = C;
		DD = D;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "���������� ������: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class Square : public Figures {
public:
	
	int	a = 20, b = 20, c = 20, d = 20;
	int	A = 90, B = 90, C = 90, D = 90;		
	
	std::string NameFigures = "�������:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int AA, BB, CC, DD;
	
	void info(){//int a, int b, int c, int d, int A, int B, int C, int D) {
		/*
		AA = A;
		BB = B;
		CC = C;
		DD = D;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "���������� ������: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}	

	std::string getType() override {
		return NameFigures;
	}
};

class Parallelogram : public Figures {
public:
	
	int	a = 20, b = 30, c = 20, d = 30;
	int	A = 30, B = 40, C = 30, D = 40;	
	
	std::string NameFigures = "��������������:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int AA, BB, CC, DD;

	void info(){//int a, int b, int c, int d, int A, int B, int C, int D) {
		/*
		AA = A;
		BB = B;
		CC = C;
		DD = D;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "���������� ������: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

class Rhombus : public Figures {
public:
	
	int	a = 30, b = 30, c = 30, d = 30;
	int	A = 30, B = 40, C = 30, D = 40;
	
	std::string NameFigures = "����:";

	static const int sizeArray = 4;
	int siDe[sizeArray], Angles[sizeArray];
	char abcSide[sizeArray], abcAngles[sizeArray];

	//int AA, BB, CC, DD;

	void info(){//int a, int b, int c, int d, int A, int B, int C, int D) {
		/*
		AA = A;
		BB = B;
		CC = C;
		DD = D;
		*/
		siDe[sizeArray], Angles[sizeArray];
		abcSide[sizeArray], abcAngles[sizeArray];

		siDe[0] = a;
		siDe[1] = b;
		siDe[2] = c;
		siDe[3] = d;

		Angles[0] = A;
		Angles[1] = B;
		Angles[2] = C;
		Angles[3] = D;

		abcSide[0] = 'a';
		abcSide[1] = 'b';
		abcSide[2] = 'c';
		abcSide[3] = 'd';

		abcAngles[0] = 'A';
		abcAngles[1] = 'B';
		abcAngles[2] = 'C';
		abcAngles[3] = 'D';

		std::cout << "���������� ������: " << sizeArray << std::endl;

		Figures(sizeArray, siDe, Angles, abcSide, abcAngles);
		std::cout << std::endl;
	}

	std::string getType() override {
		return NameFigures;
	}
};

int main() {

	setlocale(LC_ALL, "Russian");

	Figures* triangle = new Triangle();
	print_info(triangle);
	Triangle t;
	t.info();//10, 20, 30, 50, 60, 70);

	Figures* quadrilateral = new Quadrilateral();
	print_info(quadrilateral);
	Quadrilateral q;	
	q.info();
	

	Figures* rightRriangle = new RightRriangle();
	print_info(rightRriangle);
	RightRriangle r;
	r.info();
	
	Figures* isoscelesTriangle = new IsoscelesTriangle();
	print_info(isoscelesTriangle);
	IsoscelesTriangle i;	
	i.info();

	Figures* equilateralTriangle = new EquilateralTriangle();
	print_info(equilateralTriangle);
	EquilateralTriangle e;	
	e.info();
	
	Figures* reectangle = new Rectangle();
	print_info(reectangle);
	Rectangle re;	
	re.info();

	Figures* square = new Square();
	print_info(square);
	Square s;	
	s.info();

	Figures* parallelogram = new Parallelogram();
	print_info(parallelogram);
	Parallelogram p;	
	p.info();

	Figures* rhombus = new Rhombus();
	print_info(rhombus);
	Rhombus rh;	
	rh.info();

	/*
    UnknownFigures unknownFigures;
    Figures* f= &unknownFigures;
	f->PrintInfoFigures(0,0,0,0,0,"������: ");
	std::cout << std::endl;

	Triangle t;
	f = &t;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "�����������: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	Quadrilateral qL;
	f = &qL;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "���������������: ");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	RightRriangle rightRriangle;
	f = &rightRriangle;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "������������� �����������: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	RightRriangle2 rightRriangle2;
	f = &rightRriangle2;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "������������� �����������: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	IsoscelesTriangle isoscelesTriangle;
	f = &isoscelesTriangle;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "�������������� �����������: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	EquilateralTriangle equilateralTriangle;
	f = &equilateralTriangle;
	f->PrintInfoFigures(3, f->A, f->B, f->C, f->D, "�������������� �����������: ");
	Figures(f->a, f->b, f->c, f->A, f->B, f->C);

	Rectangle rectangle;
	f = &rectangle;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "�������������: ");
	Figures(f->a, f->b, f->c,f->d, f->A, f->B, f->C, f->D);

	Square square;
	f = &square;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "�������: ");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	Parallelogram parallelogram;
	f = &parallelogram;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "��������������: ");
	Figures(f->a, f->b, f->c, f->d, f->A, f->B, f->C, f->D);

	Rhombus rhombus;
	f = &rhombus;
	f->PrintInfoFigures(4, f->A, f->B, f->C, f->D, "����: ");
	Figures(f->a, f->b, f->c,f->d,f->A, f->B, f->C, f->D);
	*/
	return 0;
}