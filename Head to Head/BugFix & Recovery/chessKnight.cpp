/*
Given a position of a knight on the standard chessboard, find the number of different moves the knight can perform.

The knight can move to a square that is two squares horizontally and one square vertically, or two squares vertically and one square horizontally away from it. The complete move therefore looks like the letter L. Check out the image below to see all valid moves for a knight piece that is placed on one of the central squares.

Example

For cell = "a1", the output should be
chessKnight(cell) = 2.

For cell = "c2", the output should be
chessKnight(cell) = 6.

*/
int chessKnight(std::string cell) {
	int row = cell[1] - '0',
		column = cell[0] - 'a' + 1;
	int steps[8][2] = {
		{ -2, -1 },{ -1, -2 },{ 1, -2 },{ 2, -1 },
	{ 2, 1 },{ 1, 2 },{ -1, 2 },{ -2, 1 }
	};
	int answer = 0;

	for (int i = 0; i < 8; i++) {
		int tmpRow = row + steps[i][0];
		int tmpColumn = column + steps[i][1];
		if (tmpRow >= 1 && tmpRow <= 8 &&
			tmpColumn >= 1 && tmpColumn <= 8) {
			answer++;
		}
	}

	return answer;
}
