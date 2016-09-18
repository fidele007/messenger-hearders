/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBDataWithRedactedDescription, NSString;

@interface MNSecureMessagingSessionCryptoState : FBValueObject <NSCoding, NSCopying> {

	FBDataWithRedactedDescription* _libSignalSessionRecord;
	NSString* _otherUserFbId;
	NSString* _deviceId;

}

@property (nonatomic,copy,readonly) FBDataWithRedactedDescription * libSignalSessionRecord;              //@synthesize libSignalSessionRecord=_libSignalSessionRecord - In the implementation block
@property (nonatomic,copy,readonly) NSString * otherUserFbId;                                            //@synthesize otherUserFbId=_otherUserFbId - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceId;                                                 //@synthesize deviceId=_deviceId - In the implementation block
-(NSString *)otherUserFbId;
-(id)initWithLibSignalSessionRecord:(id)arg1 otherUserFbId:(id)arg2 deviceId:(id)arg3 ;
-(FBDataWithRedactedDescription *)libSignalSessionRecord;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceId;
@end
