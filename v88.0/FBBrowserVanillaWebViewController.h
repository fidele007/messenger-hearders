/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end

