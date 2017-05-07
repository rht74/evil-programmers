#include "headers.hpp"

#include "py_sys.hpp"
#include "python.hpp"

namespace py
{
	namespace sys
	{
		object get_object(const char* Name)
		{
			return object::from_borrowed(PySys_GetObject(Name));
		}
	}
}