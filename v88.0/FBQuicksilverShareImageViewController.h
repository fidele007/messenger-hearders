/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBModalContentViewController.h>
#import <Messenger/FBPopoverControllerDelegate.h>

@protocol FBQuicksilverShareOptionsConfiguration;
@class FBQuicksilverGameInfo, UIImageView, FBPopoverActionSheet, UIImage, NSNumber, NSString;

@interface FBQuicksilverShareImageViewController : UIViewController <FBModalContentViewController, FBPopoverControllerDelegate> {

	FBQuicksilverGameInfo* _gameInfo;
	UIImageView* _imageView;
	FBPopoverActionSheet* _sharePopoverActionSheet;
	id<FBQuicksilverShareOptionsConfiguration> _configuration;
	UIImage* _image;
	NSNumber* _score;

}

@property (nonatomic,copy,readonly) UIImage * image;                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSNumber * score;                    //@synthesize score=_score - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)initWithGameInfo:(id)arg1 score:(id)arg2 image:(id)arg3 configuration:(id)arg4 ;
-(id)headerViewForModalContainerViewController:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(UIImage *)image;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSNumber *)score;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end
