/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession;

@interface MNAirlinesItineraryFetcher : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _requestToken;

}
-(void)fetchItineraryWithID:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_fetchItineraryWithItineraryID:(id)arg1 cachedCallback:(/*^block*/id)arg2 downloadedCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
@end

