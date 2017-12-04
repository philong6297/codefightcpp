/*
Implement a function that replaces each digit in the given string with a '#' character.

Example

For input = "There are 12 points", the output should be
replaceAllDigitsRegExp(input) = "There are ## points".
*/
std::string replaceAllDigitsRegExp(std::string input) {
	for (auto &it : input)
		if (isdigit(it))
			it = '#';
	return input;
}
