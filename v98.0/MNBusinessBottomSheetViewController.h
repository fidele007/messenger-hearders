/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNBusinessBottomSheetViewDelegate.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol MNModalPresentation, MNActionSheetPresentationDelegate;
@class FBUserSession, UIViewController, NSString;

@interface MNBusinessBottomSheetViewController : UIViewController <MNBusinessBottomSheetViewDelegate, MNActionSheetPresenting> {

	FBUserSession* _session;
	id<MNModalPresentation> _modalPresenter;
	UIViewController* _viewControllerToPresent;
	NSString* _closeButtonTitle;
	id _viewControllerClosedBlock;
	double _displayHeightRatio;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(id)presentViewController:(id)arg1 session:(id)arg2 modalPresenter:(id)arg3 displayHeightRatio:(double)arg4 title:(id)arg5 closeButtonTitle:(id)arg6 viewControllerClosedBlock:(/*^block*/id)arg7 ;
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(void)businessBottomSheetViewDidTapCloseButton:(id)arg1 ;
-(id)initWithSession:(id)arg1 modalPresenter:(id)arg2 viewControllerToPresent:(id)arg3 displayHeightRatio:(double)arg4 title:(id)arg5 closeButtonTitle:(id)arg6 viewControllerClosedBlock:(/*^block*/id)arg7 ;
-(void)setTitle:(id)arg1 ;
-(void)loadView;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end
