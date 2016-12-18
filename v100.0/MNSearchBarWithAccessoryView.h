/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(BOOL)showsSearchBar;
-(void)setShowsSearchBar:(BOOL)arg1 ;
-(void)setShowsAccessoryViewBelowSearchBar:(BOOL)arg1 ;
-(id)initWithSearchBar:(id)arg1 accessoryViewAboveSearchBar:(id)arg2 accessoryViewBelowSearchBar:(id)arg3 ;
-(void)setShowsAccessoryViewAboveSearchBar:(BOOL)arg1 ;
-(double)heighOfAccessoryViewAboveSearchBar;
-(void)_animateVisibilityForAccessoryView:(id)arg1 showsAccessoryView:(BOOL)arg2 ;
-(BOOL)showsAccessoryViewAboveSearchBar;
-(BOOL)showsAccessoryViewBelowSearchBar;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBSearchBar *)searchBar;
@end
