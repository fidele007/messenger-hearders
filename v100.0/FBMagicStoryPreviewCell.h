/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol FBMagicStoryPreviewCellDelegate;
@class NSArray, UILabel, FBGradientView, FBUserSession, FBBurstAnimationImageView, NSString;

@interface FBMagicStoryPreviewCell : UICollectionViewCell {

	NSArray* _specifiers;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	FBGradientView* _gradientView;
	FBUserSession* _session;
	FBBurstAnimationImageView* _burstImageView;
	id<FBMagicStoryPreviewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryPreviewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) long long currentIndex; 
-(void)setSpecifiers:(id)arg1 withSession:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMagicStoryPreviewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBMagicStoryPreviewCellDelegate>)delegate;
-(NSString *)title;
-(long long)currentIndex;
-(NSString *)subtitle;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setCurrentIndex:(long long)arg1 ;
@end

