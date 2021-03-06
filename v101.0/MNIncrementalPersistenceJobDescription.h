/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, FBMMessage, MNIncrementalPersistenceJobDescriptionMessageIdentifier, FBMExtensibleMessagePropertyUpdate;

@interface MNIncrementalPersistenceJobDescription : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMSyncedThreadKey* _updateThread_threadKey;
	FBMSyncedThreadKey* _deleteThread_threadKey;
	FBMMessage* _insertMessage;
	MNIncrementalPersistenceJobDescriptionMessageIdentifier* _deleteMessage_identifier;
	long long _deleteMessage_threadAction;
	MNIncrementalPersistenceJobDescriptionMessageIdentifier* _replaceMessage_identifierForMessageToOverwrite;
	FBMMessage* _replaceMessage_newMessageFallbackContent;
	FBMExtensibleMessagePropertyUpdate* _updateExtensibleMessageProperty;

}
+(id)deleteThreadWithThreadKey:(id)arg1 ;
+(id)updateExtensibleMessageProperty:(id)arg1 ;
+(id)updateThreadWithThreadKey:(id)arg1 ;
+(id)replaceMessageWithIdentifierForMessageToOverwrite:(id)arg1 newMessageFallbackContent:(id)arg2 ;
+(id)deleteMessageWithIdentifier:(id)arg1 threadAction:(long long)arg2 ;
+(id)insertMessage:(id)arg1 ;
-(void)matchUpdateThread:(/*^block*/id)arg1 deleteThread:(/*^block*/id)arg2 insertMessage:(/*^block*/id)arg3 deleteMessage:(/*^block*/id)arg4 replaceMessage:(/*^block*/id)arg5 updateExtensibleMessageProperty:(/*^block*/id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

