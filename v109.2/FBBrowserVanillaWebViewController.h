/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBUserSession, NSURL, UIView;

@interface FBBrowserVanillaWebViewController : UIViewController {

	FBUserSession* _session;
	NSURL* _URL;
	unsigned long long _webViewClass;
	UIView* _webView;

}
-(BOOL)fb_showNavBarSearchField;
-(id)initWithURL:(id)arg1 webViewClass:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 webViewClass:(unsigned long long)arg2 withUserSession:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

