#include "../include/MyApp.hpp"
#include "../include/MyFrame.hpp"

// CTRE test
#include <ctre.hpp>
#include <optional>
#include <iostream>

constexpr std::optional<std::string_view> extract_number(std::string_view s) noexcept {
    using namespace ctre::literals;
    if (auto m = ctre::match<"^[a-z\\s]++([0-9]++)$">(s)) {
        return m.get<1>().to_view();
    } else {
        return std::nullopt;
    }
}

bool MyApp::OnInit()
{
    static_assert(*extract_number("abc123") == "123");
    static_assert(*extract_number(" 123") == "123");

    MyFrame* frame = new MyFrame();
    frame->SetClientSize(800, 600);
    frame->Center();
    frame->Show();

    return true;
}
