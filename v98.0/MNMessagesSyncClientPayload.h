/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, MNMessagesSyncFailedSend, NSString;

@interface MNMessagesSyncClientPayload : NSObject <TBase, NSCoding> {

	NSMutableArray* __deltas;
	long long __firstDeltaSeqId;
	long long __lastIssuedSeqId;
	long long __queueEntityId;
	MNMessagesSyncFailedSend* __failedSend;
	NSString* __syncToken;
	NSString* __errorCode;
	BOOL __deltas_isset;
	BOOL __firstDeltaSeqId_isset;
	BOOL __lastIssuedSeqId_isset;
	BOOL __queueEntityId_isset;
	BOOL __failedSend_isset;
	BOOL __syncToken_isset;
	BOOL __errorCode_isset;

}

@property (setter=setDeltas:,getter=deltas,nonatomic,retain) NSMutableArray * deltas; 
@property (assign,setter=setFirstDeltaSeqId:,getter=firstDeltaSeqId,nonatomic) long long firstDeltaSeqId; 
@property (assign,setter=setLastIssuedSeqId:,getter=lastIssuedSeqId,nonatomic) long long lastIssuedSeqId; 
@property (assign,setter=setQueueEntityId:,getter=queueEntityId,nonatomic) long long queueEntityId; 
@property (setter=setFailedSend:,getter=failedSend,nonatomic,retain) MNMessagesSyncFailedSend * failedSend; 
@property (setter=setSyncToken:,getter=syncToken,nonatomic,retain) NSString * syncToken; 
@property (setter=setErrorCode:,getter=errorCode,nonatomic,retain) NSString * errorCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)errorCodeIsSet;
-(long long)firstDeltaSeqId;
-(NSMutableArray *)deltas;
-(long long)lastIssuedSeqId;
-(long long)queueEntityId;
-(MNMessagesSyncFailedSend *)failedSend;
-(id)initWithDeltas:(id)arg1 firstDeltaSeqId:(long long)arg2 lastIssuedSeqId:(long long)arg3 queueEntityId:(long long)arg4 failedSend:(id)arg5 syncToken:(id)arg6 errorCode:(id)arg7 ;
-(BOOL)deltasIsSet;
-(BOOL)lastIssuedSeqIdIsSet;
-(BOOL)syncTokenIsSet;
-(void)read:(id)arg1 ;
-(void)setDeltas:(NSMutableArray *)arg1 ;
-(void)setFirstDeltaSeqId:(long long)arg1 ;
-(void)setLastIssuedSeqId:(long long)arg1 ;
-(void)setQueueEntityId:(long long)arg1 ;
-(void)unsetDeltas;
-(BOOL)firstDeltaSeqIdIsSet;
-(void)unsetFirstDeltaSeqId;
-(void)unsetLastIssuedSeqId;
-(BOOL)queueEntityIdIsSet;
-(void)unsetQueueEntityId;
-(void)unsetSyncToken;
-(void)unsetErrorCode;
-(BOOL)failedSendIsSet;
-(void)setFailedSend:(MNMessagesSyncFailedSend *)arg1 ;
-(void)unsetFailedSend;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)errorCode;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
@end
