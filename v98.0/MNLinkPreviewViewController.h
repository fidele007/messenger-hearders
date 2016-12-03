/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)_initPreviewActionItems;
-(BOOL)isPreviewingEligible;
-(id)previewingType;
-(void)commitAction;
-(void)_initWebViewContainerController;
-(void)_openLink;
-(void)_forwardLink;
-(void)_copyLink;
-(id)initWithLinkPreviewingContext:(id)arg1 intentHandler:(id)arg2 session:(id)arg3 previewWidth:(double)arg4 ;
-(void)setDelegate:(id<MNLinkPreviewViewControllerDelegate>)arg1 ;
-(id<MNLinkPreviewViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)previewActionItems;
@end
