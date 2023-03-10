/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include "OnOff.h"

using namespace chip;
using namespace chip::app::Clusters;

CHIP_ERROR OnCommand::Invoke(std::function<void(CHIP_ERROR)> responseCallback)
{
    OnOff::Commands::On::Type request;
    return MediaCommandBase::Invoke(request, responseCallback);
}

CHIP_ERROR OffCommand::Invoke(std::function<void(CHIP_ERROR)> responseCallback)
{
    OnOff::Commands::Off::Type request;
    return MediaCommandBase::Invoke(request, responseCallback);
}

CHIP_ERROR ToggleCommand::Invoke(std::function<void(CHIP_ERROR)> responseCallback)
{
    OnOff::Commands::Toggle::Type request;
    return MediaCommandBase::Invoke(request, responseCallback);
}
