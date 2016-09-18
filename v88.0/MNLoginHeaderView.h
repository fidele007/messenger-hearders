/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNFormHeaderView.h>

@class UIImage, UIImageView, UILabel;

@interface MNLoginHeaderView : MNFormHeaderView {

	/*^block*/id _titleGenerator;
	UIImage* _logoImage;
	unsigned long long _type;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)transitionToState:(unsigned long long)arg1 animateWithDuration:(double)arg2 animationOptions:(unsigned long long)arg3 ;
-(void)setType:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithType:(unsigned long long)arg1 titleGenerator:(/*^block*/id)arg2 logoImage:(id)arg3 ;
-(void)layoutSubviews;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)_layout;
-(void)_setup;
@end
