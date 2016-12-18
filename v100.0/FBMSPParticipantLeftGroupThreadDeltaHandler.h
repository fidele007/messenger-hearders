/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesSyncIrisDeltaProcessing.h>

@protocol MNThreadSummaryCacheReading, MNAuthenticationManager, MNMessageIdNormalizing;
@class FBMSPThreadUpdater, MNThreadUpdateService, NSString;

@interface FBMSPParticipantLeftGroupThreadDeltaHandler : NSObject <FBViewerContextClassProvidable, MNMessagesSyncIrisDeltaProcessing> {

	FBMSPThreadUpdater* _threadUpdater;
	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	MNThreadUpdateService* _threadUpdateService;
	id<MNAuthenticationManager> _authenticationManager;
	id<MNMessageIdNormalizing> _messageIdNormalizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_incrementalPersistenceJobDescriptionsForDelta:(id)arg1 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 ;
-(id)_buildMessageFromDelta:(id)arg1 ;
-(id)initWithThreadUpdater:(id)arg1 threadSummaryCacheReader:(id)arg2 authenticationManager:(id)arg3 threadUpdateService:(id)arg4 messageIdNormalizer:(id)arg5 ;
-(BOOL)_shouldPrepareThreadForDelta:(id)arg1 ;
-(BOOL)_isLeaverSelfInDelta:(id)arg1 ;
-(BOOL)_shouldProcessDeltaData:(id)arg1 ;
-(void)_processRemoveParticipantFromThreadFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
