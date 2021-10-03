for x in range(1, 8):
	output = ""
	first_number = str(x)
	second_number = str(13 - (x - 1)) if x < 7 else ""
	third_number = { 2: "14", 3: "15", 4: "16" }

	spaces_before = " " * 2 * (x - 1)
	spaces_between = " " * (22 - ((x - 1) * 4)) if x >= 1 and x <= 6 else ""
	spaces_after = { 2: " " * 2, 3: " " * 6, 4: " " * 10 }

	output += spaces_before + first_number + spaces_between + second_number
	output += spaces_after.get(x, "") + third_number.get(x, "")

	print(output)
