/* See other files here for the LICENCE that applies here. */


#ifndef INCLUDE_OT_NEWCLI_COMMON1
#define INCLUDE_OT_NEWCLI_COMMON1

#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <iterator>
#include <stdexcept>

#include <functional>
#include <memory>
#include <thread>
#include <atomic>
#include <mutex>


// list of thigs from libraries that we pull into namespace nOT::nNewcli
// we might still need to copy/paste it in few places to make IDEs pick it up correctly
#define INJECT_OT_COMMON_USING_NAMESPACE_COMMON_1 \
	using std::string; \
	using std::vector; \
	using std::vector; \
	using std::list; \
	using std::set; \
	using std::map; \
	using std::ostream; \
	using std::istream; \
	using std::cin; \
	using std::cerr; \
	using std::cout; \
	using std::cerr; \
	using std::endl; \
	using std::function; \
	using std::unique_ptr; \
	using std::shared_ptr; \
	using std::weak_ptr; \
	using std::enable_shared_from_this; \
	using std::mutex; \
	using std::lock_guard; \

#endif

