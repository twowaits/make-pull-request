// FUTURE IN DART

Future<void> main() async {
  print(await showUserData());
}

Future<String> fetchUserData() async {
  return await Future.delayed(Duration(seconds: 3), () => "Nice");
}

Future<String> showUserData() async {
  String data = await fetchUserData();
  return "This is user data: $data";
}
