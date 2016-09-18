/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessage, FBMThreadMessageInsertDependentUpdateInstructions, NSString, FBMSyncedThreadKey, FBMExtensibleMessagePropertyUpdate;

@interface FBMThreadMessageUpdate : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMMessage* _add_message;
	FBMThreadMessageInsertDependentUpdateInstructions* _add_dependentUpdateInstructions;
	NSString* _delete_messageId;
	FBMSyncedThreadKey* _delete_threadKey;
	NSString* _replace_messageIdToReplace;
	FBMMessage* _replace_messageReplacement;
	FBMExtensibleMessagePropertyUpdate* _updateExtensibleProperty;

}
+(id)addWithMessage:(id)arg1 dependentUpdateInstructions:(id)arg2 ;
+(id)deleteWithMessageId:(id)arg1 threadKey:(id)arg2 ;
+(id)replaceWithMessageIdToReplace:(id)arg1 messageReplacement:(id)arg2 ;
+(id)updateExtensibleProperty:(id)arg1 ;
-(void)matchAdd:(/*^block*/id)arg1 delete:(/*^block*/id)arg2 replace:(/*^block*/id)arg3 updateExtensibleProperty:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
