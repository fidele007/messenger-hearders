/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBReachabilityListener.h>
#import <FBSharedFramework/FBInvalidating.h>

@class FBReactiveSocketClientListenerAnnouncer, NSString;

@interface FBReactiveSocketClient : NSObject <FBReachabilityListener, FBInvalidating> {

	/*^block*/id _canConnectProvider;
	/*^block*/id _tokenProvider;
	FBReactiveSocketClientListenerAnnouncer* _announcer;
	unique_ptr<reactivesocket::ResumeIdentificationToken, std::__1::default_delete<reactivesocket::ResumeIdentificationToken> >* _resumptionToken;
	EventBase* _eventBase;
	Synchronized<(anonymous namespace)::ClientState, folly::SharedMutexImpl<false> >* _clientState;

}

@property (copy,readonly) NSString * resumptionTokenString; 
@property (readonly) BOOL canConnect; 
@property (readonly) ReactiveSocket* reactiveSocket; 
@property (readonly) Executor* executor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)initWithUserID:(id)arg1 useStagingDefault:(BOOL)arg2 canConnectProvider:(/*^block*/id)arg3 accessTokenProvider:(/*^block*/id)arg4 ;
-(void)applicationDidEnterForeground:(id)arg1 ;
-(NSString *)resumptionTokenString;
-(ReactiveSocket*)reactiveSocket;
-(void)temporarilyDisconnected;
-(void)successfullyResumed;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(Executor*)executor;
-(BOOL)canConnect;
-(void)dealloc;
-(void)invalidate;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)isValid;
-(void)connected;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)accessToken;
@end

