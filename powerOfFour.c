bool isPowerOfFour(int n){
    if (n == 1 || n == 4)
    {
        return true;
    }
    else if (n <= 0 || n < 4)
    {
        return false;
    }
    else if (n % 4 == 0)
    {
        return isPowerOfFour(n / 4);
    }
    else 
        return false;
}
