/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol MNActionSheetPresentationDelegate, MNThreadCustomizationPickerViewControllerDelegate;
@class MNThreadCustomizationPickerView, FBPickerView, NSString;

@interface MNThreadCustomizationPickerViewController : UIViewController <MNActionSheetPresenting> {

	MNThreadCustomizationPickerView* _customizationPickerView;
	FBPickerView* _pickerView;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;
	id<MNThreadCustomizationPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadCustomizationPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;                  //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(id)initWithPickerView:(id)arg1 title:(id)arg2 subtitle:(id)arg3 dismissButtonTitle:(id)arg4 dismissButtonColor:(id)arg5 ;
-(void)_optimizePickerViewDisplayForViewSize:(CGSize)arg1 ;
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(void)dismissButtonTapped;
-(void)displayErrorTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)setDelegate:(id<MNThreadCustomizationPickerViewControllerDelegate>)arg1 ;
-(id<MNThreadCustomizationPickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
@end

