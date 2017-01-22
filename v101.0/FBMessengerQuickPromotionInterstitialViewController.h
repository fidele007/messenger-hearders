/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBNuxBannerControllerDelegate.h>
#import <Messenger/FBPresentableViewController.h>
#import <Messenger/FBMessengerInboxCountsListener.h>

@protocol FBNuxBannerViewController;
@class NSString, FBUserSession, NSDictionary, UIViewController;

@interface FBMessengerQuickPromotionInterstitialViewController : UIViewController <FBNuxBannerControllerDelegate, FBPresentableViewController, FBMessengerInboxCountsListener> {

	/*^block*/id _fallbackViewControllerFactory;
	NSString* _quickPromotionTrigger;
	FBUserSession* _session;
	NSDictionary* _quickPromotionTriggerContext;
	UIViewController*<FBNuxBannerViewController> _quickPromotionBannerViewController;

}

@property (nonatomic,retain) UIViewController*<FBNuxBannerViewController> quickPromotionBannerViewController;              //@synthesize quickPromotionBannerViewController=_quickPromotionBannerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_enableChatBarButton;
-(BOOL)fb_showAuxiliaryViewController;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(void)nuxBannerControllerDidDismissBanner:(id)arg1 ;
-(void)setQuickPromotionBannerViewController:(UIViewController*<FBNuxBannerViewController>)arg1 ;
-(UIViewController*<FBNuxBannerViewController>)quickPromotionBannerViewController;
-(CGRect)_contentViewControllerFrame;
-(void)messengerInboxCountsDidUpdate:(id)arg1 ;
-(id)initWithSession:(id)arg1 quickPromotionTrigger:(id)arg2 fallbackViewControllerFactory:(/*^block*/id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)_removeContentViewController:(id)arg1 ;
-(void)_addContentViewController:(id)arg1 ;
@end
