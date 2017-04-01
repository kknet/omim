#pragma once

#include "routing/segment.hpp"

#include <vector>

namespace routing
{
class CrossMwmOsrmGraph
{
  bool IsTransition(Segment const & s, bool isOutgoing);
  void GetEdgeList(Segment const & s, bool isOutgoing, std::vector<SegmentEdge> & edges);
  void Clear();
};
}  // namespace routing
