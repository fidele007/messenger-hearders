/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray;

@interface MNJoinableGroupShowPendingApprovalsOperation : NSOperation {

	NSArray* _joinRequests;
	double _lastBannerViewedTime;
	/*^block*/id _completion;

}
-(id)initWithPendingJoinRequests:(id)arg1 lastBannerViewedTime:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)main;
@end

