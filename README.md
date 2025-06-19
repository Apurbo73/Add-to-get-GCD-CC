### Add to get GCD CC:

The approach in two short points:

1. **Check GCD of X and Y**: If `gcd(X, Y) > 1`, they are already not coprime — so no changes needed → print `0`.

2. **Try adding 1**: If making one increment to either `X` or `Y` gives `gcd > 1`, print `1`; otherwise, it takes two increments → print `2`.

