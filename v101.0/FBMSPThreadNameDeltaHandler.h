/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesSyncIrisDeltaProcessing.h>

@protocol MNMessageIdNormalizing, MNAuthenticationManager;
@class FBMSPThreadUpdater, MNThreadUpdateService, MNNewLocallyNotifiableMessageHelper, NSString;

@interface FBMSPThreadNameDeltaHandler : NSObject <FBViewerContextClassProvidable, MNMessagesSyncIrisDeltaProcessing> {

	FBMSPThreadUpdater* _threadUpdater;
	MNThreadUpdateService* _threadUpdateService;
	id<MNMessageIdNormalizing> _messageIdNormalizer;
	id<MNAuthenticationManager> _authManager;
	MNNewLocallyNotifiableMessageHelper* _newLocallyNotifiableMessageHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 ;
-(id)_buildMessageFromDelta:(id)arg1 ;
-(id)initWithThreadUpdater:(id)arg1 threadUpdateService:(id)arg2 messageIdNormalizer:(id)arg3 authManager:(id)arg4 newLocallyNotifiableMessageHelper:(id)arg5 ;
-(void)_processThreadNameChangeFromDeltaDeta:(id)arg1 ;
@end
