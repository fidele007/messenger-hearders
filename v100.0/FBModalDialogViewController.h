/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBModalDialogView, FBPopoverController;

@interface FBModalDialogViewController : UIViewController {

	FBModalDialogView* _modalDialogView;
	FBPopoverController* _fb_popoverController;

}

@property (nonatomic,readonly) FBModalDialogView * modalDialogView;                            //@synthesize modalDialogView=_modalDialogView - In the implementation block
@property (nonatomic,__weak,readonly) FBPopoverController * fb_popoverController;              //@synthesize fb_popoverController=_fb_popoverController - In the implementation block
-(FBPopoverController *)fb_popoverController;
-(void)_registerObservers;
-(id)initWithView:(id)arg1 popoverController:(id)arg2 ;
-(FBModalDialogView *)modalDialogView;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)orientationChanged:(id)arg1 ;
@end

