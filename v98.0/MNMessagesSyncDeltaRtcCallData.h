/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSString, MNMessagesSyncParticipantInfo;

@interface MNMessagesSyncDeltaRtcCallData : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	NSString* __callState;
	NSString* __serverInfoData;
	MNMessagesSyncParticipantInfo* __initiator;
	BOOL __messageMetadata_isset;
	BOOL __callState_isset;
	BOOL __serverInfoData_isset;
	BOOL __initiator_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (setter=setCallState:,getter=callState,nonatomic,retain) NSString * callState; 
@property (setter=setServerInfoData:,getter=serverInfoData,nonatomic,retain) NSString * serverInfoData; 
@property (setter=setInitiator:,getter=initiator,nonatomic,retain) MNMessagesSyncParticipantInfo * initiator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serverInfoData;
-(void)read:(id)arg1 ;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(BOOL)messageMetadataIsSet;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(BOOL)callStateIsSet;
-(BOOL)initiatorIsSet;
-(void)setServerInfoData:(NSString *)arg1 ;
-(void)unsetMessageMetadata;
-(id)initWithMessageMetadata:(id)arg1 callState:(id)arg2 serverInfoData:(id)arg3 initiator:(id)arg4 ;
-(void)unsetCallState;
-(BOOL)serverInfoDataIsSet;
-(void)unsetServerInfoData;
-(void)unsetInitiator;
-(void)setCallState:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(NSString *)callState;
-(void)setInitiator:(MNMessagesSyncParticipantInfo *)arg1 ;
-(MNMessagesSyncParticipantInfo *)initiator;
-(void)write:(id)arg1 ;
@end

