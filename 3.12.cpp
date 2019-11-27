#include<iostream>
#include<string>
using namespace std;
class Date
{
	public:
		Date(int m, int d, int y){
		setMonth(m);
		setDay(d);
		setYear(y);
}
void setMonth(int m)
{
	month=m;
	if(m<1&&m>12)
	month=1;
}
void setDay(int d)
{
	day=d;
}
void setYear(int y)
{
	year=y;
}
int getMonth(){
	return month;
}
int getDay(){
	return day;
}
int getYear(){
	return year;
}
void displayDate()
{
	cout<<month<<'/'<<day<<'/'<<year<<"\n";
}
private:
	int month;
	int day;
	int year;
};
int main()
{
	Date d(11, 26, 2019);
	cout<<"Initial date: ";
	d.displayDate();
	d.setMonth(12);
	cout<<"Modified date: ";
	d.displayDate();
	return 0;
}
