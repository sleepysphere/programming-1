int factorial(int N)
{
    if(N==1 or N==0){
        return 1;
    }
    else{
        return factorial(N-1)*N
    }
    
}

int main()
{
    int N = 10;
    int ans = factorial(N);
    return 0; // set break point here to check result
}
