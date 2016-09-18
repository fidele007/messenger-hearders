/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBEventListener.h>

@protocol FBApplicationSendEventHookable;
@class FBFacebookRedirectionView, UIApplication, FBFacebookRedirectionListenerAnnouncer, NSString;

@interface FBFacebookRedirectionViewController : UIViewController <FBEventListener> {

	FBFacebookRedirectionView* _facebookRedirectionView;
	UIApplication*<FBApplicationSendEventHookable> _application;
	FBFacebookRedirectionListenerAnnouncer* _announcer;
	BOOL _enableDismiss;
	unsigned long long _unreadCount;
	NSString* _bannerText;

}

@property (nonatomic,copy) NSString * bannerText;                         //@synthesize bannerText=_bannerText - In the implementation block
@property (assign,nonatomic) unsigned long long unreadCount;              //@synthesize unreadCount=_unreadCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willSendEvent:(id)arg1 ;
-(void)didSendEvent:(id)arg1 ;
-(void)startObservingEvents;
-(void)stopObservingEvents;
-(void)redirectionDismissViewTapped;
-(void)redirectionViewTapped;
-(void)setEnableDismiss:(BOOL)arg1 ;
-(void)addFacebookRedirectionListener:(id)arg1 ;
-(id)init;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setUnreadCount:(unsigned long long)arg1 ;
-(void)setBannerText:(NSString *)arg1 ;
-(NSString *)bannerText;
-(unsigned long long)unreadCount;
@end

