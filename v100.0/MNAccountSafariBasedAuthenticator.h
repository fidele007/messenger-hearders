/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/FBSafariBasedURLRequestControllerDelegate.h>
#import <Messenger/SFSafariViewControllerDelegate.h>
#import <Messenger/MNAccountAuthenticating.h>

@protocol MNAccountAuthenticatingDataSource;
@class MNAccountSafariBasedAuthenticatorInjector, FBSafariBasedURLRequestController, UIViewController, NSString, SFSafariViewController;

@interface MNAccountSafariBasedAuthenticator : NSObject <FBClassInjectable, FBSafariBasedURLRequestControllerDelegate, SFSafariViewControllerDelegate, MNAccountAuthenticating> {

	MNAccountSafariBasedAuthenticatorInjector* _injector;
	FBSafariBasedURLRequestController* _safariBasedURLRequestController;
	/*^block*/id _isUnavailableForAccountBlock;
	/*^block*/id _didAuthenticateBlock;
	/*^block*/id _didFailWithErrorBlock;
	/*^block*/id _didCancelBlock;
	UIViewController* _containerViewController;
	BOOL _isAuthenticating;
	NSString* _requestID;
	SFSafariViewController* _shownSafariViewController;
	id<MNAccountAuthenticatingDataSource> _authenticatingDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNAccountAuthenticatingDataSource> authenticatingDataSource;              //@synthesize authenticatingDataSource=_authenticatingDataSource - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)authenticateAccountWithAuthenticationContext:(id)arg1 isUnavailableForAccountBlock:(/*^block*/id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 didCancelBlock:(/*^block*/id)arg5 ;
-(id)analyticsTag;
-(BOOL)mayContinueAuthenticationOnFailure;
-(id<MNAccountAuthenticatingDataSource>)authenticatingDataSource;
-(void)setAuthenticatingDataSource:(id<MNAccountAuthenticatingDataSource>)arg1 ;
-(void)_startSafariBasedAuthenticationFlowWithRequestID:(id)arg1 ;
-(id)_responseBehavior;
-(void)_showSafariViewController:(id)arg1 ;
-(void)_completeAuthenticationWithIsUnavailable;
-(void)_completeAuthenticationWithDidCancel;
-(void)_handleAuthenticationNonce:(id)arg1 forUserWithFBID:(id)arg2 ;
-(void)_completeAuthenticationWithAuthenticationResult:(id)arg1 ;
-(void)_completeAuthenticationWithDidFailWithError:(id)arg1 ;
-(void)_completeAuthentication;
-(void)_hideSafariViewControllerIfNecessary;
-(void)safariBasedURLRequestController:(id)arg1 didCompleteRequestWithSuccess:(BOOL)arg2 usingSafariViewController:(id)arg3 ;
-(void)configureWithContainerViewController:(id)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
@end

