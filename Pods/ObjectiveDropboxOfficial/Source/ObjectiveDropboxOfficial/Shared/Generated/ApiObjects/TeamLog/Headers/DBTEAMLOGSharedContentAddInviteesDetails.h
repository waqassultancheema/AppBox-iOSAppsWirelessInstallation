///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGAccessLevel;
@class DBTEAMLOGSharedContentAddInviteesDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentAddInviteesDetails` struct.
///
/// Invited user to Dropbox and added them to shared file/folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentAddInviteesDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Shared content access level.
@property (nonatomic, readonly) DBSHARINGAccessLevel *sharedContentAccessLevel;

/// A list of invitees.
@property (nonatomic, readonly) NSArray<NSString *> *invitees;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedContentAccessLevel Shared content access level.
/// @param invitees A list of invitees.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedContentAccessLevel:(DBSHARINGAccessLevel *)sharedContentAccessLevel
                                        invitees:(NSArray<NSString *> *)invitees;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentAddInviteesDetails` struct.
///
@interface DBTEAMLOGSharedContentAddInviteesDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentAddInviteesDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentAddInviteesDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentAddInviteesDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedContentAddInviteesDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentAddInviteesDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentAddInviteesDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharedContentAddInviteesDetails`
/// object.
///
+ (DBTEAMLOGSharedContentAddInviteesDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
