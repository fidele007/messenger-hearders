/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkerRequestDelegate <NSObject>
@optional
-(void)networkerRequestDidStart:(id)arg1;
-(void)networkerRequest:(id)arg1 didUploadBytes:(long long)arg2 outOf:(long long)arg3;
-(void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(BOOL)arg3;
-(void)networkerRequest:(id)arg1 didReceiveResponse:(id)arg2;
-(void)networkerRequest:(id)arg1 didReceiveData:(id)arg2;
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
-(void)networkerRequest:(id)arg1 willRetryWithError:(id)arg2 status:(id)arg3;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;

@end

