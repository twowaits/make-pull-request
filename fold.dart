// FOLD IN DART

List<int> numbers = [10, 20, 50, 11];

List<String> names = ["Harry", "Peter", "Jhon", "Mary", "Elev"];

void main() {
  // Add all the number of number list
  int sum =
      numbers.fold<int>(0, (previousValue, element) => previousValue + element);
  print(sum);

  // Print first character of each letter in list name
  String firstChar = names.fold<String>(
      '', (preserveNames, latestName) => preserveNames + latestName[0]);
  print(firstChar);
}
