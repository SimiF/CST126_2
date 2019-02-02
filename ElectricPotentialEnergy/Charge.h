#pragma once

class Charge
{
public:
	Charge() // default constructor 
		: q_{ 0.00000000000000000016 }, x_pos_{ 0 }, y_pos_{ 0 }, z_pos_{ 0 }
	{
	}
	Charge(long double charge, long double x_pos, long double y_pos, long double z_pos) // generic constructor
		: q_{ charge }, x_pos_{ x_pos }, y_pos_{ y_pos }, z_pos_{ z_pos }
	{
	}

	long double get_charge() const { return q_; }
	long double get_x() const { return x_pos_; }
	long double get_y() const { return y_pos_; }
	long double get_z() const { return z_pos_; }

private:
	long double q_;
	long double x_pos_;
	long double y_pos_;
	long double z_pos_;
};

long double find_dist(const Charge& q1, const Charge& q2);
long double find_energy(const Charge& q1, const Charge& q2);
