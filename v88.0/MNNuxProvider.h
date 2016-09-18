/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxProvider.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class MNPushInstructionsController, MNQuickPromotionThreadListQPPresenter, MNQuickPromotionThreadViewQPPresenter, MNQuickPromotionComposeNewThreadQPPresenter, FBUserSession, MNQuickPromotionInterstitialDataSource, MNUniqueIDInterstitialController, MNSecureThreadInterstitialController, MNPostFacebookDeactivationNuxController, MNEventsReminderInterstitialController, NSString;

@interface MNNuxProvider : NSObject <FBNuxProvider, FBClassProvidable> {

	MNPushInstructionsController* _pushInstructionsController;
	MNQuickPromotionThreadListQPPresenter* _threadListBannerQPPresenter;
	MNQuickPromotionThreadViewQPPresenter* _threadViewBannerQPPresenter;
	MNQuickPromotionComposeNewThreadQPPresenter* _composeNewThreadBannerQPPresenter;
	FBUserSession* _session;
	MNQuickPromotionInterstitialDataSource* _quickPromotionInterstitialDataSource;
	MNUniqueIDInterstitialController* _uniqueIDInterstitialController;
	id<FBProvider> _uniqueIDInterstitialControllerProvider;
	MNSecureThreadInterstitialController* _secureThreadInterstitialController;
	id<FBProvider> _secureThreadInterstitialControllerProvider;
	MNPostFacebookDeactivationNuxController* _postFacebookDeactivationNuxController;
	id<FBProvider> _eventsReminderInterstitialControllerProvider;
	MNEventsReminderInterstitialController* _eventsReminderInterstitialController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)nuxPresenters;
@end
