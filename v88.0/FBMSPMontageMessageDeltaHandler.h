/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesSyncIrisDeltaProcessing.h>

@class FBMSPNewMessageHandler, MNThreadUpdateService, FBMUserInvalidator, NSString;

@interface FBMSPMontageMessageDeltaHandler : NSObject <FBViewerContextClassProvidable, MNMessagesSyncIrisDeltaProcessing> {

	FBMSPNewMessageHandler* _newMessageHandler;
	MNThreadUpdateService* _threadUpdateService;
	FBMUserInvalidator* _userInvalidator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNewMessageHandler:(id)arg1 updateService:(id)arg2 userInvalidator:(id)arg3 ;
-(id)_newMessageDeltaForMontageDelta:(id)arg1 ;
-(void)_processMontageMessageDelta:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deltasWithMetadataFromDeltaWrapper:(id)arg1 startingWithSequenceId:(long long)arg2 receiveTime:(double)arg3 ;
-(void)handleDelta:(id)arg1 receiveTime:(double)arg2 completion:(/*^block*/id)arg3 ;
@end
