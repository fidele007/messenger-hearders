/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, NSSet;

@interface FBOutgoingMessageRecipientInfo : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMSyncedThreadKey* _singleRecipientInfo_threadKey;
	NSSet* _multiRecipientInfo_threadKeys;

}
+(id)montageRecipientInfo;
+(id)singleRecipientInfoWithThreadKey:(id)arg1 ;
+(id)multiRecipientInfoWithThreadKeys:(id)arg1 ;
-(void)matchSingleRecipientInfo:(/*^block*/id)arg1 multiRecipientInfo:(/*^block*/id)arg2 montageRecipientInfo:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
