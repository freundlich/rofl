#ifndef ROFL_AUX_POLYGONIZERS_TRIANGLE_LINE_SEGMENTS_HPP_INCLUDED
#define ROFL_AUX_POLYGONIZERS_TRIANGLE_LINE_SEGMENTS_HPP_INCLUDED

#include <rofl/math/line_segment_impl.hpp>
#include <rofl/math/polygon_impl.hpp>
#include <fcppt/config/external_begin.hpp>
#include <iterator>
#include <vector>
#include <fcppt/config/external_end.hpp>


namespace rofl
{
namespace aux
{
namespace polygonizers
{
namespace triangle
{

template<
	typename T
>
std::vector
<
	rofl::math::line_segment<T>
> const
line_segments(
	rofl::math::polygon<T> const &p)
{
	std::vector < math::line_segment<T> > segments;
	for (typename rofl::math::polygon<T>::const_iterator i = p.begin(); i != p.end(); ++i)
	{
		T const &next =
			i == std::prev(p.end())
			?
				p.front()
			:
				*std::next(i);
		segments.push_back(
			rofl::math::line_segment<T>(
				*i,
				next));
	}
	return segments;
}

}
}
}
}

#endif