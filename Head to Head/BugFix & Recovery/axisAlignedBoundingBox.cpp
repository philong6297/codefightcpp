/*
Given a set of points on the plane, find the area of its axis-aligned minimum bounding box.

Example

For x = [1, 0, 4] and y = [-1, 2, 2], the output should be
axisAlignedBoundingBox(x, y) = 12.

*/

int axisAlignedBoundingBox(std::vector<int> x, std::vector<int> y) {

	int minX = x[0],
		maxX = x[0],
		minY = y[0],
		maxY = y[0];

	for (int i = 1; i < x.size(); i++) {
		minX = std::min(x[i], minX);
		maxX = std::max(x[i], maxX);
		minY = std::min(y[i], minY);
		maxY = std::max(y[i], maxY);
	}

	return (maxX - minX) * (maxY - minY);
}