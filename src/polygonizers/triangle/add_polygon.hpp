#ifndef ROFL_POLYGONIZERS_TRIANGLE_ADD_POLYGON_HPP_INCLUDED
#define ROFL_POLYGONIZERS_TRIANGLE_ADD_POLYGON_HPP_INCLUDED

namespace rofl
{
namespace polygonizers
{
namespace triangle
{

// The function adds a polygon to the segment and the point list
template
<
	typename Points,
	typename Segments,
	typename Polygon
>
void add_polygon(
	Points &ps,
	Segments &ss,
	Polygon const &p)
{
	typename 
	Points::size_type base = 
		static_cast<typename Points::size_type>(
			ps.size()/2);
	for (typename Polygon::size_type i = 0; i < p.size(); i++)
	{
		ps.push_back(
			p[i][0]);
		ps.push_back(
			p[i][1]);
		ss.push_back(
			base+i);
		// At the end, loop back to the first vertex in the 
		// polygon (do not use 0 here but "base" instead)
		ss.push_back(
			i == static_cast<typename Polygon::size_type>(p.size()-1)
			?
				base
			:
				base+i+1);
	}
}
}
}
}

#endif
