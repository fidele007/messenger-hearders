/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBBrowserChromeDelegate;
@class FBBrowserLayoutConfig, UIView, UIImageView, UIButton, UILabel, UIAccessibilityElement;

@interface FBBrowserSearchBoxView : UIView {

	FBBrowserLayoutConfig* _layoutConfig;
	UIView* _searchField;
	UIImageView* _backgroundView;
	UIButton* _tapButton;
	UILabel* _subdomainLabel;
	UIImageView* _lockIcon;
	UIView* _leftAccessoryView;
	UIImageView* _isPrefetchedIcon;
	UIView* _rightAccessoryView;
	UIButton* _reloadButton;
	UIButton* _stopLoadingButton;
	UIAccessibilityElement* _searchBoxAccessibilityElement;
	BOOL _loading;
	id<FBBrowserChromeDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * backgroundView;                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIButton * tapButton;                                   //@synthesize tapButton=_tapButton - In the implementation block
@property (nonatomic,readonly) UILabel * subdomainLabel;                               //@synthesize subdomainLabel=_subdomainLabel - In the implementation block
@property (nonatomic,readonly) UIView * lockIcon;                                      //@synthesize lockIcon=_lockIcon - In the implementation block
@property (nonatomic,readonly) UIView * searchField;                                   //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,readonly) UIView * leftAccessoryView;                             //@synthesize leftAccessoryView=_leftAccessoryView - In the implementation block
@property (nonatomic,readonly) UIView * rightAccessoryView;                            //@synthesize rightAccessoryView=_rightAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL loading;                                             //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic,__weak) id<FBBrowserChromeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIView *)rightAccessoryView;
-(id)initWithLayoutConfig:(id)arg1 ;
-(void)updateURL:(id)arg1 ;
-(void)updateIsPrefetched:(BOOL)arg1 ;
-(UIButton *)tapButton;
-(UILabel *)subdomainLabel;
-(UIView *)lockIcon;
-(void)_searchFieldTapped;
-(void)_searchFieldLongPress:(id)arg1 ;
-(void)_updateAccessibilityText;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBBrowserChromeDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBBrowserChromeDelegate>)delegate;
-(UIView *)backgroundView;
-(UIView *)searchField;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(UIView *)leftAccessoryView;
-(BOOL)loading;
-(void)_stopButtonTapped:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)_refreshButtonTapped:(id)arg1 ;
@end

