#ifndef ROFL_AUX_POLYGONIZERS_TRIANGLE_CLEAR_POD_HPP_INCLUDED
#define ROFL_AUX_POLYGONIZERS_TRIANGLE_CLEAR_POD_HPP_INCLUDED

#include <fcppt/config/external_begin.hpp>
#include <boost/utility/enable_if.hpp>
#include <cstring>
#include <type_traits>
#include <fcppt/config/external_end.hpp>


namespace rofl
{
namespace aux
{
namespace polygonizers
{
namespace triangle
{
template
<
	typename T
>
typename
boost::enable_if
<
	std::is_pod<
		T
	>,
	void
>::type
clear_pod(
	T &_val
)
{
	std::memset(
		&_val,
		0,
		sizeof(T)
	);
}

}
}
}
}

#endif
