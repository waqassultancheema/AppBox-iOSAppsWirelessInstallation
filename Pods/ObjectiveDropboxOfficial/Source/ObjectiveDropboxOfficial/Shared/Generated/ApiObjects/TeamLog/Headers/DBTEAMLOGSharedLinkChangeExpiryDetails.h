///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedLinkChangeExpiryDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedLinkChangeExpiryDetails` struct.
///
/// Changed shared link expiration date.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedLinkChangeExpiryDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New shared link expiration date. Might be missing due to historical data
/// gap.
@property (nonatomic, readonly, nullable) NSDate *dNewValue;

/// Previous shared link expiration date. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) NSDate *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New shared link expiration date. Might be missing due to
/// historical data gap.
/// @param previousValue Previous shared link expiration date. Might be missing
/// due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(nullable NSDate *)dNewValue previousValue:(nullable NSDate *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedLinkChangeExpiryDetails` struct.
///
@interface DBTEAMLOGSharedLinkChangeExpiryDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedLinkChangeExpiryDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSharedLinkChangeExpiryDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedLinkChangeExpiryDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedLinkChangeExpiryDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedLinkChangeExpiryDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedLinkChangeExpiryDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharedLinkChangeExpiryDetails`
/// object.
///
+ (DBTEAMLOGSharedLinkChangeExpiryDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
