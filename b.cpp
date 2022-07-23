#include <iomanip>
#include <ios>
#include <iostream>

class src
{
  private:
	int a, *x, i;

  public:
	void b1()
	{
		system("clear");

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

		std::cout << "Masukkan Tinggi Badan : ";
		std::cin >> i;

		a = (i - 100) - (i - 100) * 15 / 100;

		std::cout << "\nTinggi Badan Anda Adalah : " << i << " cm" << std::endl;

		std::cout << "\nBerat Badan Ideal Anda Adalah : " << a << " kg" << std::endl;
	}
};

int main(int argc, char *argv[])
{
	int pilih;

	src src0;
	
	std::cout << std::setw(30) << "Berat Badan Ideal\n" << std::endl;

	std::cout << "{1} Pria" << std::endl;

	std::cout << "\n{2} Wanita" << std::endl;

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

	default:
		std::cout << "\n{!} Opsi Salah" << std::endl;
		break;
	}
	
	return 0;	
}