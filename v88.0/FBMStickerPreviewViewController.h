/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBMStickerViewDelegate.h>

@protocol FBStickerResourceManager, FBMStickerPreviewViewControllerDelegate;
@class FBMStickerView, NSString;

@interface FBMStickerPreviewViewController : UIViewController <FBMStickerViewDelegate> {

	id<FBStickerResourceManager> _stickerResourceManager;
	FBMStickerView* _stickerPreviewView;
	id<FBMStickerPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMStickerPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerResourceManager:(id)arg1 ;
-(void)configureWithStickerFbId:(unsigned long long)arg1 originalImageSizeEnabled:(BOOL)arg2 ;
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(id)stickerPreview;
-(void)setDelegate:(id<FBMStickerPreviewViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMStickerPreviewViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
