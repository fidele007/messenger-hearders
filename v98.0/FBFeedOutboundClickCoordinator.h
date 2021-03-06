/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString, NSMutableDictionary;

@interface FBFeedOutboundClickCoordinator : NSObject {

	FBUserSession* _session;
	NSString* _mostRecentOutboundGraphQLID;
	double _mostRecentOutboundTimestamp;
	NSMutableDictionary* _listeners;
	int _source;
	BOOL _feedViewIsPresented;

}
-(void)followedOutboundClickWithGraphQLID:(id)arg1 source:(int)arg2 ;
-(void)feedViewDisappeared;
-(void)feedViewWillAppear;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

