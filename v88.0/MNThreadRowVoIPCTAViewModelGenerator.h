/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadRowCTAViewModelGenerating.h>

@protocol MNAuthenticationManager;
@class FBUserSession, MNAttachmentStyleRendererManager, MNThreadRowVoIPCTAExperimentContext, NSString;

@interface MNThreadRowVoIPCTAViewModelGenerator : NSObject <FBClassProvidable, MNThreadRowCTAViewModelGenerating> {

	FBUserSession* _session;
	id<MNAuthenticationManager> _authManager;
	MNAttachmentStyleRendererManager* _attachmentStyleRendererManager;
	MNThreadRowVoIPCTAExperimentContext* _experimentContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_getExperimentContextAndLogExposure;
-(id)_rtcViewModelFromMessage:(id)arg1 ;
-(id)ctaViewModelForMessageSet:(id)arg1 threadSummary:(id)arg2 ;
@end

