// Pegasus Frontend
// Copyright (C) 2018  Mátyás Mustoha
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.


#pragma once

#include <QString>
#include <functional>


struct AppArgs {
    /// Do not read or write config files outside the program's directory
    static bool portable_mode;
    /// Do not write to stdout
    static bool silent;

    /// Run in full screen mode
    static bool fullscreen;
    /// Program language
    static QString locale;
    static const QString DEFAULT_LOCALE;
    /// Current theme path
    static QString theme;
    static const QString DEFAULT_THEME;

    /// Enable EmulationStation 2 support
    static bool enable_provider_es2;
    /// Enable Steam support
    static bool enable_provider_steam;


    static void load_config();
    static void save_config();
    static void parse_gamedirs(const std::function<void(const QString&)>&);
};