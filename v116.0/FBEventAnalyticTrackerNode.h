/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBEventAnalyticContext;

@interface FBEventAnalyticTrackerNode : NSObject {

	FBEventAnalyticContext* _context;
	FBEventAnalyticTrackerNode* _previous;

}

@property (nonatomic,retain) FBEventAnalyticContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FBEventAnalyticTrackerNode * previous;              //@synthesize previous=_previous - In the implementation block
-(id)initWithContext:(id)arg1 previous:(id)arg2 ;
-(FBEventAnalyticTrackerNode *)previous;
-(FBEventAnalyticContext *)context;
-(void)setContext:(FBEventAnalyticContext *)arg1 ;
@end

