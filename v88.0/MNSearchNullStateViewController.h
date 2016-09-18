/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassInjectable.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNConversationContactCollectionViewControllerDelegate.h>
#import <Messenger/MNSearchNullStateTableViewSectionControllerDelegate.h>

@protocol MNSearchNullStateControllerDelegate;
@class MNSearchNullStateViewModel, NSNumber, MNSearchNullStateTableViewSectionController, MNConversationContactCollectionViewController, MNScrollViewScrollingListenerAnnouncer, MNSearchNullStateViewControllerInjector, NSString;

@interface MNSearchNullStateViewController : NSObject <FBClassInjectable, UITableViewDelegate, UITableViewDataSource, MNConversationContactCollectionViewControllerDelegate, MNSearchNullStateTableViewSectionControllerDelegate> {

	MNSearchNullStateViewModel* _searchNullStateViewModel;
	NSNumber* _subscriptionId;
	MNSearchNullStateTableViewSectionController* _morePeopleSectionController;
	MNConversationContactCollectionViewController* _topPeopleSectionController;
	MNConversationContactCollectionViewController* _groupSectionController;
	MNConversationContactCollectionViewController* _businessSectionController;
	MNConversationContactCollectionViewController* _botsSectionController;
	MNConversationContactCollectionViewController* _recentSearchSectionController;
	MNScrollViewScrollingListenerAnnouncer* _scrollingAnnouncer;
	MNSearchNullStateViewControllerInjector* _injector;
	id<MNSearchNullStateControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNSearchNullStateControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(void)bindToTableView:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)addScrollingListener:(id)arg1 ;
-(void)removeScrollingListener:(id)arg1 ;
-(void)unbindFromTableView:(id)arg1 ;
-(void)_updateViewModel:(id)arg1 ;
-(BOOL)isBindedToTableView:(id)arg1 ;
-(void)addViewControllersAsChildOfViewController:(id)arg1 ;
-(void)updateDataSourceAndReloadDataForTableView:(id)arg1 ;
-(void)searchNullStateTableViewSectionController:(id)arg1 didSelectConversationContact:(id)arg2 withAnalyticsExtras:(id)arg3 ;
-(id)_updateCollectionViewSectionCell:(id)arg1 withCollectionViewController:(id)arg2 ;
-(id)_extrasByAddingBusinessOrBotExtrasForContact:(id)arg1 originalExtras:(id)arg2 ;
-(BOOL)_shouldShowBusinessesOrGroupsSection;
-(BOOL)_shouldShowBusinessesSection;
-(BOOL)_shouldShowBotsSection;
-(void)conversationContactCollectionViewController:(id)arg1 didSelectConversationContact:(id)arg2 withAnalyticsSource:(id)arg3 selectedIndex:(long long)arg4 ;
-(void)conversationContactCollectionViewControllerDidUpdateSelectedContacts:(id)arg1 ;
-(void)conversationContactCollectionViewController:(id)arg1 conversationContactDidAppear:(id)arg2 withAnalyticsSource:(id)arg3 atIndex:(long long)arg4 ;
-(void)conversationContactCollectionViewControllerDidSelectSearch:(id)arg1 ;
-(void)setDelegate:(id<MNSearchNullStateControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNSearchNullStateControllerDelegate>)delegate;
-(void)stop;
-(void)start;
@end

