/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncDeltaNewMessage, NSString;

@interface MNMessagesSyncDeltaReplaceMessage : NSObject <TBase, NSCoding> {

	MNMessagesSyncDeltaNewMessage* __newMessage;
	NSString* __replacedMessageId;
	BOOL __newMessage_isset;
	BOOL __replacedMessageId_isset;

}

@property (setter=setNewMessage:,getter=newMessage,nonatomic,retain) MNMessagesSyncDeltaNewMessage * newMessage; 
@property (setter=setReplacedMessageId:,getter=replacedMessageId,nonatomic,retain) NSString * replacedMessageId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(NSString *)replacedMessageId;
-(void)setNewMessage:(MNMessagesSyncDeltaNewMessage *)arg1 ;
-(void)setReplacedMessageId:(NSString *)arg1 ;
-(id)initWithNewMessage:(id)arg1 replacedMessageId:(id)arg2 ;
-(BOOL)newMessageIsSet;
-(void)unsetNewMessage;
-(BOOL)replacedMessageIdIsSet;
-(void)unsetReplacedMessageId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(MNMessagesSyncDeltaNewMessage *)newMessage;
-(void)write:(id)arg1 ;
@end
