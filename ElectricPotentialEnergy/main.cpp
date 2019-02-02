#include "pch.h"
#include <iostream>
#include <vector>

#include "Charge.h"

int main()
{
	const long double e{ 0.00000000000000000016 };
	long double system_energy{ 0 };

	std::vector<Charge> charges;
	charges.push_back(Charge(e, 11, 55, 6));
	charges.push_back(Charge(e, 10, 25, 12));
	charges.push_back(Charge(e, 2.5, 15, 35));
	charges.push_back(Charge(e, 3, 51, 24));
	charges.push_back(Charge(e, 5, 9, 16));
	charges.push_back(Charge(e, 14, 45, 12));
	charges.push_back(Charge(e, 20, 10.2, 10));
	charges.push_back(Charge(e, 9, 3.4, 45));
	charges.push_back(Charge(e, 2, 2.2, 1));
	charges.push_back(Charge(e, 5, 1.9, 5));

	int k = 1;

	for (int i{ 0 }; i < 10; i++)
	{
		k++;
		for (int j{ k }; j < 10; j++)
		{
			system_energy += find_energy(charges[i], charges[j]);
		}
	}

	std::cout << "The total electric potential energy of the system is: " << system_energy << " J!" << std::endl;

	return 0;
}
