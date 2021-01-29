int sol(int n){
    int x= nearestPowerOf2(n);
    int l =n-x;
    return (2* l) + 1;
}

int nearestPowerOf2(int n){
    int ans = 0;
    while((1 << ans) <=n){
        ans++;
    }
    return 1<<(ans-1);
}