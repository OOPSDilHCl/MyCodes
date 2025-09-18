def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

def print_array(arr):
    print(" ".join(map(str, arr)))

n = int(input("Enter number of elements: "))
arr = []

print(f"Enter {n} numbers:")
for _ in range(n):
    arr.append(int(input()))

print("\nUnsorted array:")
print_array(arr)

bubble_sort(arr)

print("\nSorted array:")
print_array(arr)