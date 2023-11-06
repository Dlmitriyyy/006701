#include <iostream>
#include <iomanip>
using namespace std;

class Vector3D
{
private:
	double m_x, m_y, m_z;
public:
	Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	void print()
	{
		cout << fixed << setprecision(2) << "Кординати вектора (" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}

	class Point3D
	{
	private:
		double m_x, m_y, m_z;

	public:
		Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
			: m_x(x), m_y(y), m_z(z)
		{

		}

		void point_start()
		{
			cout << fixed << setprecision(2) << "Початкові кординати точки (" << m_x << " , " << m_y << " , " << m_z << ")\n";
		}

		void point_result()
		{
			cout << fixed << setprecision(2) << "Кординати точки після розрахунків (" << m_x << " , " << m_y << " , " << m_z << ")\n";
		}

		void moveByVector(const Vector3D& v)
		{
			m_x += v.m_x;
			m_y += v.m_y;
			m_z += v.m_z;
		}

		double get_coordinates() const
		{
			return m_x;
			return m_y;
			return m_z;
		}

	};
};

int main()
{
	system("chcp 1251 > nul");

	double x, y, z;
	cout << "Введіть точку з трьох кординат (x,y,z): ";
	cin >> x >> y >> z;
	Vector3D::Point3D p(x, y, z);

	cout << "Введіть вектор з трьох кординат (x,y,z): ";
	cin >> x >> y >> z;
	Vector3D v(x, y, z);

	p.point_start();
	p.moveByVector(v);
	v.print();
	p.point_result();

	return 0;
}