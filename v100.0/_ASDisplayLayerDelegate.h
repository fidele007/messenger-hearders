/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ASDisplayLayerDelegate <NSObject>
@optional
+(void)drawRect:(CGRect)arg1 withParameters:(id)arg2 isCancelled:(/*^block*/id)arg3 isRasterizing:(BOOL)arg4;
+(id)displayWithParameters:(id)arg1 isCancelled:(/*^block*/id)arg2;
-(void)drawRect:(CGRect)arg1 withParameters:(id)arg2 isCancelled:(/*^block*/id)arg3 isRasterizing:(BOOL)arg4;
-(void)willDisplayAsyncLayer:(id)arg1;
-(void)didDisplayAsyncLayer:(id)arg1;
-(void)displayAsyncLayer:(id)arg1 asynchronously:(BOOL)arg2;
-(void)cancelDisplayAsyncLayer:(id)arg1;
-(id)drawParametersForAsyncLayer:(id)arg1;
-(id)displayWithParameters:(id)arg1 isCancelled:(/*^block*/id)arg2;

@end

