#include "routing/cross_mwm_osrm_graph.hpp"

namespace routing
{
bool CrossMwmOsrmGraph::IsTransition(Segment const & s, bool isOutgoing)
{
  return true;
}

void CrossMwmOsrmGraph::GetEdgeList(Segment const & s, bool isOutgoing,
                                    std::vector<SegmentEdge> & edges)
{
}

void CrossMwmOsrmGraph::Clear()
{
}
}  // namespace routing
