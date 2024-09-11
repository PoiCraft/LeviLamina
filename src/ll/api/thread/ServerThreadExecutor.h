#pragma once

#include "ll/api/thread/TaskExecutor.h"

namespace ll::thread {
class ServerThreadExecutor : public TaskExecutor {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI ServerThreadExecutor(std::string_view name, Duration maxOnceDuration, size_t checkPack);

    LLAPI ~ServerThreadExecutor() override;

    LLAPI void addTask(std::function<void()>) const override;

    LLAPI std::shared_ptr<CancellableCallback> addTaskAfter(std::function<void()>, Duration) const override;

    LLNDAPI static ServerThreadExecutor const& getDefault();
};
} // namespace ll::thread
