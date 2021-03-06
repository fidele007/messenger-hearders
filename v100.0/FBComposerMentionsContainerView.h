/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBTransparentView.h>

@class UITableView, UICollectionView, UILabel, UIView, CALayer, FBGradientView, FBUserSession;

@interface FBComposerMentionsContainerView : FBTransparentView {

	UITableView* _tableView;
	UICollectionView* _collectionView;
	UILabel* _placeholderLabel;
	UIView* _placeholderView;
	CALayer* _topBorder;
	unsigned long long _anchorDirection;
	FBGradientView* _shadowView;
	BOOL _alwaysBounceTableView;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBUserSession * session;                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIView * placeholderView;                       //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) BOOL includesShadow; 
@property (assign,nonatomic) unsigned long long anchorDirection;               //@synthesize anchorDirection=_anchorDirection - In the implementation block
@property (assign,nonatomic) BOOL alwaysBounceTableView;                       //@synthesize alwaysBounceTableView=_alwaysBounceTableView - In the implementation block
+(CGRect)idealFrameContainedInRect:(CGRect)arg1 session:(id)arg2 ;
-(void)setIncludesShadow:(BOOL)arg1 ;
-(BOOL)alwaysBounceTableView;
-(id)initWithFrame:(CGRect)arg1 anchorDirection:(unsigned long long)arg2 includesShadow:(BOOL)arg3 includesTopBorder:(BOOL)arg4 session:(id)arg5 ;
-(BOOL)includesShadow;
-(void)setAnchorDirection:(unsigned long long)arg1 ;
-(unsigned long long)anchorDirection;
-(void)setAlwaysBounceTableView:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UITableView *)tableView;
-(UICollectionView *)collectionView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIView *)placeholderView;
-(FBUserSession *)session;
@end

