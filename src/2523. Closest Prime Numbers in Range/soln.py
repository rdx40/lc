class Solution:
    def closestPrimes(self, left: int, right: int) -> List[int]:
        
        def get_primes():
            is_prime = [True] * (right + 1)
            is_prime[0] = is_prime[1] = False

            for i in range(2, int(sqrt(right)) + 1):
                if is_prime[i]:
                    for j in range(i * i, right + 1, i):
                        is_prime[j] = False
            primes = []
            for i in range(left, right + 1):
                if is_prime[i]:
                    primes.append(i)
            return primes

        primes = get_primes()
        if len(primes) < 2:
            return [-1, -1]
        
        diff = float('inf')
        res = [-1, -1] 
        
        for i in range(1, len(primes)):
            if primes[i] - primes[i - 1] < diff:
                diff = primes[i] - primes[i - 1]
                res = [primes[i - 1], primes[i]]
        
        return res

