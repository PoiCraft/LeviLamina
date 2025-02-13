#pragma once

#include "ll/api/event/EmitterBase.h"
#include "ll/api/event/EventBus.h"

namespace ll::event {
template <auto F, std::derived_from<Event>... Ts>
class Emitter : public EmitterBase {
    static inline bool reg = [] {
        (EventBus::getInstance().setEventEmitter<Ts>(F), ...);
        return true;
    }();

protected:
    Emitter()           = default;
    ~Emitter() override = default;
};
} // namespace ll::event
