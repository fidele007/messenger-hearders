/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLFragmentService.h>

@protocol FBGraphQLService;
@class NSString;

@interface FBGraphQLWrappingFragmentService : NSObject <FBGraphQLFragmentService> {

	id<FBGraphQLService> _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sendFragmentQuery:(id)arg1 callbackQueue:(id)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 configurationCallback:(/*^block*/id)arg5 ;
-(id)sendFragmentQuery:(id)arg1 callbackQueue:(id)arg2 networkRequestThresholdInSeconds:(unsigned long long)arg3 cachedResponseCallback:(/*^block*/id)arg4 downloadedResponseCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 configurationCallback:(/*^block*/id)arg7 ;
-(id)sendFragmentQueries:(id)arg1 callbackQueue:(id)arg2 responseCallback:(/*^block*/id)arg3 queryCompletionCallback:(/*^block*/id)arg4 failureCallback:(/*^block*/id)arg5 configurationCallback:(/*^block*/id)arg6 ;
-(id)initWithService:(id)arg1 ;
@end

