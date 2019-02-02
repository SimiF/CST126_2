#include "pch.h"

#include "Charge.h"
#include <cmath>

long double find_dist(const Charge& q1, const Charge& q2)
{
	long double x_difference = q1.get_x() - q2.get_x();
	long double y_difference = q1.get_y() - q2.get_y();
	long double z_difference = q1.get_z() - q2.get_z();

	long double x_squared = x_difference * x_difference;
	long double y_squared = y_difference * y_difference;
	long double z_squared = z_difference * z_difference;

	return (sqrt(x_squared + y_squared + z_squared));
}

long double find_energy(const Charge& q1, const Charge& q2)
{
	const long double K = 9900000000;
	long double energy{ 0 };

	long double top = K * q1.get_charge() * q2.get_charge();
	long double dist = find_dist(q1, q2);

	return (top / dist);
}