/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNModalPresentation, FBIntentHandler, MNInboxAdsManageAdHandlerDelegate;
@class FBMobileConfigContextManager;

@interface MNInboxAdsManageAdHandler : NSObject {

	id<MNModalPresentation> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	FBMobileConfigContextManager* _configManager;
	id<MNInboxAdsManageAdHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInboxAdsManageAdHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_adPreferencesActionWithAdPreferencesLink:(id)arg1 adProperties:(id)arg2 ;
-(void)_handleAdPreferencesActionWithAdPreferencesLink:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 intentHandler:(id)arg2 configManager:(id)arg3 ;
-(void)presentManageAdControllerForAdView:(id)arg1 ;
-(id)_hideAdActionWithAdViewModel:(id)arg1 ;
-(id)_reportAdActionWithAdViewModel:(id)arg1 ;
-(id)_adFeedbackActionWithAdViewModel:(id)arg1 ;
-(id)_adUserEducationActionWithAdViewModel:(id)arg1 ;
-(void)_handleHideAdActionWithAdViewModel:(id)arg1 ;
-(void)_handleReportAdActionWithAdViewModel:(id)arg1 ;
-(void)_handleAdFeedbackActionWithAdViewModel:(id)arg1 ;
-(void)_handleUserEducationActionWithAdViewModel:(id)arg1 ;
-(void)setDelegate:(id<MNInboxAdsManageAdHandlerDelegate>)arg1 ;
-(id<MNInboxAdsManageAdHandlerDelegate>)delegate;
@end

