/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber, NSArray;

@interface FBBluetoothData : NSObject <NSCoding> {

	BOOL _isIBeacon;
	long long _rssi;
	NSString* _hardwareAddress;
	NSString* _uuid;
	NSNumber* _major;
	NSNumber* _minor;
	NSArray* _flattenedPayload;
	NSString* _legacyFBPayload;

}

@property (nonatomic,readonly) BOOL isIBeacon;                               //@synthesize isIBeacon=_isIBeacon - In the implementation block
@property (nonatomic,readonly) long long rssi;                               //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy,readonly) NSString * hardwareAddress;              //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSNumber * major;                             //@synthesize major=_major - In the implementation block
@property (nonatomic,readonly) NSNumber * minor;                             //@synthesize minor=_minor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * flattenedPayload;              //@synthesize flattenedPayload=_flattenedPayload - In the implementation block
@property (nonatomic,copy,readonly) NSString * legacyFBPayload;              //@synthesize legacyFBPayload=_legacyFBPayload - In the implementation block
-(BOOL)isIBeacon;
-(NSString *)hardwareAddress;
-(NSArray *)flattenedPayload;
-(NSString *)legacyFBPayload;
-(id)initWithBLEBeacon:(id)arg1 ;
-(id)initWithIBeacon:(id)arg1 ;
-(id)initWithIsIbeacon:(BOOL)arg1 rssi:(long long)arg2 uuid:(id)arg3 major:(id)arg4 minor:(id)arg5 payload:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(long long)rssi;
-(NSNumber *)major;
-(NSNumber *)minor;
@end

