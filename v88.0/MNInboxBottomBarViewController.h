/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNInboxBottomBarViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNInboxBottomBarViewControllerDelegate;
@class ZRBannerDataCache, ZRTariffedUxSessionManager, MNZRBannerDismissalManager, MNInboxBottomBarView, NSString;

@interface MNInboxBottomBarViewController : UIViewController <MNInboxBottomBarViewDelegate, FBClassProvidable> {

	id<FBProvider> _navigationCoordinatorProvider;
	ZRBannerDataCache* _zeroRatingBannerCache;
	ZRTariffedUxSessionManager* _zeroRatingTariffedUxSessionManager;
	MNZRBannerDismissalManager* _zeroRatingBannerDismissalManager;
	MNInboxBottomBarView* _bottomBarView;
	id<MNInboxBottomBarViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInboxBottomBarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_zeroRatingBannerDataChanged:(id)arg1 ;
-(void)_zeroRatingStatusChanged:(id)arg1 ;
-(id)initWithZeroRatingBannerCache:(id)arg1 zeroRatingBannerDismissalManager:(id)arg2 zeroRatingTariffedUxSessionManager:(id)arg3 navigationCoordinatorProvider:(id)arg4 ;
-(void)_updateZeroRatingBannerVisibility;
-(BOOL)_shouldShowZeroRatingBanner;
-(void)_openLink:(id)arg1 nonZeroRatedUxSentry:(id)arg2 ;
-(void)inboxBottomViewDidDismissZRPromoBanner:(id)arg1 ;
-(void)inboxBottomViewOpensURL:(id)arg1 ;
-(void)setDelegate:(id<MNInboxBottomBarViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInboxBottomBarViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)contentHeight;
@end

