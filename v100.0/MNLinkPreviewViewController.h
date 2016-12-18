/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNPreviewViewController.h>

@protocol MNLinkPreviewViewControllerDelegate;
@class MNLinkPreviewingContext, FBUserSession, FBWebViewContainerController, MNWebViewController, MNAppThemeConfiguration, MNIntentHandler, NSArray, NSString;

@interface MNLinkPreviewViewController : UIViewController <MNPreviewViewController> {

	MNLinkPreviewingContext* _linkPreviewingContext;
	double _previewWidth;
	FBUserSession* _session;
	FBWebViewContainerController* _webViewContainerController;
	MNWebViewController* _webViewController;
	MNAppThemeConfiguration* _appThemeConfiguration;
	MNIntentHandler* _intentHandler;
	NSArray* _previewActionItems;
	id<MNLinkPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLinkPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initWebViewContainerController;
-(void)_openLink;
-(void)_copyLink;
-(id)initWithLinkPreviewingContext:(id)arg1 intentHandler:(id)arg2 session:(id)arg3 previewWidth:(double)arg4 ;
-(void)_initPreviewActionItems;
-(void)_forwardLink;
-(BOOL)isPreviewingEligible;
-(id)previewingType;
-(void)commitAction;
-(void)setDelegate:(id<MNLinkPreviewViewControllerDelegate>)arg1 ;
-(id<MNLinkPreviewViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)previewActionItems;
@end

