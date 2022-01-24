//BigMod Code Snippet (Iterative & Recursive)
//By s1nisteR

//Expecting Input in The Format: (B^P) % M


//Recursive Approach
long long bigMod(long long b, long long p, long long m)
{
    if(p == 0) return 1 % m; //base case, should always return 1

    if(p % 2 == 0) //if p is even
    {
        long long u = bigMod(b, p / 2, m);
        return (u * u) % m;
    }
    else //if p is odd
    {
        return (b * bigMod(b, p - 1, m)) % m;
    }
}

/*
//Iterative Approach
long long bigMod(long long b, long long p, long long m)
{
    long long r = 1;
    while(p > 0)
    {
        if(p % 2 != 0)
        {
            r = (r * b) % m;
        }
        p /= 2;
        b = (b * b) % m;
    }
    return r;
}
*/