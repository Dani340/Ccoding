int i;

int ClosestPrimeToX(int x) {
    int j, primeNr = 0, isPrime;
    if(x<=1) {
        return 0;
    }
    else {
        for(i = x; i > 1; i--) {
            isPrime = 1;

            for(j = 2; j <= sqrt(i); j++) {
                if(i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1) {
                return i;
                break;
            }
        }
    }
}
