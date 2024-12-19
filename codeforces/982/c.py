import sys
import threading
import heapq

def main():
    import sys
    import heapq

    t = int(sys.stdin.readline())
    for _ in range(t):
        n = int(sys.stdin.readline())
        a = list(map(int, sys.stdin.readline().split()))
        ops = []
        for i in range(1, n):
            L_i = a[i] + i
            delta_i = i
            ops.append((L_i, delta_i))
        ops.sort()
        L = n
        idx = 0
        heap = []
        # Use negative delta_i for max-heap
        while True:
            while idx < len(ops) and ops[idx][0] <= L:
                heapq.heappush(heap, -ops[idx][1])
                idx += 1
            if not heap:
                break
            delta_i = -heapq.heappop(heap)
            L += delta_i
        print(L)

if __name__ == "__main__":
    threading.Thread(target=main).start()
