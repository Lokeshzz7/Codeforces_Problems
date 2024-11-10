n, k, l, c, d, p, nl, np = map(int, input().split())

total_drink = k * l 
total_limes = c * d 
total_salt = p 

toasts_drink = total_drink // nl
toasts_limes = total_limes // 1
toasts_salt = total_salt // np

max_toasts = min(toasts_drink, toasts_limes, toasts_salt)
toasts_per_friend = max_toasts // n

print(toasts_per_friend)
