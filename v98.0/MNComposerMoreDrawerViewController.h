/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNComposerMoreDrawerRowCellDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/MNComposerExtensionModuleDelegate.h>
#import <Messenger/MNComposerMoreDrawerPaginationCellDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNRoundedCornerContainerContent.h>
#import <Messenger/MNComposerTextParserListening.h>

@protocol FBProvider, MNComposerMoreDrawerViewControllerDelegate;
@class UICollectionView, MNComposerMoreDrawerDataSource, FBViewStateDebouncer, NSString, NSArray;

@interface MNComposerMoreDrawerViewController : FBContainerViewController <MNComposerMoreDrawerRowCellDelegate, UICollectionViewDelegateFlowLayout, MNComposerExtensionModuleDelegate, MNComposerMoreDrawerPaginationCellDelegate, FBClassProvidable, MNRoundedCornerContainerContent, MNComposerTextParserListening> {

	unsigned long long _appearanceState;
	id<FBProvider> _iconControllerProvider;
	UICollectionView* _moreDrawerCollectionView;
	MNComposerMoreDrawerDataSource* _moreDrawerDataSource;
	FBViewStateDebouncer* _reloadDebouncer;
	NSString* _currentSearchQuery;
	long long _moreDrawerState;
	BOOL _locksRotation;
	BOOL _scrollEnabled;
	id<MNComposerMoreDrawerViewControllerDelegate> _delegate;
	NSArray* _extensionModuleItems;
	NSArray* _tabBarItems;

}

@property (assign,nonatomic,__weak) id<MNComposerMoreDrawerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * extensionModuleItems;                                                //@synthesize extensionModuleItems=_extensionModuleItems - In the implementation block
@property (nonatomic,copy) NSArray * tabBarItems;                                                         //@synthesize tabBarItems=_tabBarItems - In the implementation block
@property (assign,nonatomic) BOOL locksRotation;                                                          //@synthesize locksRotation=_locksRotation - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled;                                   //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)composerExtensionModule:(id)arg1 didSelectContent:(id)arg2 ;
-(void)composerMoreDrawerPaginationCell:(id)arg1 didSelectWithTabBarItem:(id)arg2 ;
-(void)moreDrawerRowCellDidEndDisplay:(id)arg1 ;
-(void)moreDrawerRowCellDidTapDetailButton:(id)arg1 ;
-(void)_setAppearanceState:(unsigned long long)arg1 ;
-(void)_setMoreDrawerState:(long long)arg1 ;
-(void)didParseSearchQuery:(id)arg1 ;
-(void)didParseEmptyQuery;
-(void)didParseMentionTriggerQuery:(id)arg1 ;
-(void)setExtensionModuleItems:(NSArray *)arg1 ;
-(NSArray *)extensionModuleItems;
-(BOOL)locksRotation;
-(void)setLocksRotation:(BOOL)arg1 ;
-(void)setDelegate:(id<MNComposerMoreDrawerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNComposerMoreDrawerViewControllerDelegate>)delegate;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)isScrollEnabled;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_didBecomeActive:(id)arg1 ;
-(void)_reload;
-(void)setTabBarItems:(NSArray *)arg1 ;
-(NSArray *)tabBarItems;
@end
