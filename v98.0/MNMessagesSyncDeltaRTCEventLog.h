/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSString;

@interface MNMessagesSyncDeltaRTCEventLog : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	BOOL __answered;
	long long __startTime;
	long long __duration;
	int __eventType;
	BOOL __acknowledged;
	NSString* __callId;
	BOOL __messageMetadata_isset;
	BOOL __answered_isset;
	BOOL __startTime_isset;
	BOOL __duration_isset;
	BOOL __eventType_isset;
	BOOL __acknowledged_isset;
	BOOL __callId_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (assign,setter=setAnswered:,getter=answered,nonatomic) BOOL answered; 
@property (assign,setter=setStartTime:,getter=startTime,nonatomic) long long startTime; 
@property (assign,setter=setDuration:,getter=duration,nonatomic) long long duration; 
@property (assign,setter=setEventType:,getter=eventType,nonatomic) int eventType; 
@property (assign,setter=setAcknowledged:,getter=acknowledged,nonatomic) BOOL acknowledged; 
@property (setter=setCallId:,getter=callId,nonatomic,retain) NSString * callId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)callIdIsSet;
-(void)unsetCallId;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(BOOL)messageMetadataIsSet;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(BOOL)answeredIsSet;
-(BOOL)startTimeIsSet;
-(BOOL)durationIsSet;
-(BOOL)eventTypeIsSet;
-(void)unsetEventType;
-(void)unsetMessageMetadata;
-(id)initWithMessageMetadata:(id)arg1 answered:(BOOL)arg2 startTime:(long long)arg3 duration:(long long)arg4 eventType:(int)arg5 acknowledged:(BOOL)arg6 callId:(id)arg7 ;
-(void)unsetAnswered;
-(void)unsetStartTime;
-(void)unsetDuration;
-(BOOL)acknowledgedIsSet;
-(void)unsetAcknowledged;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(void)validate;
-(long long)startTime;
-(void)setAcknowledged:(BOOL)arg1 ;
-(BOOL)acknowledged;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(void)setCallId:(NSString *)arg1 ;
-(NSString *)callId;
-(BOOL)answered;
-(void)setAnswered:(BOOL)arg1 ;
-(void)write:(id)arg1 ;
@end

