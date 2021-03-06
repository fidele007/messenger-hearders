/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBBarButtonItemContainerView : UIView {

	BOOL _expandTapTarget;
	UIView* _containedView;
	unsigned long long _mode;

}

@property (nonatomic,readonly) UIView * containedView;               //@synthesize containedView=_containedView - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL expandTapTarget;                 //@synthesize expandTapTarget=_expandTapTarget - In the implementation block
-(id)initWithFrame:(CGRect)arg1 containedView:(id)arg2 mode:(unsigned long long)arg3 expandTapTarget:(BOOL)arg4 ;
-(UIView *)containedView;
-(BOOL)expandTapTarget;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)alignmentRectInsets;
-(unsigned long long)mode;
@end

