def min_deletions_to_vulnerable(t, test_cases):
    results = []
    for case in test_cases:
        n, a = case
        dp = [1]*n
        for i in range(n):
            for j in range(i):
                if a[j] >= a[i]:
                    if dp[j] +1 > dp[i]:
                        dp[i] = dp[j] +1
        lnis = max(dp)
        results.append(n - lnis)
    return results

# Read input
import sys

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx =0
    t = int(data[idx]); idx +=1
    test_cases = []
    for _ in range(t):
        n = int(data[idx]); idx +=1
        a = list(map(int, data[idx:idx+n])); idx +=n
        test_cases.append((n,a))
    results = min_deletions_to_vulnerable(t, test_cases)
    for res in results:
        print(res)

if __name__ == "__main__":
    main()
