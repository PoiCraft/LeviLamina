#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptWatchdogTelemetry {
public:
    // prevent constructor by default
    ScriptWatchdogTelemetry& operator=(ScriptWatchdogTelemetry const&);
    ScriptWatchdogTelemetry(ScriptWatchdogTelemetry const&);
    ScriptWatchdogTelemetry();
};
