#pragma once

#include <string>
#include <vector>

#ifdef USE_BOOST_OPTIONAL
#  include <boost/optional.hpp>
using boost::optional;
#else
#  include <optional>
using std::optional;
#endif
