/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNQuickPromotionBannerToastPresenterDelegate.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/MNInboxAppearanceEventListener.h>

@class FBUserSession, MNQuickPromotionBannerToastPresenter, MNSentimentSurveryNuxPresenter, MNRealtimeBannerStore, NSString;

@interface MNInboxTopBannerCoordinator : NSObject <MNQuickPromotionBannerToastPresenterDelegate, FBViewerContextClassProvidable, MNInboxAppearanceEventListener> {

	FBUserSession* _session;
	MNQuickPromotionBannerToastPresenter* _quickPromotionBannerToastPresenter;
	MNSentimentSurveryNuxPresenter* _sentimentSurveyNuxPresenter;
	MNRealtimeBannerStore* _realtimeBannerStore;
	long long _numberOfTimesInboxAppeared;
	unsigned long long _unseenThreadCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inboxViewAppearanceStateDidChangeTo:(unsigned long long)arg1 ;
-(void)inboxDidDisplayThreadList;
-(void)inboxDidLoadThreadListDataModel;
-(void)inboxDidFailToLoadThreadListDataModel;
-(void)inboxWillLoadMontageCamera;
-(void)inboxDidLoadMontageCamera;
-(id)initWithSession:(id)arg1 sentimentSurveyNuxPresenter:(id)arg2 realtimeBannerStore:(id)arg3 ;
-(void)_showNewBannerIfNeeded;
-(void)_inboxViewDidDisappear;
-(void)_showQPBannerIfNeeded;
-(void)_showSurveyIfNeeded;
-(BOOL)_userReturnedToInbox;
-(void)configureWithToastPresenter:(id)arg1 ;
-(void)setUnseenThreadCount:(unsigned long long)arg1 ;
-(void)quickPromotionBannerToastPresenter:(id)arg1 didUnloadPromotion:(id)arg2 ;
-(void)quickPromotionBannerToastPresenterDidChangeVisibility:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dealloc;
@end

