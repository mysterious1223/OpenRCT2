/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../../../sprites.h"
#include "../../RideData.h"
#include "../../ShopItem.h"
#include "../../Track.h"

// clang-format off
constexpr const RideTypeDescriptor WaterCoasterRTD =
{
    SET_FIELD(AlternateType, RIDE_TYPE_NULL),
    SET_FIELD(Category, RIDE_CATEGORY_ROLLERCOASTER),
    SET_FIELD(EnabledTrackPieces, (1ULL << TRACK_STRAIGHT) | (1ULL << TRACK_STATION_END) | (1ULL << TRACK_LIFT_HILL) | (1ULL << TRACK_FLAT_ROLL_BANKING) | (1ULL << TRACK_SLOPE) | (1ULL << TRACK_SLOPE_STEEP) | (1ULL << TRACK_SLOPE_CURVE) | (1ULL << TRACK_S_BEND) | (1ULL << TRACK_CURVE_SMALL) | (1ULL << TRACK_CURVE) | (1ULL << TRACK_HELIX_SMALL) | (1ULL << TRACK_BRAKES) | (1ULL << TRACK_BLOCK_BRAKES) | (1ULL << TRACK_ON_RIDE_PHOTO) | (1ULL << TRACK_BOOSTER)),
    SET_FIELD(ExtraTrackPieces, 0),
    SET_FIELD(CoveredTrackPieces, (1ULL << TrackElemType::Flat) | (1ULL << TrackElemType::LeftQuarterTurn5Tiles) | 
                                  (1ULL << TrackElemType::RightQuarterTurn5Tiles) | (1ULL << TrackElemType::SBendLeft) |
                                  (1ULL << TrackElemType::SBendRight)),
    SET_FIELD(StartTrackPiece, TrackElemType::EndStation),
    SET_FIELD(TrackPaintFunction, get_track_paint_function_water_rc),
    SET_FIELD(Flags, RIDE_TYPE_FLAGS_TRACK_HAS_3_COLOURS | RIDE_TYPE_FLAG_HAS_LEAVE_WHEN_ANOTHER_VEHICLE_ARRIVES_AT_STATION |
                     RIDE_TYPE_FLAGS_COMMON_COASTER | RIDE_TYPE_FLAGS_COMMON_COASTER_NON_ALT |
                     RIDE_TYPE_FLAG_TRACK_ELEMENTS_HAVE_TWO_VARIETIES | RIDE_TYPE_FLAG_HAS_LARGE_CURVES | RIDE_TYPE_FLAG_PEEP_CHECK_GFORCES),
    SET_FIELD(RideModes, EnumsToFlags(RideMode::ContinuousCircuit, RideMode::ContinuousCircuitBlockSectioned)),
    SET_FIELD(DefaultMode, RideMode::ContinuousCircuit),
    SET_FIELD(OperatingSettings, { 0, 0, 0, 17, 16, -1 }),
    SET_FIELD(Naming, { STR_RIDE_NAME_WATER_COASTER, STR_RIDE_DESCRIPTION_WATER_COASTER }),
    SET_FIELD(NameConvention, { RideComponentType::Boat, RideComponentType::Track, RideComponentType::Station }),
    SET_FIELD(EnumName, nameof(RIDE_TYPE_WATER_COASTER)),
    SET_FIELD(AvailableBreakdowns, (1 << BREAKDOWN_SAFETY_CUT_OUT) | (1 << BREAKDOWN_RESTRAINTS_STUCK_CLOSED) | (1 << BREAKDOWN_RESTRAINTS_STUCK_OPEN) | (1 << BREAKDOWN_VEHICLE_MALFUNCTION) | (1 << BREAKDOWN_BRAKES_FAILURE)),
    SET_FIELD(Heights, { 18, 24, 4, 7, }),
    SET_FIELD(MaxMass, 13),
    SET_FIELD(LiftData, { OpenRCT2::Audio::SoundId::LiftClassic, 4, 6 }),
    SET_FIELD(RatingsCalculationFunction, ride_ratings_calculate_water_coaster),
    SET_FIELD(RatingsMultipliers, { 50, 30, 10 }),
    SET_FIELD(UpkeepCosts, { 60, 20, 80, 8, 3, 10 }),
    SET_FIELD(BuildCosts, { 55, 4, 40, }),
    SET_FIELD(DefaultPrices, { 20, 20 }),
    SET_FIELD(DefaultMusic, MUSIC_STYLE_WATER),
    SET_FIELD(PhotoItem, ShopItem::Photo4),
    SET_FIELD(BonusValue, 60),
    SET_FIELD(ColourPresets, TRACK_COLOUR_PRESETS(
        { COLOUR_DARK_GREEN, COLOUR_DARK_GREEN, COLOUR_BLACK },
        { COLOUR_DARK_BROWN, COLOUR_DARK_BROWN, COLOUR_BORDEAUX_RED },
        { COLOUR_WHITE, COLOUR_WHITE, COLOUR_DARK_PURPLE },
    )),
    SET_FIELD(ColourPreview, { SPR_RIDE_DESIGN_PREVIEW_WATER_COASTER_TRACK, SPR_RIDE_DESIGN_PREVIEW_WATER_COASTER_SUPPORTS }),
    SET_FIELD(ColourKey, RideColourKey::Ride),
};
// clang-format on
