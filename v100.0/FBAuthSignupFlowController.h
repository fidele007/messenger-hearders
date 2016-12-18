/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthSignupControllingDelegate.h>
#import <Messenger/FBAuthControlling.h>

@protocol FBAuthSignupControlling, FBAuthUIPresenting, FBAuthSpinnerUIProviding, FBAuthControllingDelegate;
@class UIViewController, NSString;

@interface FBAuthSignupFlowController : NSObject <FBAuthSignupControllingDelegate, FBAuthControlling> {

	id<FBAuthSignupControlling> _signupController;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBAuthSpinnerUIProviding> _uiProvider;
	UIViewController* _presentingViewController;
	id<FBAuthControllingDelegate> _authDelegate;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(id<FBAuthControllingDelegate>)authDelegate;
-(id)initWithSignupController:(id)arg1 presentingViewController:(id)arg2 uiProvider:(id)arg3 uiPresenter:(id)arg4 identifier:(id)arg5 ;
-(void)signupController:(id)arg1 completedWithResponse:(id)arg2 ;
-(void)authenticate;
-(NSString *)identifier;
@end
