//GCD Code Snippet (Recursive + Iterative)
//By s1nisteR


//Recursive/Classic version
long long gcd(long long a, long long b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

/*
//Iterative version
long long gcd(long long a, long long b)
{
    if(a == 0)
    {
        return a;
    }
    else if(b == 0)
    {
        return a;
    }
    while(a != b)
    {
        if(a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
*/