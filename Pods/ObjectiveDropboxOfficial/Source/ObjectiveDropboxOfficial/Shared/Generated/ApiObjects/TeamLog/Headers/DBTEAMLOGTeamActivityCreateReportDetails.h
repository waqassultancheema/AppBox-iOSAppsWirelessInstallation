///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTeamActivityCreateReportDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamActivityCreateReportDetails` struct.
///
/// Created team activity report.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamActivityCreateReportDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Report start date.
@property (nonatomic, readonly) NSDate *startDate;

/// Report end date.
@property (nonatomic, readonly) NSDate *endDate;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param startDate Report start date.
/// @param endDate Report end date.
///
/// @return An initialized instance.
///
- (instancetype)initWithStartDate:(NSDate *)startDate endDate:(NSDate *)endDate;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamActivityCreateReportDetails` struct.
///
@interface DBTEAMLOGTeamActivityCreateReportDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamActivityCreateReportDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamActivityCreateReportDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamActivityCreateReportDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGTeamActivityCreateReportDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamActivityCreateReportDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamActivityCreateReportDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGTeamActivityCreateReportDetails`
/// object.
///
+ (DBTEAMLOGTeamActivityCreateReportDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
