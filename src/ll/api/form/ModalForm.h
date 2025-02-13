#pragma once

#include "FormBase.h"
#include "mc/world/actor/player/Player.h"


namespace ll::form {

class ModalForm : public Form {

    class ModalFormImpl;
    std::unique_ptr<ModalFormImpl> impl;

public:
    enum class SelectedButton : bool {
        Upper = true,
        Lower = false,
    };

    using Callback = std::function<void(Player&, SelectedButton)>;

    LLNDAPI ModalForm();

    LLNDAPI ModalForm(
        std::string title,
        std::string content,
        std::string upperButton,
        std::string lowerButton,
        Callback    callback = Callback()
    );
    LLAPI ~ModalForm() override;

    LLAPI ModalForm& setTitle(std::string const& title);

    LLAPI ModalForm& setContent(std::string const& content);

    LLAPI ModalForm& setUpperButton(std::string const& upperButton);

    LLAPI ModalForm& setLowerButton(std::string const& lowerButton);

    LLAPI ModalForm& setCallback(Callback callback);

    LLAPI bool sendTo(Player& player, Callback callback = Callback());
};

} // namespace ll::form
