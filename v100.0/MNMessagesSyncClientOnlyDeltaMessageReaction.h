/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncThreadKey, NSString;

@interface MNMessagesSyncClientOnlyDeltaMessageReaction : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	NSString* __messageId;
	int __action;
	long long __userId;
	NSString* __reaction;
	long long __senderId;
	NSString* __offlineThreadingId;
	BOOL __threadKey_isset;
	BOOL __messageId_isset;
	BOOL __action_isset;
	BOOL __userId_isset;
	BOOL __reaction_isset;
	BOOL __senderId_isset;
	BOOL __offlineThreadingId_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (setter=setMessageId:,getter=messageId,nonatomic,retain) NSString * messageId; 
@property (assign,setter=setAction:,getter=action,nonatomic) int action; 
@property (assign,setter=setUserId:,getter=userId,nonatomic) long long userId; 
@property (setter=setReaction:,getter=reaction,nonatomic,retain) NSString * reaction; 
@property (assign,setter=setSenderId:,getter=senderId,nonatomic) long long senderId; 
@property (setter=setOfflineThreadingId:,getter=offlineThreadingId,nonatomic,retain) NSString * offlineThreadingId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)senderId;
-(NSString *)offlineThreadingId;
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(void)read:(id)arg1 ;
-(void)setOfflineThreadingId:(NSString *)arg1 ;
-(BOOL)offlineThreadingIdIsSet;
-(void)unsetOfflineThreadingId;
-(NSString *)reaction;
-(BOOL)messageIdIsSet;
-(void)unsetMessageId;
-(BOOL)actionIsSet;
-(BOOL)threadKeyIsSet;
-(BOOL)senderIdIsSet;
-(void)setSenderId:(long long)arg1 ;
-(void)setReaction:(NSString *)arg1 ;
-(BOOL)userIdIsSet;
-(void)unsetUserId;
-(void)unsetThreadKey;
-(void)unsetSenderId;
-(id)initWithThreadKey:(id)arg1 messageId:(id)arg2 action:(int)arg3 userId:(long long)arg4 reaction:(id)arg5 senderId:(long long)arg6 offlineThreadingId:(id)arg7 ;
-(void)unsetAction;
-(BOOL)reactionIsSet;
-(void)unsetReaction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)validate;
-(MNMessagesSyncThreadKey *)threadKey;
-(void)write:(id)arg1 ;
-(void)setUserId:(long long)arg1 ;
-(long long)userId;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
@end

