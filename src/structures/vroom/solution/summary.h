#ifndef SUMMARY_H
#define SUMMARY_H

/*

This file is part of VROOM.

Copyright (c) 2015-2020, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include "structures/vroom/amount.h"
#include "structures/vroom/solution/computing_times.h"
#include "structures/vroom/solution/timing_violations.h"

namespace vroom {

struct Summary {
  Cost cost;
  const unsigned unassigned;
  Amount delivery;
  Amount pickup;
  Duration service;
  Priority priority;

  Duration duration;
  Duration waiting_time;
  Distance distance;
  ComputingTimes computing_times;

  TimingViolations timing_violations;
  std::unordered_set<VIOLATION> violations;

  Summary();

  Summary(unsigned unassigned, unsigned amount_size);
};

} // namespace vroom

#endif
