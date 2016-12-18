/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BFCancellationToken;

@interface BFCancellationTokenSource : NSObject {

	BFCancellationToken* _token;

}

@property (nonatomic,readonly) BFCancellationToken * token;                                            //@synthesize token=_token - In the implementation block
@property (getter=isCancellationRequested,nonatomic,readonly) BOOL cancellationRequested; 
+(id)cancellationTokenSource;
-(void)cancelAfterDelay:(int)arg1 ;
-(BOOL)isCancellationRequested;
-(void)cancel;
-(id)init;
-(BFCancellationToken *)token;
-(void)dispose;
@end

