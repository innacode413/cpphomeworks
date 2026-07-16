#pragma once

class Calculator {
public:
    Calculator();
    Calculator(int startValue);

    void setStartValue(int value);

    Calculator& calculate(const int& value, const char& operation);
    static int calculate(const int& value1, const int& value2, const char& operation);

    Calculator& operator+(int value);
    Calculator& operator-(int value);
    Calculator& operator*(int value);
    Calculator& operator/(int value);

    Calculator& operator+=(int value);
    Calculator& operator-=(int value);
    Calculator& operator*=(int value);
    Calculator& operator/=(int value);

    int getMemory() const;
    int GetCurrentValue() const;

private:
    int memory;
};
