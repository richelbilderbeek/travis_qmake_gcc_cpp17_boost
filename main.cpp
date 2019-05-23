#include <boost/graph/adjacency_list.hpp>

auto f() noexcept
{
  boost::adjacency_list<> g;
  boost::add_vertex(g);
  return boost::num_vertices(g);
}

int main() 
{
  static_assert("C++17"); //C++17 has a default message
  if (f() != 1) return 1;
}
