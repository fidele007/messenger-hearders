/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMessagesTitleViewDelegate;
@class UILabel, UIImageView, UIControl, FBKVOController, NSString, MNMessagesTitleViewConfiguration;

@interface MNMessagesTitleView : UIView {

	UILabel* _titleLabel;
	UIImageView* _titleCaretImageView;
	UILabel* _subtitleLabel;
	UILabel* _previousSubtitleLabel;
	UIControl* _tapRegionControl;
	FBKVOController* _KVOController;
	BOOL _compactMode;
	id<MNMessagesTitleViewDelegate> _delegate;
	NSString* _title;
	NSString* _subtitle;
	unsigned long long _titleViewMode;
	MNMessagesTitleViewConfiguration* _messagesTitleViewConfig;

}

@property (assign,nonatomic,__weak) id<MNMessagesTitleViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                     //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,getter=isCompactMode,nonatomic) BOOL compactMode;                                 //@synthesize compactMode=_compactMode - In the implementation block
@property (assign,nonatomic) unsigned long long titleViewMode;                                      //@synthesize titleViewMode=_titleViewMode - In the implementation block
@property (nonatomic,copy) MNMessagesTitleViewConfiguration * messagesTitleViewConfig;              //@synthesize messagesTitleViewConfig=_messagesTitleViewConfig - In the implementation block
-(void)setCompactMode:(BOOL)arg1 ;
-(BOOL)isCompactMode;
-(void)setSubtitle:(id)arg1 accessibilityLabel:(id)arg2 animated:(BOOL)arg3 ;
-(MNMessagesTitleViewConfiguration *)messagesTitleViewConfig;
-(id)initWithFrame:(CGRect)arg1 titleViewConfiguration:(id)arg2 ;
-(void)setMessagesTitleViewConfig:(MNMessagesTitleViewConfiguration *)arg1 ;
-(void)setTitleViewMode:(unsigned long long)arg1 ;
-(void)_didTapLabel;
-(void)_updateHighlighted;
-(void)_updateCaretImageView;
-(void)_updateTitleColor;
-(void)_updateSubtitle;
-(void)_updateTitleCaretColor;
-(void)setSubtitle:(id)arg1 accessibilityLabel:(id)arg2 ;
-(unsigned long long)titleViewMode;
-(void)setDelegate:(id<MNMessagesTitleViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMessagesTitleViewDelegate>)delegate;
-(NSString *)title;
-(void)reset;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)_sizeChanged;
-(void)_updateLabels;
@end
