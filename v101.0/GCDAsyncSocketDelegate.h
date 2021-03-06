/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCDAsyncSocketDelegate
@optional
-(id)newSocketQueueForConnectionFromAddress:(id)arg1 onSocket:(id)arg2;
-(void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
-(void)socket:(id)arg1 didReadPartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
-(void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
-(void)socket:(id)arg1 didWritePartialDataOfLength:(unsigned long long)arg2 tag:(long long)arg3;
-(double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
-(double)socket:(id)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
-(void)socketDidCloseReadStream:(id)arg1;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
-(void)socketDidSecure:(id)arg1;
-(void)socket:(id)arg1 didReceiveTrust:(SecTrustRef)arg2 completionHandler:(/*^block*/id)arg3;

@end

