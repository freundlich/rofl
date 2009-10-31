#ifndef ROFL_TEST_LINE_STRIP_OUTPUT_HPP_INCLUDED
#define ROFL_TEST_LINE_STRIP_OUTPUT_HPP_INCLUDED

#include <sge/ostream.hpp>
#include <sge/math/detail/one_dimensional_output.hpp>
#include <sge/math/vector/output.hpp>
#include "line_strip/object.hpp"

template<typename A,typename B>
sge::ostream &
operator<<(
	sge::ostream &o,
	sge::line_strip::object<A,B> const &s)
{
	return 
		sge::math::detail::one_dimensional_output(
			o,
			s.points());
}


#endif