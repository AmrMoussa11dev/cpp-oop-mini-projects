#include <iostream>
using namespace std;

//Project clsCalculator
class clsCalculator
{
private:
    float _LastNumber = 0;
    float _Result = 0;
    string _LastOperation = "Clear";
    float _PreviousResult = 0;
    bool _IsZero(float Number)
    {
            return (Number == 0);
    }
public:

    //Set property
    float Add(float Number)
    {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Adding ";
        _Result += Number;
    }
    float Subtract(float Number)
    {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Subtracting ";
        _Result -= Number;
    }
    float Divide(float Number)
    {
        if (_IsZero(Number))
        {
            Number = 1;
        }
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Dividing ";
        _Result /= Number;
    }
    float Multiply(float Number)
    {
        _LastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Multiplying ";
        _Result *= Number;
    }
    void Clear()
    {
        _LastNumber = 0;
        _PreviousResult = 0;
        _LastOperation = "Clear ";
        _Result = 0;
    }
    float GetFinelResult()
    {
        return _Result;
    }
    void CancelLastOperation()
    {
        _LastNumber = 0;
        _LastOperation = "Canceling Last Operation ";
        _Result = _PreviousResult;
    }
    void PrintResult()
    {
        cout << "Result After " << _LastOperation << _LastNumber << " is:" << _Result << endl;
    }
};
int main()
{
    clsCalculator Calculator1;

    Calculator1.Add(10);
    Calculator1.PrintResult();
    Calculator1.Add(100);
    Calculator1.PrintResult();

    Calculator1.Add(1000);
    Calculator1.PrintResult();

    Calculator1.Multiply(2);
    Calculator1.PrintResult();


    Calculator1.GetFinelResult();
    Calculator1.PrintResult();

    Calculator1.Subtract(5);
    Calculator1.PrintResult();

    Calculator1.GetFinelResult();
    Calculator1.PrintResult();

    Calculator1.Clear();
    Calculator1.PrintResult();
}
