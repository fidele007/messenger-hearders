/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSecureThreadSummary, MNSecureMessage, NSString, FBMSecureThreadKey, MNSecureAttachmentContent;

@interface MNSecureMessagingPersistJob : NSObject <NSCopying> {

	unsigned long long _subtype;
	MNSecureThreadSummary* _updateThread_threadSummary;
	MNSecureMessage* _insertMessage_secureMessage;
	BOOL _insertMessage_isSending;
	NSString* _insertAttachment_messageId;
	FBMSecureThreadKey* _insertAttachment_threadKey;
	NSString* _insertAttachment_attachmentId;
	MNSecureAttachmentContent* _insertAttachment_attachment;
	FBMSecureThreadKey* _deleteThread_threadKey;
	NSString* _deleteMessage_messageId;
	FBMSecureThreadKey* _deleteMessage_threadKey;
	BOOL _deleteMessage_holdForReportingFlows;

}
+(id)deleteThreadWithThreadKey:(id)arg1 ;
+(id)insertAttachmentWithMessageId:(id)arg1 threadKey:(id)arg2 attachmentId:(id)arg3 attachment:(id)arg4 ;
+(id)deleteMessageWithMessageId:(id)arg1 threadKey:(id)arg2 holdForReportingFlows:(BOOL)arg3 ;
+(id)insertMessageWithSecureMessage:(id)arg1 isSending:(BOOL)arg2 ;
+(id)updateThreadWithThreadSummary:(id)arg1 ;
-(void)matchUpdateThread:(/*^block*/id)arg1 insertMessage:(/*^block*/id)arg2 insertAttachment:(/*^block*/id)arg3 deleteThread:(/*^block*/id)arg4 deleteMessage:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
