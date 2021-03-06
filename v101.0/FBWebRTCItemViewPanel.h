/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCItemViewPanelDelegate;
@class FBWebRTCItemViewPanelLayout, NSMutableDictionary, NSArray;

@interface FBWebRTCItemViewPanel : UIView {

	NSArray* _activeItemViewCollection;
	FBWebRTCItemViewPanelLayout* _activeLayout;
	NSDictionary* _extraItemViews;
	NSArray* _extraItemViewCollection;
	FBWebRTCItemViewPanelLayout* _extraLayout;
	NSMutableDictionary* _minimumHorizontalPaddingToHorizontalSpacingMap;
	NSMutableDictionary* _minimumVerticalPaddingToVerticalSpacingMap;
	id<FBWebRTCItemViewPanelDelegate> _delegate;
	unsigned long long _horizontalSpacing;
	NSArray* _itemViewCollection;
	double _minimumHorizontalPadding;
	double _minimumVerticalPadding;
	unsigned long long _verticalSpacing;
	CGSize _itemSize;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UIEdgeInsets contentInsets;                                   //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCItemViewPanelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long horizontalSpacing;                         //@synthesize horizontalSpacing=_horizontalSpacing - In the implementation block
@property (nonatomic,readonly) CGSize itemSize;                                              //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemViewCollection;                            //@synthesize itemViewCollection=_itemViewCollection - In the implementation block
@property (nonatomic,readonly) double minimumHorizontalPadding;                              //@synthesize minimumHorizontalPadding=_minimumHorizontalPadding - In the implementation block
@property (nonatomic,readonly) double minimumVerticalPadding;                                //@synthesize minimumVerticalPadding=_minimumVerticalPadding - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalSpacing;                           //@synthesize verticalSpacing=_verticalSpacing - In the implementation block
-(void)setMinimumHorizontalPadding:(double)arg1 forHorizontalSpacing:(unsigned long long)arg2 ;
-(void)setItemViewCollection:(NSArray*)arg1 itemSize:(CGSize)arg2 horizontalSpacing:(unsigned long long)arg3 verticalSpacing:(unsigned long long)arg4 minimumHorizontalPadding:(double)arg5 minimumVerticalPadding:(double)arg6 contentInsets:(UIEdgeInsets)arg7 animated:(BOOL)arg8 ;
-(double)minimumHorizontalPadding;
-(double)minimumVerticalPadding;
-(id)_ensureActiveLayout;
-(void)_setExtraItemViews:(NSDictionary*)arg1 extraItemViewCollection:(NSArray*)arg2 layout:(id)arg3 ;
-(void)_setActiveItemViewCollection:(NSArray*)arg1 layout:(id)arg2 ;
-(double)_measuredHeight;
-(id)_ensureExtraLayout;
-(void)_invalidateCachedLayout;
-(id)_validateLayout:(id)arg1 ;
-(void)setMinimumVerticalPadding:(double)arg1 forVerticalSpacing:(unsigned long long)arg2 ;
-(unsigned long long)horizontalSpacing;
-(unsigned long long)verticalSpacing;
-(NSArray *)itemViewCollection;
-(double)minimumVerticalPaddingForVerticalSpacing:(unsigned long long)arg1 ;
-(double)minimumHorizontalPaddingForHorizontalSpacing:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCItemViewPanelDelegate>)arg1 ;
-(void)setNeedsLayout;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBWebRTCItemViewPanelDelegate>)delegate;
-(UIEdgeInsets)contentInsets;
-(CGSize)intrinsicContentSize;
-(CGSize)itemSize;
@end

