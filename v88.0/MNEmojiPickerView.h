/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNEmojiPageViewDelegate.h>
#import <Messenger/FBPagingViewDelegate.h>
#import <Messenger/FBPagingViewDataSource.h>

@protocol MNEmojiPickerViewDelegate;
@class NSArray, FBPagingView, UIPageControl, NSString;

@interface MNEmojiPickerView : UIView <MNEmojiPageViewDelegate, FBPagingViewDelegate, FBPagingViewDataSource> {

	int _numberOfPages;
	int _numberOfRows;
	int _numberOfColumns;
	id<MNEmojiPickerViewDelegate> _delegate;
	NSArray* _emojiSet;
	FBPagingView* _pagingView;
	UIPageControl* _pageControl;

}

@property (nonatomic,copy) NSArray * emojiSet;                                           //@synthesize emojiSet=_emojiSet - In the implementation block
@property (nonatomic,retain) FBPagingView * pagingView;                                  //@synthesize pagingView=_pagingView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                //@synthesize pageControl=_pageControl - In the implementation block
@property (assign,nonatomic) int numberOfPages;                                          //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) int numberOfRows;                                           //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (assign,nonatomic) int numberOfColumns;                                        //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic,__weak) id<MNEmojiPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)pagingView:(id)arg1 shouldRecycleView:(id)arg2 ;
-(void)pagingViewDidEndScroll:(id)arg1 ;
-(id)pagingView:(id)arg1 viewForPageAtIndex:(unsigned long long)arg2 ;
-(void)emojiPageDidClickBackspace:(id)arg1 ;
-(void)emojiPage:(id)arg1 didPickEmoji:(id)arg2 ;
-(void)setEmojiSet:(NSArray *)arg1 ;
-(NSArray *)emojiSet;
-(id)emojiSetForPage:(unsigned long long)arg1 ;
-(int)numberPerPage;
-(void)configureBasedOnSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNEmojiPickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(int)numberOfColumns;
-(id<MNEmojiPickerViewDelegate>)delegate;
-(int)numberOfRows;
-(double)height;
-(void)_pageControlValueChanged:(id)arg1 ;
-(void)setNumberOfPages:(int)arg1 ;
-(void)setNumberOfRows:(int)arg1 ;
-(int)numberOfPages;
-(UIPageControl *)pageControl;
-(void)setNumberOfColumns:(int)arg1 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(FBPagingView *)pagingView;
-(unsigned long long)numberOfPagesInPagingView:(id)arg1 ;
-(void)setPagingView:(FBPagingView *)arg1 ;
@end

