/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2023 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.105Release
// Tag = production/release/21.105.00-0-gdc65d24
/////////////////////////////////////////////////////////////////////////////////////////////


#import <Foundation/Foundation.h>

#import "FITDate.h"
#import "FITMessage.h"
#import "FITTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface FITJumpMesg : FITMessage
- (id)init;
// Timestamp 
- (BOOL)isTimestampValid;
- (FITDate *)getTimestamp;
- (void)setTimestamp:(FITDate *)timestamp;
// Distance 
- (BOOL)isDistanceValid;
- (FITFloat32)getDistance;
- (void)setDistance:(FITFloat32)distance;
// Height 
- (BOOL)isHeightValid;
- (FITFloat32)getHeight;
- (void)setHeight:(FITFloat32)height;
// Rotations 
- (BOOL)isRotationsValid;
- (FITUInt8)getRotations;
- (void)setRotations:(FITUInt8)rotations;
// HangTime 
- (BOOL)isHangTimeValid;
- (FITFloat32)getHangTime;
- (void)setHangTime:(FITFloat32)hangTime;
// Score 
- (BOOL)isScoreValid;
- (FITFloat32)getScore;
- (void)setScore:(FITFloat32)score;
// PositionLat 
- (BOOL)isPositionLatValid;
- (FITSInt32)getPositionLat;
- (void)setPositionLat:(FITSInt32)positionLat;
// PositionLong 
- (BOOL)isPositionLongValid;
- (FITSInt32)getPositionLong;
- (void)setPositionLong:(FITSInt32)positionLong;
// Speed 
- (BOOL)isSpeedValid;
- (FITFloat32)getSpeed;
- (void)setSpeed:(FITFloat32)speed;
// EnhancedSpeed 
- (BOOL)isEnhancedSpeedValid;
- (FITFloat32)getEnhancedSpeed;
- (void)setEnhancedSpeed:(FITFloat32)enhancedSpeed;

@end

NS_ASSUME_NONNULL_END