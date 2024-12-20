// Autogenerated from Pigeon (v21.2.0), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class WAKELOCKPLUSToggleMessage;
@class WAKELOCKPLUSIsEnabledMessage;

/// Message for toggling the wakelock on the platform side.
@interface WAKELOCKPLUSToggleMessage : NSObject
+ (instancetype)makeWithEnable:(nullable NSNumber *)enable;
@property(nonatomic, strong, nullable) NSNumber * enable;
@end

/// Message for reporting the wakelock state from the platform side.
@interface WAKELOCKPLUSIsEnabledMessage : NSObject
+ (instancetype)makeWithEnabled:(nullable NSNumber *)enabled;
@property(nonatomic, strong, nullable) NSNumber * enabled;
@end

/// The codec used by all APIs.
NSObject<FlutterMessageCodec> *WAKELOCKPLUSGetMessagesCodec(void);

@protocol WAKELOCKPLUSWakelockPlusApi
- (void)toggleMsg:(WAKELOCKPLUSToggleMessage *)msg error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable WAKELOCKPLUSIsEnabledMessage *)isEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpWAKELOCKPLUSWakelockPlusApi(id<FlutterBinaryMessenger> binaryMessenger, NSObject<WAKELOCKPLUSWakelockPlusApi> *_Nullable api);

extern void SetUpWAKELOCKPLUSWakelockPlusApiWithSuffix(id<FlutterBinaryMessenger> binaryMessenger, NSObject<WAKELOCKPLUSWakelockPlusApi> *_Nullable api, NSString *messageChannelSuffix);

NS_ASSUME_NONNULL_END
