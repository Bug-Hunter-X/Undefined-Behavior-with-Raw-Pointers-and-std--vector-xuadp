std::vector<int> vec = {1, 2, 3, 4, 5};

// Check bounds before accessing
if (vec.size() > 5) {
  vec[5] = 6;
} else {
  std::cerr << "Error: Vector index out of bounds.\n";
}

// Or use iterators
for (auto it = vec.begin(); it != vec.end(); ++it) {
  // Process elements safely
}
// Or use at method for bound checking:
try {
  vec.at(5) = 6; // Throws exception if out of bounds
} catch (const std::out_of_range& oor) {
  std::cerr << "Out of Range error: " << oor.what() << '\n';
}