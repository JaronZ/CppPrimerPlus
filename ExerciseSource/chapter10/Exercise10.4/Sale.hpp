//Sale.hpp
#ifndef SALES_H_
#define SALES_H_
namespace SALES{
	class Sales{
	private:
		const static int QUARTERS=4;
		double sales[QUARTERS];
		double average;
		double max;
		double min;
		int count;
	public:
		Sales(const double ar[],int n);
		Sales();
		void ShowSales()const;
	};
}
#endif