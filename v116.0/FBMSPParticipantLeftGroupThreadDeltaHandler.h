/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>
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
-(id)_incrementalPersistenceJobDescriptionsForDelta:(id)arg1 ;
-(id)_buildMessageFromDelta:(id)arg1 ;
-(id)initWithThreadUpdater:(id)arg1 threadSummaryCacheReader:(id)arg2 authenticationManager:(id)arg3 threadUpdateService:(id)arg4 messageIdNormalizer:(id)arg5 ;
-(BOOL)_shouldPrepareThreadForDelta:(id)arg1 ;
-(BOOL)_isLeaverSelfInDelta:(id)arg1 ;
-(BOOL)_shouldProcessDeltaData:(id)arg1 ;
-(void)_processRemoveParticipantFromThreadFromDeltaData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

