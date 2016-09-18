/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncThreadKey, NSString, MNMessagesSyncGenericMapMutation;

@interface MNMessagesSyncDeltaAmendMessage : NSObject <TBase, NSCoding> {

	MNMessagesSyncThreadKey* __threadKey;
	NSString* __amendedMessageId;
	long long __timestamp;
	long long __actorFbId;
	MNMessagesSyncGenericMapMutation* __mutation;
	BOOL __threadKey_isset;
	BOOL __amendedMessageId_isset;
	BOOL __timestamp_isset;
	BOOL __actorFbId_isset;
	BOOL __mutation_isset;

}

@property (setter=setThreadKey:,getter=threadKey,nonatomic,retain) MNMessagesSyncThreadKey * threadKey; 
@property (setter=setAmendedMessageId:,getter=amendedMessageId,nonatomic,retain) NSString * amendedMessageId; 
@property (assign,setter=setTimestamp:,getter=timestamp,nonatomic) long long timestamp; 
@property (assign,setter=setActorFbId:,getter=actorFbId,nonatomic) long long actorFbId; 
@property (setter=setMutation:,getter=mutation,nonatomic,retain) MNMessagesSyncGenericMapMutation * mutation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThreadKey:(MNMessagesSyncThreadKey *)arg1 ;
-(void)read:(id)arg1 ;
-(void)setActorFbId:(long long)arg1 ;
-(BOOL)threadKeyIsSet;
-(BOOL)actorFbIdIsSet;
-(long long)actorFbId;
-(MNMessagesSyncGenericMapMutation *)mutation;
-(void)setMutation:(MNMessagesSyncGenericMapMutation *)arg1 ;
-(void)unsetActorFbId;
-(void)unsetThreadKey;
-(BOOL)timestampIsSet;
-(void)unsetTimestamp;
-(void)setAmendedMessageId:(NSString *)arg1 ;
-(id)initWithThreadKey:(id)arg1 amendedMessageId:(id)arg2 timestamp:(long long)arg3 actorFbId:(long long)arg4 mutation:(id)arg5 ;
-(NSString *)amendedMessageId;
-(BOOL)amendedMessageIdIsSet;
-(void)unsetAmendedMessageId;
-(BOOL)mutationIsSet;
-(void)unsetMutation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)timestamp;
-(void)setTimestamp:(long long)arg1 ;
-(void)validate;
-(MNMessagesSyncThreadKey *)threadKey;
-(void)write:(id)arg1 ;
@end

