/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBKVOController, UIView, UILabel;

@interface _FBCoverPhotoHeaderAvatarLabelView : UIView {

	FBKVOController* _KVOController;
	UIView* _backgroundImageView;
	UILabel* _label;

}

@property (nonatomic,readonly) UIView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                           //@synthesize label=_label - In the implementation block
+(id)_resizableAvatarOverlayBackgroundImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)backgroundImageView;
-(CGRect)_contentRectForBounds:(CGRect)arg1 ;
-(UILabel *)label;
-(void)_textDidChange;
@end

