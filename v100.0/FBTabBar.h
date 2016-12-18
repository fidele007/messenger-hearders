/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBTabBarProtocol.h>

@protocol FBTabBarDelegate;
@class UIColor, NSArray, FBTabBarItem, FBTabBarItemView, FBKVOController, UIImageView, NSTimer;

@interface FBTabBar : UIView <FBTabBarProtocol> {

	FBTabBarItemView* _selectedView;
	FBKVOController* _KVOController;
	unsigned long long _layout;
	BOOL _hideItemTitles;
	BOOL _tabSwipingDisabled;
	BOOL _disableTabBadges;
	UIColor* _badgeColor;
	unsigned long long _position;
	NSArray* _items;
	FBTabBarItem* _selectedItem;
	id<FBTabBarDelegate> _delegate;
	UIImageView* _borderImageView;
	UIColor* _iconColor;
	UIColor* _titleColor;
	UIColor* _borderColor;
	NSArray* _tabBarItemViews;
	NSTimer* _tapRecognitionTimer;
	CGPoint _touchStartPoint;

}

@property (nonatomic,copy) NSArray * tabBarItemViews;                                        //@synthesize tabBarItemViews=_tabBarItemViews - In the implementation block
@property (nonatomic,retain) NSTimer * tapRecognitionTimer;                                  //@synthesize tapRecognitionTimer=_tapRecognitionTimer - In the implementation block
@property (assign,nonatomic) CGPoint touchStartPoint;                                        //@synthesize touchStartPoint=_touchStartPoint - In the implementation block
@property (nonatomic,readonly) UIImageView * borderImageView;                                //@synthesize borderImageView=_borderImageView - In the implementation block
@property (nonatomic,retain) UIColor * iconColor;                                            //@synthesize iconColor=_iconColor - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                                           //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                          //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) FBTabBarItem * selectedItem;                                    //@synthesize selectedItem=_selectedItem - In the implementation block
@property (assign,nonatomic,__weak) id<FBTabBarDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * auxiliaryItems; 
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator; 
+(double)_touchRecognitionDelay;
-(void)setIconColor:(UIColor *)arg1 ;
-(UIColor *)iconColor;
-(void)_updateLabelVisibility;
-(id)initWithLayout:(unsigned long long)arg1 options:(const FBTabBarOptions*)arg2 ;
-(CGRect)rectOfTabBarItemViewAtIndex:(long long)arg1 ;
-(UIImageView *)borderImageView;
-(id)_itemViewForItem:(id)arg1 ;
-(id)tabBarItemAtPoint:(CGPoint)arg1 ;
-(void)_selectTabBarItemIfPossible:(id)arg1 ;
-(void)setTouchStartPoint:(CGPoint)arg1 ;
-(void)_selectTabBarItemAtPointIfPossible:(CGPoint)arg1 ;
-(void)setTapRecognitionTimer:(NSTimer *)arg1 ;
-(NSTimer *)tapRecognitionTimer;
-(BOOL)_touchMovedSignificantlyInTheVerticalDirection:(id)arg1 ;
-(void)_tabBarItemBadgeDidChange:(id)arg1 object:(id)arg2 ;
-(void)_rebuildTabBarViews;
-(id)_itemForItemView:(id)arg1 ;
-(id)_selectedColor;
-(id)_preparedSelectedImage:(id)arg1 shouldUseRawImage:(BOOL)arg2 ;
-(void)_refreshItemViewColors;
-(id)_tabBarBorderWithColor:(id)arg1 size:(CGSize)arg2 ;
-(CGRect)rectOfTabBarItem:(id)arg1 ;
-(BOOL)itemLabelsAreHidden;
-(id)itemViewForItem:(id)arg1 ;
-(NSArray *)tabBarItemViews;
-(void)setTabBarItemViews:(NSArray *)arg1 ;
-(CGPoint)touchStartPoint;
-(void)setDelegate:(id<FBTabBarDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id<FBTabBarDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setSelectedItem:(FBTabBarItem *)arg1 ;
-(FBTabBarItem *)selectedItem;
-(UIColor *)borderColor;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
@end

