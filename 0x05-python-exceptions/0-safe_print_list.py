def safe_print_list(my_list=[], x=0):
    printed_count = 0
    for i in range(x):
        try:
            print(my_list[i], end=" ")
            printed_count += 1
        except IndexError:
            break
    print()
    return printed_count

# Example usage:
my_list = [1, 2, 3, 4, 5]
x = 10
printed_elements = safe_print_list(my_list, x)
print(f"Number of elements printed: {printed_elements}")

