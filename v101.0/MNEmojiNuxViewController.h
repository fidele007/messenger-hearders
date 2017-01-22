/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNEmojiNuxViewDelegate.h>
#import <Messenger/FBNetworkImageViewDelegate.h>

@class MNEmojiNuxView, FBNetworkImageView, NSString;

@interface MNEmojiNuxViewController : UIViewController <MNEmojiNuxViewDelegate, FBNetworkImageViewDelegate> {

	/*^block*/id _dismissBlock;
	MNEmojiNuxView* _emojiNuxView;
	FBNetworkImageView* _imageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDismissBlock:(/*^block*/id)arg1 ;
-(id)initWithImageDownloader:(id)arg1 ;
-(void)networkImageViewDidLoadImage:(id)arg1 ;
-(void)_initImageViewWithImageDownloader:(id)arg1 ;
-(void)emojiNuxViewDidTapTryIt:(id)arg1 ;
-(void)emojiNuxViewDidTapNotNow:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
@end
