Algo Greedy(a,n)
{
    for i=1 to n do
    {
        x=select(a);
        if feasible (x) then
        {
            solution=solution+x;
        }
    }
}