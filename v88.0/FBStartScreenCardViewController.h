/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBQuicksilverCardsContainerViewController.h>
#import <Messenger/FBQuicksilverMatchOverviewViewControllerDelegate.h>
#import <Messenger/FBQuicksilverStartViewController.h>

@protocol FBQuicksilverStartViewControllerDelegate;
@class FBQuicksilverMatchOverviewViewController, FBQuicksilverGameInfo, FBUserSession, NSString;

@interface FBStartScreenCardViewController : FBQuicksilverCardsContainerViewController <FBQuicksilverMatchOverviewViewControllerDelegate, FBQuicksilverStartViewController> {

	FBQuicksilverMatchOverviewViewController* _matchOverviewViewController;
	FBQuicksilverGameInfo* _gameInfo;
	long long _startScreenMode;
	FBUserSession* _session;
	id<FBQuicksilverStartViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBQuicksilverStartViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 startScreenMode:(long long)arg3 ;
-(id)funnelName;
-(void)quicksilverMatchOverviewViewController:(id)arg1 startGameWithSessionInfo:(id)arg2 ;
-(void)quicksilverMatchOverviewViewControllerDidTapPlaySoloButton:(id)arg1 withViewerInfo:(id)arg2 ;
-(void)quicksilverMatchOverviewViewControllerDidTapPlayButton:(id)arg1 withThreadMatchViewModel:(id)arg2 ;
-(void)quicksilverMatchOverviewViewController:(id)arg1 startGameWithSessionInfoAndWaitForLoad:(id)arg2 ;
-(id)screenTypeForFunnelLogging;
-(void)didStartGameLoading;
-(void)didProgressGameLoading:(double)arg1 ;
-(void)didFinishGameLoading;
-(void)_logFunnelActionWithThreadMatchViewModel:(id)arg1 ;
-(void)setDelegate:(id<FBQuicksilverStartViewControllerDelegate>)arg1 ;
-(id<FBQuicksilverStartViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end

