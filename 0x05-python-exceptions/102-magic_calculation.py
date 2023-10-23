def magic_calculation(a, b):
    calculated_result = 0
    for i in range(1, 3):
        try:
            if i > a:
                raise Exception('Too far')
            else:
                calculated_result += (a ** b) / i
        except Exception:
            calculated_result = b + a
            break
    return calculated_result

