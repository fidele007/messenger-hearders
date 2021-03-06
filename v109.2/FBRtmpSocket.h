/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRtmpSocketDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSMutableArray;

@interface FBRtmpSocket : NSObject {

	SCD_Struct_FB397 _config;
	RTMP* _rtmpClient;
	atomic<int> _socketDup;
	RTMPPacket* _tmpPacket;
	deque<FBRtmpPingInfo, std::__1::allocator<FBRtmpPingInfo> >* _pingsInFlight;
	double _lastRTTSeconds;
	double _initialRTTSeconds;
	NSMutableArray* _measurementDetails;
	atomic<bool> _speedTestCanceled;
	double _timestampOfDataPacket;
	unsigned long long _bytesSentBetweenPings;
	double _observedThroughputInKBs;
	RTMP_OnConnectContext* _onConnectContext;
	FBRtmpConnectionMeasurements _connectionMeasurements;
	unique_ptr<facebook::livestreaming::RtmpSSLConnectionContext, std::__1::default_delete<facebook::livestreaming::RtmpSSLConnectionContext> >* _sslConnectionContext;
	RtmpSSLFactory* _sslFactory;
	BandwidthMonitorRef _bandwidthMonitor;
	id<FBRtmpSocketDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBRtmpSocketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)sendPing:(double)arg1 ;
-(id)closeGracefully;
-(void)cancelSpeedTest;
-(void)sendStreamInterrupted;
-(id)initWithNetworkConfig:(SCD_Struct_FB397)arg1 sslFactory:(RtmpSSLFactory*)arg2 bandwidthMonitor:(BandwidthMonitorRef)arg3 ;
-(void)openWith:(id)arg1 connectionToken:(id)arg2 socket:(int)arg3 rtmpHeader:(vector<unsigned char, std::__1::allocator<unsigned char> >*)arg4 performSpeedTest:(BOOL)arg5 ;
-(void)forceClose;
-(void)readPacket;
-(BOOL)writePacket:(const vector<unsigned char, std::__1::allocator<unsigned char> >*)arg1 packetType:(int)arg2 timestamp:(unsigned)arg3 ;
-(FBRtmpConnectionMeasurements)connectionMeasurements;
-(BOOL)checkConnectionAndNotifyDelegateWithError:(/*^block*/id)arg1 ;
-(int)rtmpSendPacket:(RTMPPacket*)arg1 queue:(int)arg2 ;
-(void)_handlePingReply;
-(void)_processReadPacket:(RTMPPacket*)arg1 ;
-(FBNetworkSpeedTestStatus)speedTestWithThreshold;
-(void)sendSetChunkSize:(int)arg1 ;
-(void)speedTestRetry;
-(FBNetworkSpeedTestStatus)speedTest;
-(BOOL)checkSpeedTestThresholdPass:(FBNetworkSpeedTestStatus)arg1 ;
-(FBNetworkSpeedTestStatus)_speedTestImplWithPayloadSize:(int)arg1 andTimeout:(unsigned long long)arg2 ;
-(BOOL)_sendPing:(double)arg1 withPayloadSize:(unsigned long long)arg2 ;
-(BOOL)_drainPings:(unsigned long long)arg1 ;
-(long long)_sendSpeedTestPings:(unsigned long long)arg1 cutOffTime:(unsigned long long)arg2 ;
-(BOOL)sendPingWithPayloadSize:(unsigned long long)arg1 ;
-(double)initialRTT;
-(double)observedThroughputInKBs;
-(Optional<facebook::tcp::TCPInfo>)tcpInfo;
-(void)setDelegate:(id<FBRtmpSocketDelegate>)arg1 ;
-(void)dealloc;
-(id<FBRtmpSocketDelegate>)delegate;
-(BOOL)isConnected;
-(double)RTT;
-(void)shutdown;
@end

