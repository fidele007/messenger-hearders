/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLSubscriptionHandle.h>
#import <Messenger/FBLithiumClientListener.h>

@class NSString;

@interface FBGraphQLLiveQuery : NSObject <FBGraphQLSubscriptionHandle, FBLithiumClientListener> {

	shared_ptr<facebook::GraphQLLiveQuerySubscriber>* _subscriber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startLiveQueryForQuery:(id)arg1 userSession:(id)arg2 persistent:(BOOL)arg3 callbackQueue:(id)arg4 updateBlock:(/*^block*/id)arg5 statusChangeBlock:(/*^block*/id)arg6 errorBlock:(/*^block*/id)arg7 ;
+(void)setLiveQueriesDisabled:(BOOL)arg1 ;
+(id)startLiveQueryForQuery:(id)arg1 lithiumClient:(id)arg2 persistentStore:(id)arg3 consistentLookasideCache:(id)arg4 callbackQueue:(id)arg5 updateBlock:(/*^block*/id)arg6 statusChangeBlock:(/*^block*/id)arg7 errorBlock:(/*^block*/id)arg8 ;
+(BOOL)liveQueriesDisabled;
-(id)initWithBaseQuery:(id)arg1 lithiumClient:(id)arg2 persistentStore:(id)arg3 consistentLookasideCache:(id)arg4 callbackQueue:(id)arg5 updateBlock:(/*^block*/id)arg6 statusChangeBlock:(/*^block*/id)arg7 errorBlock:(/*^block*/id)arg8 ;
-(void)lithiumClientDidInvalidate:(id)arg1 ;
-(void)cancel;
-(NSString *)description;
-(void)start;
-(id)handleType;
-(void)unsubscribe;
@end
