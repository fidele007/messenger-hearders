/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBNetworkImageView, UIImageView, UIView, FBRichTextView, NSString, NSURL;

@interface FBSideFeedUnitListItemView : UIView {

	FBNetworkImageView* _coverImageView;
	UIImageView* _coverImageShadowView;
	UIView* _playIcon;
	FBRichTextView* _titleView;
	FBRichTextView* _subtitleView;
	BOOL _hasPlayIcon;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) NSURL * coverImageURL; 
@property (assign,nonatomic) BOOL hasPlayIcon;                   //@synthesize hasPlayIcon=_hasPlayIcon - In the implementation block
+(id)_addLineSpacingToTitle:(id)arg1 ;
+(double)height;
+(double)imageWidth;
+(double)imageHeight;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(NSURL *)coverImageURL;
-(void)setCoverImageURL:(NSURL *)arg1 ;
-(void)setHasPlayIcon:(BOOL)arg1 ;
-(BOOL)hasPlayIcon;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

