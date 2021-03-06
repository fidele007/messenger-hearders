/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBPageComponentFlowFunnelLogger : NSObject {

	NSString* _flowType;
	NSString* _entryEntId;
	NSString* _referrer;

}

@property (nonatomic,copy,readonly) NSString * funnelName; 
-(void)endFunnel;
-(NSString *)funnelName;
-(void)addAction:(id)arg1 withExtra:(id)arg2 ;
-(id)initWithFlowType:(id)arg1 entryEntId:(id)arg2 referrer:(id)arg3 ;
-(void)startFunnel;
-(void)addFunnelTag:(id)arg1 ;
-(void)addAction:(id)arg1 withTag:(id)arg2 ;
-(void)addAction:(id)arg1 ;
@end

