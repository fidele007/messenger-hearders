/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDialog.h>

@protocol FBLoginDialogDelegate;
@interface FBLoginDialog : FBDialog {

	id<FBLoginDialogDelegate> _loginDelegate;

}

@property (assign,nonatomic) id<FBLoginDialogDelegate> loginDelegate;              //@synthesize loginDelegate=_loginDelegate - In the implementation block
-(id)initWithURL:(id)arg1 loginParams:(id)arg2 delegate:(id)arg3 ;
-(void)dialogDidSucceed:(id)arg1 ;
-(id<FBLoginDialogDelegate>)loginDelegate;
-(void)setLoginDelegate:(id<FBLoginDialogDelegate>)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)dialogDidCancel:(id)arg1 ;
@end

