/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/SPTopBar.h>

@protocol FBMediaGalleryTopBarDelegate;
@class UILabel, UIButton, NSString;

@interface FBMediaGalleryTopBar : SPTopBar {

	UILabel* _titleLabel;
	UIButton* _backButton;
	UIButton* _selectButton;
	NSString* _actionButtonTitle;
	double _topLayoutGuideLength;
	id<FBMediaGalleryTopBarDelegate> _delegate;
	unsigned long long _selectionTitleValue;
	unsigned long long _backButtonStyle;

}

@property (assign,nonatomic,__weak) id<FBMediaGalleryTopBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selectionTitleValue;                        //@synthesize selectionTitleValue=_selectionTitleValue - In the implementation block
@property (assign,nonatomic) unsigned long long backButtonStyle;                            //@synthesize backButtonStyle=_backButtonStyle - In the implementation block
@property (assign,nonatomic) BOOL backButtonHidden; 
@property (assign,nonatomic) BOOL selectButtonEnabled; 
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(double)topLayoutGuideLength;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(void)setSelectButtonEnabled:(BOOL)arg1 ;
-(unsigned long long)selectionTitleValue;
-(unsigned long long)backButtonStyle;
-(BOOL)selectButtonEnabled;
-(BOOL)backButtonHidden;
-(void)setSelectionTitleValue:(unsigned long long)arg1 ;
-(void)setTopBarTitle:(id)arg1 ;
-(void)setBackButtonStyle:(unsigned long long)arg1 ;
-(void)_selectButtonTap:(id)arg1 ;
-(void)_setSelectButtonTitle:(unsigned long long)arg1 ;
-(void)_updateBackButtonForStyle:(unsigned long long)arg1 isHidden:(BOOL)arg2 ;
-(void)_backButtonTap:(id)arg1 ;
-(void)setDelegate:(id<FBMediaGalleryTopBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMediaGalleryTopBarDelegate>)delegate;
-(id)initWithConfiguration:(id)arg1 ;
@end
