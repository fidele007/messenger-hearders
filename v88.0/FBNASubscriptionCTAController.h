/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNASubscriptionCTAPresenting, FBIntentHandler;
@class FBNativeArticleView, FBPopoverController, NSString, FBUserSession, NSArray;

@interface FBNASubscriptionCTAController : NSObject {

	id<FBNASubscriptionCTAPresenting> _ctaPresentationController;
	FBNativeArticleView* _articleView;
	FBPopoverController* _popoverController;
	id<FBIntentHandler> _intentHandler;
	NSString* _articleID;
	FBUserSession* _session;
	NSArray* _trackingCodes;
	id _currentCTAViewModel;
	BOOL _storyHasBeenScrolled;
	BOOL _isSubscriptionCTAPresented;

}
-(void)_querySubscriptionCTA;
-(void)_dismissSubscriptionCTA;
-(BOOL)_hasScrolledFarEnough:(id)arg1 ;
-(void)_presentSubscriptionCTA;
-(void)_handleInstantArticle:(id)arg1 user:(id)arg2 ;
-(void)_didDownloadEmailCTA:(id)arg1 ;
-(void)_didDownloadPageLikeCTAForPage:(id)arg1 ctaID:(id)arg2 ;
-(void)_didDownloadFreeTrialCTAForPage:(id)arg1 trialDuration:(double)arg2 ctaID:(id)arg3 ;
-(void)_didDownloadMessengerPageSubscriptionCTA:(id)arg1 ;
-(void)_presentFreeTrialCTAModalPrompt:(id)arg1 trialDuration:(double)arg2 ctaID:(id)arg3 ;
-(id)initWithArticleView:(id)arg1 articleID:(id)arg2 intentHandler:(id)arg3 session:(id)arg4 trackingCodes:(id)arg5 ;
-(void)articleDidAppear;
-(void)articleDidDisappear;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
@end

