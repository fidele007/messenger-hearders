/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLFragmentService <NSObject>
@required
-(id)sendFragmentQuery:(id)arg1 callbackQueue:(id)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 configurationCallback:(/*^block*/id)arg5;
-(id)sendFragmentQuery:(id)arg1 callbackQueue:(id)arg2 networkRequestThresholdInSeconds:(unsigned long long)arg3 cachedResponseCallback:(/*^block*/id)arg4 downloadedResponseCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 configurationCallback:(/*^block*/id)arg7;
-(id)sendFragmentQueries:(id)arg1 callbackQueue:(id)arg2 responseCallback:(/*^block*/id)arg3 queryCompletionCallback:(/*^block*/id)arg4 failureCallback:(/*^block*/id)arg5 configurationCallback:(/*^block*/id)arg6;

@end

