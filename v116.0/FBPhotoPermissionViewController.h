/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
-(BOOL)fb_showNavBarSearchField;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
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

