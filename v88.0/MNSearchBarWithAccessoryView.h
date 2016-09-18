/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBSearchBar;

@interface MNSearchBarWithAccessoryView : UIView {

	UIView* _accessoryViewAboveSearchBar;
	UIView* _accessoryViewBelowSearchBar;
	BOOL _showsAccessoryViewAboveSearchBar;
	BOOL _showsAccessoryViewBelowSearchBar;
	BOOL _showsSearchBar;
	FBSearchBar* _searchBar;

}

@property (nonatomic,readonly) FBSearchBar * searchBar;                          //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) BOOL showsAccessoryViewAboveSearchBar;              //@synthesize showsAccessoryViewAboveSearchBar=_showsAccessoryViewAboveSearchBar - In the implementation block
@property (assign,nonatomic) BOOL showsAccessoryViewBelowSearchBar;              //@synthesize showsAccessoryViewBelowSearchBar=_showsAccessoryViewBelowSearchBar - In the implementation block
@property (assign,nonatomic) BOOL showsSearchBar;                                //@synthesize showsSearchBar=_showsSearchBar - In the implementation block
-(void)setShowsSearchBar:(BOOL)arg1 ;
-(BOOL)showsSearchBar;
-(void)setShowsAccessoryViewBelowSearchBar:(BOOL)arg1 ;
-(double)heighOfAccessoryViewAboveSearchBar;
-(void)setShowsAccessoryViewAboveSearchBar:(BOOL)arg1 ;
-(void)_animateVisibilityForAccessoryView:(id)arg1 showsAccessoryView:(BOOL)arg2 ;
-(id)initWithSearchBar:(id)arg1 accessoryViewAboveSearchBar:(id)arg2 accessoryViewBelowSearchBar:(id)arg3 ;
-(BOOL)showsAccessoryViewAboveSearchBar;
-(BOOL)showsAccessoryViewBelowSearchBar;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBSearchBar *)searchBar;
@end

