class Solution:
    def countPrimes(self, n: int) -> int:
        #Create a boolean list to track prime status of numbers
        prime = [True] * (n + 1)
        p = 2

        # Sieve of Eratosthenes algorithm
        while p * p <= n:
            if prime[p]:
                
                # Mark all multiples of p as non-prime
                for i in range(p * p, n + 1, p):
                    prime[i] = False
            p += 1

        # Collect all prime numbers
        count = 0
        for p in range(2, n):
            if prime[p]:
                count+=1
        
        return count

        