/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDate, MNSecureMessagingRegisteredCollectionSettings;

@interface MNSecureMessagingRegistrationState : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSData* _pending_pendingRegistrationKey;
	NSDate* _pending_startDateClientTime;
	NSData* _pending_pendingPublicKey;
	MNSecureMessagingRegisteredCollectionSettings* _registered_settings;

}
+(id)pendingWithPendingRegistrationKey:(id)arg1 startDateClientTime:(id)arg2 pendingPublicKey:(id)arg3 ;
+(id)registeredWithSettings:(id)arg1 ;
+(id)failed;
-(void)matchPending:(/*^block*/id)arg1 registered:(/*^block*/id)arg2 failed:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

