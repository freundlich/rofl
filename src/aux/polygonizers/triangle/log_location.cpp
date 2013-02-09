#include <rofl/aux/polygonizers/log_location.hpp>
#include <rofl/aux/polygonizers/triangle/log_location.hpp>
#include <fcppt/text.hpp>
#include <fcppt/log/location.hpp>


fcppt::log::location const
rofl::aux::polygonizers::triangle::log_location()
{
	return
		rofl::aux::polygonizers::log_location()
		/
		FCPPT_TEXT("triangle");
}
