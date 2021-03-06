/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFeedBanner.h>

@protocol FBFeedNetworkErrorBannerDelegate;
@class FBFeedBannerPresenter, FBNetworkErrorBar, NSString;

@interface FBFeedNetworkErrorBanner : NSObject <FBFeedBanner> {

	id<FBFeedNetworkErrorBannerDelegate> _delegate;
	FBFeedBannerPresenter* _presenter;
	FBNetworkErrorBar* _bannerView;

}

@property (nonatomic,retain) FBNetworkErrorBar * bannerView;                                      //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,copy) NSString * errorMessage; 
@property (nonatomic,__weak,readonly) FBFeedBannerPresenter * presenter;                          //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,__weak,readonly) id<FBFeedNetworkErrorBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBannerPresenter:(id)arg1 delegate:(id)arg2 ;
-(void)_bannerTapped:(id)arg1 ;
-(void)showSecondaryNotification:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsBanner:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<FBFeedNetworkErrorBannerDelegate>)delegate;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setBannerView:(FBNetworkErrorBar *)arg1 ;
-(FBNetworkErrorBar *)bannerView;
-(FBFeedBannerPresenter *)presenter;
@end

