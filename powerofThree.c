bool isPowerOfThree(int n){
    if (n == 3 || n == 1)
    {
        return true;   
    }
    else if (n <= 0 || n < 3)
    {
        return false;
    }
    else if (n % 3 == 0)
    {
        return isPowerOfThree(n / 3);   
    }
    else 
    {
        return false;   
    }
}
