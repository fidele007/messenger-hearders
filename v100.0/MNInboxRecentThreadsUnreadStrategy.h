/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInboxRecentThreadsStrategy.h>

@interface MNInboxRecentThreadsUnreadStrategy : NSObject <MNInboxRecentThreadsStrategy> {

	double _timeIntervalOfMessagesToShowInHours;
	unsigned long long _maximumNumberOfThreads;

}
-(unsigned long long)numberOfThreadsToShowBeforeInboxUnitsWithThreads:(id)arg1 truncationViewModel:(id)arg2 minimumNumberOfThreads:(unsigned long long)arg3 ;
-(unsigned long long)numberOfVisibleUnreadThreadsWithThreads:(id)arg1 truncationViewModel:(id)arg2 minimumNumberOfThreads:(unsigned long long)arg3 ;
-(id)initWithTimeIntervalOfMessagesToShowInHours:(unsigned long long)arg1 maximumNumberOfThreads:(unsigned long long)arg2 ;
@end

