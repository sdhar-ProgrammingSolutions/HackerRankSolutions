#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class LibraryFeeCalculator
{
private:
        int day;
        int month;
        int year;
public:
        LibraryFeeCalculator(int d, int m, int y) : day(d), month(m), year(y)
        {

        }

        int calculateFine(const LibraryFeeCalculator& returnDate) const
        {
            if(returnDate.day<=day && returnDate.month<=month && returnDate.year<=year)
            {
                return 0;
            }
            else if(returnDate.day>day && returnDate.month==month &&  returnDate.year==year)
            {
                return 15*(returnDate.day-day);
            }
            else if(returnDate.month>month &&  returnDate.year==year)
            {
                return 500*(returnDate.month-month);
            }
            else if(returnDate.year>year)
            {
                return 10000;
            }
            return 0;
        }
};
int main() 
{
    int d, m, y;
    cin>>d>>m>>y;
    LibraryFeeCalculator bookReturned(d, m, y);
    cin>>d>>m>>y;
    LibraryFeeCalculator bookTaken(d, m, y);
    int fee = bookTaken.calculateFine(bookReturned);
    cout<<fee<<endl;
    return 0;
}
