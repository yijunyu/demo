def insertion_sort(a, n):
    for i in range(1..n-1):
        for j in range(i+1..n):
            if a[i] < a[j]:
                t = a[i]
                a[j] = a[i]
                a[i] = t

