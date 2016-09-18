/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNMessengerCodePresentViewDelegate.h>
#import <Messenger/MNUserHashResetListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNModalPresentation;
@class FBMLoggedInUserInfoManager, MNMessengerCodeImageDownloader, MNUserHashResetManager, MNUserHashResetListenerAnnouncer, FBUserSession, FBAnalytics, MNMessengerCodePresentView, UIImage, NSString;

@interface MNMessengerCodePresentViewController : UIViewController <MNMessengerCodePresentViewDelegate, MNUserHashResetListener, FBClassProvidable> {

	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNMessengerCodeImageDownloader* _messengerCodeImageDownloader;
	id<MNModalPresentation> _modalPresenter;
	MNUserHashResetManager* _userHashResetManager;
	MNUserHashResetListenerAnnouncer* _userHashResetListenerAnnouncer;
	FBUserSession* _session;
	FBAnalytics* _analytics;
	MNMessengerCodePresentView* _presentView;
	UIImage* _messengerCodeImage;
	CGSize _messengerCodeSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithLoggedInUserInfoManager:(id)arg1 messengerCodeImageDownloader:(id)arg2 modalPresenter:(id)arg3 userHashResetManager:(id)arg4 userHashResetListenerAnnouncer:(id)arg5 session:(id)arg6 analytics:(id)arg7 ;
-(void)_updateMessengerCodeImage;
-(void)_shareMessengerCodeInSourceView:(id)arg1 fromSourceRect:(CGRect)arg2 ;
-(void)_confirmResetMessengerCode;
-(void)_saveMessengerCodeImageToCameraRoll;
-(void)_presentShareMessengerCodeViewWithImage:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)_prepareMessengerCodeImageForSharingWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_resetMessengerCode;
-(void)messengerCodePresentViewDidTapShareButton:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)messengerCodePresentViewDidTapMessengerCode:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 ;
-(void)userHashResetToUserHash:(id)arg1 forUserId:(id)arg2 ;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end

