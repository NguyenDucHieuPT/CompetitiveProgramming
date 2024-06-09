def replace_zeros(string):
  return string.replace('0', '5')

# Example usage
t = int(input())
while t > 0:  # Ensure loop runs correctly
  t -= 1
  n = input()  # No need to convert to string again
  modified_string = replace_zeros(n)
  print(modified_string)
