/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "GameAction.h"

enum class ModifyGroupType : uint8_t
{
    AddGroup,
    RemoveGroup,
    SetPermissions,
    SetName,
    SetDefault,
    Count
};

enum class PermissionState : uint8_t
{
    Toggle,
    SetAll,
    ClearAll,
    Count
};

DEFINE_GAME_ACTION(NetworkModifyGroupAction, GAME_COMMAND_MODIFY_GROUPS, GameActions::Result)
{
private:
    ModifyGroupType _type{ ModifyGroupType::Count };
    uint8_t _groupId{ std::numeric_limits<uint8_t>::max() };
    std::string _name;
    uint32_t _permissionIndex{ std::numeric_limits<uint32_t>::max() };
    PermissionState _permissionState{ PermissionState::Count };

public:
    NetworkModifyGroupAction() = default;
    NetworkModifyGroupAction(
        ModifyGroupType type, uint8_t groupId = std::numeric_limits<uint8_t>::max(), const std::string name = "",
        uint32_t permissionIndex = 0, PermissionState permissionState = PermissionState::Count);

    uint16_t GetActionFlags() const override;

    void Serialise(DataSerialiser & stream) override;
    GameActions::Result::Ptr Query() const override;
    GameActions::Result::Ptr Execute() const override;
};
