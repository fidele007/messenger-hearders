/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager;
@class MNThreadSummaryUpdateTypeBlacklist;

@interface MNThreadSummaryUpdateCreatorFactory : NSObject {

	id<MNAuthenticationManager> _authenticationManager;
	MNThreadSummaryUpdateTypeBlacklist* _disallowedUpdated;

}
-(id)initWithAuthManager:(id)arg1 disallowedUpdates:(id)arg2 ;
-(id)clientUpdateCreatorForState:(id)arg1 ;
-(id)clientUpdateCreatorForThreadSummary:(id)arg1 messages:(id)arg2 ;
@end

