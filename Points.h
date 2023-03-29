#pragma once

template <typename TNum>
class CPoint
{
	TNum x, y;
public:
	CPoint(TNum a, TNum b) :x(a), y(b) {}
	CPoint() :x(0), y(0) {}
	Tnum get_x() const { return x; }
	Tnum get_y() const { return y; }
	void print_on(std::ostream& os) const
	{
		os << '(' << x << "; " << y << ')';
	}
	TNum distance(const CPoint& p) const;
	CPoint operator+(const CPoint& p) const { ... }
	CPoint operator-(const CPoint& p) const { ... }
};

template<typename TNum>
inline TNum CPoint<TNum>::distance(const CPoint& p) const
{
	return sqrt(pow(x-p.x, 2) + _y*_y);
}

template<typename TNum>
std::ostream& operator << (std::ostream& os, CPoint<TNum> A)
{
	A.print_on(os); return os;
}

template<typename TNum>
CPoint <TNum> operator*(const CPoint<TNum>& p, TNum n)
{
	return CPoint<TNum>(p.get_x() * n, p.get_y() * n);
}