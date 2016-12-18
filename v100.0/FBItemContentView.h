/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBUIConfigurable.h>
#import <Messenger/FBUIThreadSafeSizable.h>

@class FBRichTextView, NSString;

@interface FBItemContentView : UIView <FBUIConfigurable, FBUIThreadSafeSizable> {

	FBRichTextView* _titleTextView;
	FBRichTextView* _subtitleTextView;
	FBRichTextView* _secondarySubtitleTextView;
	FBRichTextView* _tertiarySubtitleTextView;
	FBItemContentViewLayout _cachedLayout;
	BOOL _invalidateCachedLayout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 ;
+(id)defaultFBUIConfig;
+(FBItemContentViewLayout)_layoutForConfig:(id)arg1 titleAttributedString:(id)arg2 subtitleAttributedString:(id)arg3 secondarySubtitleAttributedString:(id)arg4 tertiarySubtitleAttributedString:(id)arg5 constrainedToSize:(CGSize)arg6 ;
+(CGRect)_rectForString:(id)arg1 defaultFont:(id)arg2 shadowOffset:(CGSize)arg3 truncationToken:(id)arg4 origin:(CGPoint*)arg5 verticalSpacing:(double)arg6 maxLines:(unsigned long long)arg7 maxWidth:(double)arg8 ;
+(id)newWithTitle:(id)arg1 ;
+(id)newWithTitle:(id)arg1 imageDownloader:(id)arg2 ;
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 imageDownloader:(id)arg3 ;
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 secondarySubtitle:(id)arg3 ;
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 secondarySubtitle:(id)arg3 imageDownloader:(id)arg4 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)_updateLayoutForConfig:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(void)willRemoveSubview:(id)arg1 ;
-(id)accessibilityLabel;
-(id)config;
-(void)applyConfig:(id)arg1 ;
@end

