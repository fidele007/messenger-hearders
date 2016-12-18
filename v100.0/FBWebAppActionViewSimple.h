/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebAppActionViewSimpleDelegate;
@class UILabel, UIButton, UIImageView;

@interface FBWebAppActionViewSimple : UIView {

	UILabel* _titleLabel;
	UIButton* _alButton;
	UIImageView* _alIcon;
	id<FBWebAppActionViewSimpleDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebAppActionViewSimpleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 titleLabel:(id)arg2 style:(unsigned long long)arg3 ;
-(void)setDelegate:(id<FBWebAppActionViewSimpleDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBWebAppActionViewSimpleDelegate>)delegate;
-(void)_handleTap:(id)arg1 ;
@end

