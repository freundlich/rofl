#include <rofl/graph/properties.hpp>
#include <sge/math/vector/basic_impl.hpp>

rofl::graph::properties::properties()
:
	points_()
{
}

rofl::graph::properties::properties(
	point_vector const &_points)
:
	points_(
		_points)
{
	
}
	
rofl::graph::properties::point_vector const &
rofl::graph::properties::points() const
{
	return points_;
}