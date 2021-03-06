/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNThreadActorViewDelegate;
@interface MNThreadActorView : UIView {

	id<MNThreadActorViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadActorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)hideAll:(id)arg1 ;
-(void)showMenuAtLocation:(CGPoint)arg1 showsHide:(BOOL)arg2 showsHideAll:(BOOL)arg3 ;
-(void)setDelegate:(id<MNThreadActorViewDelegate>)arg1 ;
-(id<MNThreadActorViewDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)hideMenu;
-(void)hide:(id)arg1 ;
@end

