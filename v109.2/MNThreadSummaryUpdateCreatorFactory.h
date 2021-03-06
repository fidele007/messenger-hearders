/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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

