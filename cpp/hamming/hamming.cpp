#include "hamming.h"
#include <stdexcept>

namespace hamming {
	int compute(const std::string s1, const std::string s2)
	{
		int hammingDist = 0;
		if (s1.size() != s2.size()) {
			throw std::domain_error("Size does not match");
		}

		auto it1 = s1.begin();
		auto it2 = s2.begin();
		for (; it1 != s1.end(); it1++, it2++) {
			if (*it1 != *it2)
				hammingDist++;
		}
		return hammingDist;
	}
}  // namespace hamming
