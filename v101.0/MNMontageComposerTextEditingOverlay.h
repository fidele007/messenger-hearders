/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
@end
