/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRequestConnectionDelegate <NSObject>
@optional
-(void)requestConnectionWillBeginLoading:(id)arg1 fromCache:(BOOL)arg2;
-(void)requestConnection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
-(void)requestConnectionDidFinishLoading:(id)arg1 fromCache:(BOOL)arg2;
-(void)requestConnection:(id)arg1 didFailWithError:(id)arg2;
-(void)requestConnection:(id)arg1 willRetryWithRequestConnection:(id)arg2;

@end

