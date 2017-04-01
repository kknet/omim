#include "routing/cross_mwm_road_graph.hpp"

namespace routing
{
bool CrossMwmIndexGraph::IsTransition(Segment const & s, bool isOutgoing)
{
  return true;
}

void CrossMwmIndexGraph::GetEdgeList(Segment const & s, bool isOutgoing,
                                     std::vector<SegmentEdge> & edges)
{
}

void CrossMwmIndexGraph::Clear()
{
}
}  // namespace routing
