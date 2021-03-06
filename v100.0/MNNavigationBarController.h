/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationBarControllerDelegate;
@class NSMutableArray, UINavigationItem, NSString, UIView, UIBarButtonItem;

@interface MNNavigationBarController : NSObject {

	NSMutableArray* _savedTitlesAndTitleViews;
	UINavigationItem* _navigationItem;
	id<MNNavigationBarControllerDelegate> _delegate;
	NSString* _defaultTitle;
	UIView* _defaultTitleView;
	UIBarButtonItem* _backChevronButtonItem;

}

@property (nonatomic,retain) UIBarButtonItem * backChevronButtonItem;                            //@synthesize backChevronButtonItem=_backChevronButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<MNNavigationBarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * defaultTitle;                                              //@synthesize defaultTitle=_defaultTitle - In the implementation block
@property (nonatomic,retain) UIView * defaultTitleView;                                          //@synthesize defaultTitleView=_defaultTitleView - In the implementation block
-(void)removeTemporaryTitleViewWithId:(id)arg1 ;
-(void)setDefaultTitle:(NSString *)arg1 ;
-(void)removeTemporaryTitleWithId:(id)arg1 ;
-(void)setDefaultTitleView:(UIView *)arg1 ;
-(void)invalidateTitleView;
-(NSString *)defaultTitle;
-(UIBarButtonItem *)backChevronButtonItem;
-(void)_onBackButtonTap;
-(void)setBackChevronButtonItem:(UIBarButtonItem *)arg1 ;
-(id)setTemporaryTitleView:(id)arg1 ;
-(void)setBackChevronButtonItem;
-(void)removeLeftBarButtonItem;
-(UIView *)defaultTitleView;
-(void)setDelegate:(id<MNNavigationBarControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNNavigationBarControllerDelegate>)delegate;
-(id)initWithNavigationItem:(id)arg1 ;
-(id)setTemporaryTitle:(id)arg1 ;
-(void)_updateNavigationItemTitle;
@end

