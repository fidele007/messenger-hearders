/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface MNModelSubscriptionProviderFactory : NSObject
+(id)singleWithKind:(id)arg1 initialBehavior:(long long)arg2 loader:(id)arg3 monitor:(id)arg4 backfeeder:(id)arg5 queue:(id)arg6 ;
+(id)compositeWithKind:(id)arg1 initialBehavior:(long long)arg2 children:(const vector<std::__1::pair<MNModelSubscriptionProvider *, long>, std::__1::allocator<std::__1::pair<MNModelSubscriptionProvider *, long> > >Ref)arg3 childKeyMapping:(/*^block*/id)arg4 loader:(id)arg5 backfeeder:(id)arg6 queue:(id)arg7 ;
+(id)listWithKind:(id)arg1 initialBehavior:(long long)arg2 itemSubscriptionProvider:(id)arg3 itemDataPreloader:(id)arg4 itemKeysLoader:(id)arg5 itemKeysMonitor:(id)arg6 loader:(id)arg7 backfeeder:(id)arg8 queue:(id)arg9 ;
@end

