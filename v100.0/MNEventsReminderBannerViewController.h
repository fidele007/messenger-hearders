/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNEvensReminderBannerViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNEventsReminderBannerViewControllerDelegate;
@class MNEventsReminderActionHandler, FBMobileConfigContextManager, FBUserSession, MNEventsReminderBannerView, FBMThreadEventsReminder, NSString;

@interface MNEventsReminderBannerViewController : UIViewController <MNEvensReminderBannerViewDelegate, FBClassProvidable> {

	MNEventsReminderActionHandler* _actionHandler;
	FBMobileConfigContextManager* _configManager;
	FBUserSession* _session;
	MNEventsReminderBannerView* _bannerView;
	FBMThreadEventsReminder* _reminder;
	BOOL _optmisiticallyHideButtons;
	id<MNEventsReminderBannerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEventsReminderBannerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithActionHandler:(id)arg1 configManager:(id)arg2 session:(id)arg3 ;
-(void)_updateBannerWithViewModel;
-(BOOL)_shouldShowRSVPLabel;
-(BOOL)_shouldShowRSVPButtons;
-(BOOL)_shouldShowRSVPFeature;
-(void)_rollBackOptimisticUpdate;
-(void)_resetOptimisticUpdate;
-(void)didTapBannerView:(id)arg1 forReminder:(id)arg2 ;
-(void)bannerView:(id)arg1 didTapCantGoForReminder:(id)arg2 ;
-(void)bannerView:(id)arg1 didTapGoingForReminder:(id)arg2 ;
-(void)updateWithReminder:(id)arg1 ;
-(void)setDelegate:(id<MNEventsReminderBannerViewControllerDelegate>)arg1 ;
-(id<MNEventsReminderBannerViewControllerDelegate>)delegate;
-(void)loadView;
@end

