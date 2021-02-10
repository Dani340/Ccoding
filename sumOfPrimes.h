int sumOfPrimes(int x, int N) {
    int sum = 0;
    int j, primeNr = 0, isPrime;
    x ++;
    while (primeNr < N) {
        isPrime = 1;

        if(x > 1) {
            for(j = 2; j <= sqrt(x); j++) {
                if(x % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1) {
                primeNr ++;
                sum += x;
            }
        }
        x++;
    }
    return sum;
}
