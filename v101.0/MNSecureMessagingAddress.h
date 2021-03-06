/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNSecureMessagingAddress : FBValueObject <NSCoding, NSCopying> {

	NSString* _otherUserFbid;
	NSString* _deviceId;

}

@property (nonatomic,copy,readonly) NSString * otherUserFbid;              //@synthesize otherUserFbid=_otherUserFbid - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceId;                   //@synthesize deviceId=_deviceId - In the implementation block
-(id)initWithOtherUserFbid:(id)arg1 deviceId:(id)arg2 ;
-(NSString *)otherUserFbid;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceId;
@end

