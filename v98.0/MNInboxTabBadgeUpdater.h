/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAggregatedBadgeCountTrackerListening.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class MNAggregatedBadgeCountTracker, UITabBarItem, NSString;

@interface MNInboxTabBadgeUpdater : NSObject <MNAggregatedBadgeCountTrackerListening, FBViewerContextClassProvidable> {

	MNAggregatedBadgeCountTracker* _aggregatedBadgeCountTracker;
	UITabBarItem* _tabBarItem;

}

@property (nonatomic,retain) UITabBarItem * tabBarItem;              //@synthesize tabBarItem=_tabBarItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)aggregatedBadgeCountTrackerDidUpdate:(id)arg1 ;
-(void)_updateTabBarBadge;
-(id)initWithAggregatedBadgeCountTracker:(id)arg1 ;
-(void)configureBadgeUpdaterWithTabBarItem:(id)arg1 ;
-(UITabBarItem *)tabBarItem;
-(void)setTabBarItem:(UITabBarItem *)arg1 ;
@end

