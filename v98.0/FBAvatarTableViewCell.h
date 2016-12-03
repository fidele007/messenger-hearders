/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBTableViewWithSeparatorCell_DEPRECATED.h>
#import <Messenger/FBTextLabeling.h>

@class FBAvatarReusableView_DEPRECATED, UIView, UIButton, UIColor, NSString, FBAvatarProfilePictureView, NSAttributedString, FBRichTextView;

@interface FBAvatarTableViewCell : FBTableViewWithSeparatorCell_DEPRECATED <FBTextLabeling> {

	FBAvatarReusableView_DEPRECATED* _avatarReusableView;
	UIView* _lineView;
	BOOL _showSeparator;
	BOOL _preSelected;
	UIButton* _actionButton;

}

@property (nonatomic,retain) UIButton * actionButton;                                     //@synthesize actionButton=_actionButton - In the implementation block
@property (assign,nonatomic) BOOL multiSelectionEnabled; 
@property (nonatomic,retain) FBMemModelObject*<FBAvatarProtocol> avatar; 
@property (nonatomic,retain) CGColorRef normalTextColor; 
@property (nonatomic,retain) CGColorRef highlightedTextColor; 
@property (assign,nonatomic) BOOL boldSortedNameComponent; 
@property (assign,nonatomic) BOOL showSeparator;                                          //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,retain) UIColor * lineSeparatorColor; 
@property (assign,nonatomic) double fontSize; 
@property (assign,getter=isPreSelected,nonatomic) BOOL preSelected;                       //@synthesize preSelected=_preSelected - In the implementation block
@property (nonatomic,copy) NSString * actionButtonTitle; 
@property (assign,nonatomic) BOOL actionButtonEnabled; 
@property (nonatomic,readonly) FBAvatarProfilePictureView * avatarImageView; 
@property (nonatomic,copy) NSAttributedString * text; 
@property (nonatomic,readonly) FBRichTextView * attributedLabel; 
@property (assign,nonatomic) long long verticalTextAlignment; 
@property (nonatomic,readonly) CGRect textLayoutFrame; 
-(void)setActionButtonEnabled:(BOOL)arg1 ;
-(void)_O_hoverBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_O_hoverEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setLineSeparatorColor:(UIColor *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 session:(id)arg3 ;
-(void)setNormalTextColor:(CGColorRef)arg1 ;
-(UIEdgeInsets)textPadding;
-(FBRichTextView *)attributedLabel;
-(void)setPreSelected:(BOOL)arg1 ;
-(void)setVerticalTextAlignment:(long long)arg1 ;
-(long long)verticalTextAlignment;
-(CGRect)textLayoutFrame;
-(FBAvatarProfilePictureView *)avatarImageView;
-(void)refreshCell;
-(CGColorRef)normalTextColor;
-(BOOL)boldSortedNameComponent;
-(void)setBoldSortedNameComponent:(BOOL)arg1 ;
-(UIColor *)lineSeparatorColor;
-(id)nameAndImageReusableView;
-(BOOL)actionButtonEnabled;
-(BOOL)isPreSelected;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setHighlightedTextColor:(CGColorRef)arg1 ;
-(CGColorRef)highlightedTextColor;
-(void)setFontSize:(double)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(double)fontSize;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(UIButton *)actionButton;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
-(void)setAvatar:(FBMemModelObject*<FBAvatarProtocol>)arg1 ;
-(FBMemModelObject*<FBAvatarProtocol>)avatar;
-(void)setActionButton:(UIButton *)arg1 ;
@end
