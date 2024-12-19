t = int(input())
for _ in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    max_a = max(a)
    sum_a = sum(a)
    from bisect import bisect_left, bisect_right
    # Check if any a_i > b_1, impossible
    if max_a > b[0]:
        print(-1)
        continue
    # Build list of b_k with their k
    b_k_list = b
    # Function to find minimal s_p for given p
    def find_s_p(p):
        left = max_a
        right = sum_a
        while left < right:
            mid = (left + right) // 2
            # Check if possible to partition into p prefixes with sum <= mid
            count = 1
            curr_sum = 0
            possible = True
            for ai in a:
                if ai > mid:
                    possible = False
                    break
                if curr_sum + ai <= mid:
                    curr_sum += ai
                else:
                    count +=1
                    curr_sum = ai
            if not possible or count > p:
                left = mid +1
            else:
                right = mid
        return left
    # Function to find minimal k_p such that b_k >= s_p
    def find_k_p(s_p):
        # Since b_k is decreasing, we can find the leftmost k such that b_k >= s_p
        k_p = bisect_left(b_k_list[::-1], s_p)
        if k_p == m:
            return None # Not found
        k_p = m - k_p -1
        return k_p
    # Ternary search over p
    left_p = 1
    right_p = n
    min_total_cost = None
    while left_p <= right_p:
        p1 = (2 * left_p + right_p) // 3
        p2 = (left_p + 2 * right_p) // 3
        s_p1 = find_s_p(p1)
        k_p1 = find_k_p(s_p1)
        if k_p1 is None:
            total_cost1 = float('inf')
        else:
            total_cost1 = p1 * (m - k_p1)
        s_p2 = find_s_p(p2)
        k_p2 = find_k_p(s_p2)
        if k_p2 is None:
            total_cost2 = float('inf')
        else:
            total_cost2 = p2 * (m - k_p2)
        if min_total_cost is None or total_cost1 < min_total_cost:
            min_total_cost = total_cost1
        if total_cost1 < total_cost2:
            right_p = p2 -1
        else:
            left_p = p1 +1
    # Try left_p and right_p
    for p in range(max(1, left_p -5), min(n, right_p +5) +1):
        s_p = find_s_p(p)
        k_p = find_k_p(s_p)
        if k_p is None:
            continue
        total_cost = p * (m - k_p)
        if min_total_cost is None or total_cost < min_total_cost:
            min_total_cost = total_cost
    print(min_total_cost)
