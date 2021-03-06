/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLigerProvidesConnectionLogger.h>

@protocol FBLigerProvidesNetworkStatusMonitor;
@class NSString;

@interface FBLigerConnectionLogger : NSObject <FBLigerProvidesConnectionLogger> {

	unsigned _sampleWeight;
	id<FBLigerProvidesNetworkStatusMonitor> _monitor;
	unique_ptr<proxygen::ConnectionLogger, std::__1::default_delete<proxygen::ConnectionLogger> >* _connLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TraceEventObserver*)getConnectionLogger;
-(id)initWithSampleWeight:(unsigned)arg1 withNetworkStatusMonitor:(id)arg2 ;
-(void)logConnectionInfo:(vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg1 ;
-(void)dealloc;
-(void)reset;
@end

