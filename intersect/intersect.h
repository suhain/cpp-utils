#pragma once

#include <iterator>
#include <algorithm>

template<class RanIter, class OutIter>
OutIter intersect(RanIter begin, RanIter end,
typename std::iterator_traits<RanIter>::value_type first, typename std::iterator_traits<RanIter>::value_type last,
OutIter out) {
    return std::copy(std::lower_bound(begin, end, first), std::lower_bound(begin, end, last), out);
}

