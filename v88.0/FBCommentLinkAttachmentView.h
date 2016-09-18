/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, FBNetworkImageView, UIImageView, FBMemStoryAttachment;

@interface FBCommentLinkAttachmentView : UIControl {

	FBLayout _boxLayout;
	FBLayout _textLayout;
	FBLayout _imageLayout;
	UILabel* _descriptionLabel;
	FBNetworkImageView* _imageView;
	UILabel* _sourceLabel;
	UIImageView* _textBox;
	UILabel* _titleLabel;
	FBMemStoryAttachment* _storyAttachment;

}

@property (nonatomic,retain) FBMemStoryAttachment * storyAttachment;              //@synthesize storyAttachment=_storyAttachment - In the implementation block
-(FBMemStoryAttachment *)storyAttachment;
-(void)setStoryAttachment:(FBMemStoryAttachment *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 style:(unsigned long long)arg3 ;
-(void)_setLayoutsForStyle:(unsigned long long)arg1 ;
-(void)_updateLabel:(id)arg1 withText:(id)arg2 ;
-(void)setLinkAttachment:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSource:(id)arg1 ;
-(void)setDescription:(id)arg1 ;
-(void)setImageURL:(id)arg1 ;
@end

