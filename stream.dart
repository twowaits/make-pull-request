// STREAM IN DART

Future<void> main(List<String> args) async {
  print("before Execution");

  Stream<String> val = changeInterval();
  await for (String i in val) {
    print(i);
  }

  print("after Execution");
}

// async* means that there is no return value.
// we use yeild keyword to return contineous value
Stream<String> changeInterval() async* {
  for (int i = 1; i < 5; i++) {
    yield await Future.delayed(
        Duration(seconds: i), () => "Printing the second $i");
  }
}
