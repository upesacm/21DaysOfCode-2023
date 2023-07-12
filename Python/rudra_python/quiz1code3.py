def is_triplet_exists(a, b, c):
  """
  Returns True if there exists a triplet (x, y, z) such that x is divisible by a, y is divisible by b, z is divisible by c, and x + y > z. Otherwise, returns False.

  Args:
    a: The first integer.
    b: The second integer.
    c: The third integer.

  Returns:
    True if there exists a triplet satisfying the conditions, False otherwise.
  """

  for x in range(1, c + 1):
    if x % a == 0:
      for y in range(1, c + 1):
        if y % b == 0:
          if x + y > c:
            return True
  return False


def main():
  """
  Reads three integers from the user and prints whether there exists a triplet satisfying the conditions.
  """

  a, b, c = map(int, input().split())
  if is_triplet_exists(a, b, c):
    print("Triplet Exists")
  else:
    print("Triplet Doesn't Exist")


if __name__ == "__main__":
  main()
