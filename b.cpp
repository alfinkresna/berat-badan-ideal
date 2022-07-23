#include <iomanip>
#include <ios>
#include <math.h>
#include <iostream>

class src
{
  private:
	int a, *x, i;

  public:
	void b1()
	{
		system("clear");

		std::cout << "Satuan (cm)\n"
				  << std::endl;

		std::cout << "Masukkan Tinggi Badan : ";
		std::cin >> i;

		a = (i - 100) - (i - 100) * 10 / 100;

		x = &a;

		std::cout << "\nTinggi Badan Anda Adalah : " << i << " cm" << std::endl;

		std::cout << "\nBerat Badan Ideal Anda Adalah : " << *x << " kg" << std::endl;
	}

  public:
	void b2()
	{
		system("clear");

		std::cout << "Satuan (cm)\n"
				  << std::endl;

		std::cout << "Masukkan Tinggi Badan : ";
		std::cin >> i;

		a = (i - 100) - (i - 100) * 15 / 100;

		std::cout << "\nTinggi Badan Anda Adalah : " << i << " cm" << std::endl;

		std::cout << "\nBerat Badan Ideal Anda Adalah : " << a << " kg" << std::endl;
	}

  public:
	void imt()
	{
		system("clear");
		
		int a{}, c{2};

		double res, b{};
		
		std::cout << "Berat Badan (kg)" << std::endl;
		
		std::cout << "\nTinggi Badan (m)" << std::endl;
		
		std::cout << "\nMasukkan Berat Badan : ";
		
		std::cin >> a;
		
		std::cout << "\nMasukkan Tinggi Badan : ";
		
		std::cin >> b;
		
		printf("\nBerat Badan Anda : %i %s", a, "kg");
		
		std::cout << "\n\nTinggi Badan Anda : " << b << " m" << std::endl;

		res = a / pow(b, c);

		std::cout << "\nIMT : " << res;

		if (res < 18.5)
		{
			std::cout << " (Kurus)" << std::endl;
		}
		else if ((res > 18.5) && (res < 22.9))
		{
			std::cout << " (Normal)" << std::endl;
		}
		else if ((res > 23) && (res < 27.5))
		{
			std::cout << " (Kelebihan Berat Badan)" << std::endl;
		}
		else if (res > 27)
		{
			std::cout << " (Obesitas)" << std::endl;
		}
	}
};

int main(int argc, char *argv[])
{
	int pilih;

	src src0;

	std::cout << std::setw(30) << "Berat Badan Ideal\n"
			  << std::endl;

	std::cout << "{1} Pria" << std::endl;

	std::cout << "\n{2} Wanita" << std::endl;

	std::cout << "\n{3} Indeks Massa Tubuh" << std::endl;

	std::cout << "\nPilih Menu : ";

	std::cin >> pilih;

	switch (pilih)
	{
	case 1:
		src0.b1();
		break;

	case 2:
		src0.b2();
		break;

	case 3:
		src0.imt();
		break;

	default:
		std::cout << "\n{!} Opsi Salah" << std::endl;
		break;
	}

	return 0;
}