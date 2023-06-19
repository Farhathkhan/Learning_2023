// Day1 - l1 question 1 using if else

int using_if_else(int number1, int number2)
{
    if (number1 > number2)
    {
        return number1;
    }
    else {
        return number2;
    }
}


// using ternery operator

int using_ternary(int number1, int number2)
{
    return (number1 > number2) ? number1 : number2;
}