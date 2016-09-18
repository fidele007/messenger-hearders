/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNBusinessSignupWelcomeViewDelegate.h>
#import <Messenger/MNBusinessSignupFetcherDelegate.h>
#import <Messenger/MNBusinessSignupViewControllerDelegate.h>
#import <Messenger/FBWebViewControllerDelegate.h>

@protocol MNBusinessSignupWelcomeViewControllerDelegate;
@class FBNetworkImageView, FBImageDownloader, FBUserSession, NSString, MNBusinessSignupViewControllerFactory, MNBusinessSignupWelcomeView, MNBusinessSignupFetcher, FBMemMNCommerceNewUserSignup, MNBusinessSignupWelcomeScreenUberExperimentContext;

@interface MNBusinessSignupWelcomeViewController : UIViewController <MNBusinessSignupWelcomeViewDelegate, MNBusinessSignupFetcherDelegate, MNBusinessSignupViewControllerDelegate, FBWebViewControllerDelegate> {

	FBNetworkImageView* _logoImageView;
	FBImageDownloader* _imageDownloader;
	FBUserSession* _session;
	NSString* _providerName;
	NSString* _promoData;
	MNBusinessSignupViewControllerFactory* _signupViewControllerFactory;
	MNBusinessSignupWelcomeView* _signupWelcomeView;
	MNBusinessSignupFetcher* _fetcher;
	FBMemMNCommerceNewUserSignup* _memModel;
	MNBusinessSignupWelcomeScreenUberExperimentContext* _welcomeScreenExperimentContext;
	id<MNBusinessSignupWelcomeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBusinessSignupWelcomeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapCancelButton;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2 ;
-(void)signupFetcher:(id)arg1 didFailFetchingSignupDataWithError:(id)arg2 ;
-(void)signupFetcher:(id)arg1 didFinishFetchingSignupDataWithMemModel:(id)arg2 ;
-(void)signupViewControllerDidFinishSignup:(id)arg1 ;
-(void)_logExperimentExposures;
-(void)_login;
-(void)_signup;
-(void)signupWelcomeView:(id)arg1 didProceedIsLogin:(BOOL)arg2 ;
-(id)initWithImageDownloader:(id)arg1 session:(id)arg2 providerName:(id)arg3 promoData:(id)arg4 signupViewControllerFactory:(id)arg5 ;
-(void)setDelegate:(id<MNBusinessSignupWelcomeViewControllerDelegate>)arg1 ;
-(id<MNBusinessSignupWelcomeViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
@end

