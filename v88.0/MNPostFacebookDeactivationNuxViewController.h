/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPostFacebookDeactivationNuxViewDelegate.h>

@protocol MNPostFacebookDeactivationNuxViewControllerDelegate;
@class MNPostFacebookDeactivationNuxView, NSString;

@interface MNPostFacebookDeactivationNuxViewController : UIViewController <MNPostFacebookDeactivationNuxViewDelegate> {

	MNPostFacebookDeactivationNuxView* _postFacebookDeactivationNuxView;
	id<MNPostFacebookDeactivationNuxViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPostFacebookDeactivationNuxViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postFacebookDeactivationNuxViewContinueButtonPressed:(id)arg1 ;
-(void)postFacebookDeactivationNuxViewLearnMoreButtonPressed:(id)arg1 ;
-(void)setDelegate:(id<MNPostFacebookDeactivationNuxViewControllerDelegate>)arg1 ;
-(id<MNPostFacebookDeactivationNuxViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

