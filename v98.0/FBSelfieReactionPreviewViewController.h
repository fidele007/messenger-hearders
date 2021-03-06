/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBSelfieReactionPreviewViewControllerDelegate;
@class UIImageView, UIImage, UIView, UIButton;

@interface FBSelfieReactionPreviewViewController : UIViewController {

	UIImageView* _imageView;
	UIImage* _image;
	UIView* _buttonRow;
	UIButton* _reactButton;
	UIButton* _retakeButton;
	id<FBSelfieReactionPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSelfieReactionPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSelfieReactionImage:(id)arg1 ;
-(void)_didTapReact;
-(void)_didTapRetake;
-(void)setDelegate:(id<FBSelfieReactionPreviewViewControllerDelegate>)arg1 ;
-(id<FBSelfieReactionPreviewViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
@end

