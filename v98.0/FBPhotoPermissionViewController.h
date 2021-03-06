/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBPresentableViewController.h>

@protocol FBPhotoPermissionViewControllerDelegate;
@class NSString;

@interface FBPhotoPermissionViewController : UIViewController <FBPresentableViewController> {

	id<FBPhotoPermissionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPhotoPermissionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(BOOL)fb_showNavBarSearchField;
-(void)_didTapDone:(id)arg1 ;
-(void)setDelegate:(id<FBPhotoPermissionViewControllerDelegate>)arg1 ;
-(id<FBPhotoPermissionViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(CGSize)preferredContentSize;
-(long long)preferredInterfaceOrientationForPresentation;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
@end

