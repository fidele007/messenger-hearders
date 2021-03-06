/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, FBStringWithRedactedDescription;

@interface MNSecureMessagingRegisteredDeviceSettings : FBValueObject <NSCoding, NSCopying> {

	NSData* _publicKey;
	long long _primaryDeviceStatus;
	long long _deviceStatus;
	FBStringWithRedactedDescription* _codeName;

}

@property (nonatomic,copy,readonly) NSData * publicKey;                                      //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) long long primaryDeviceStatus;                                //@synthesize primaryDeviceStatus=_primaryDeviceStatus - In the implementation block
@property (nonatomic,readonly) long long deviceStatus;                                       //@synthesize deviceStatus=_deviceStatus - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * codeName;              //@synthesize codeName=_codeName - In the implementation block
-(id)initWithPublicKey:(id)arg1 primaryDeviceStatus:(long long)arg2 deviceStatus:(long long)arg3 codeName:(id)arg4 ;
-(long long)primaryDeviceStatus;
-(FBStringWithRedactedDescription *)codeName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)deviceStatus;
-(NSData *)publicKey;
@end

