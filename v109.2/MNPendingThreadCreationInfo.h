/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBOutgoingMessage, FBStringWithRedactedDescription, UIImage;

@interface MNPendingThreadCreationInfo : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBOutgoingMessage* _createWithMessage_message;
	BOOL _createWithMessage_canUseExistingGroup;
	FBStringWithRedactedDescription* _createAsGroup_customName;
	UIImage* _createAsGroup_profileImage;
	BOOL _createAsGroup_shouldPinGroup;
	FBOutgoingMessage* _createAsMontage_message;

}
+(id)createWithMessageWithMessage:(id)arg1 canUseExistingGroup:(BOOL)arg2 ;
+(id)createAsGroupWithCustomName:(id)arg1 profileImage:(id)arg2 shouldPinGroup:(BOOL)arg3 ;
+(id)createAsMontageWithMessage:(id)arg1 ;
-(void)matchCreateWithMessage:(/*^block*/id)arg1 createAsGroup:(/*^block*/id)arg2 createAsMontage:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

