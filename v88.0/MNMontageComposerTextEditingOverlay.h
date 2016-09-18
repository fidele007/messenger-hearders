/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNMontageComposerTextEditingOverlayDelegate;
@interface MNMontageComposerTextEditingOverlay : UIView {

	id<MNMontageComposerTextEditingOverlayDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageComposerTextEditingOverlayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<MNMontageComposerTextEditingOverlayDelegate>)arg1 ;
-(id<MNMontageComposerTextEditingOverlayDelegate>)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithColor:(id)arg1 ;
-(void)fadeOut;
-(void)fadeIn;
@end
