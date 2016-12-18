/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSDictionary;

@interface FBPageComponentFlowIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _flowType;
	NSDictionary* _initialInput;

}

@property (nonatomic,copy,readonly) NSString * FBID;                          //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * flowType;                      //@synthesize flowType=_flowType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * initialInput;              //@synthesize initialInput=_initialInput - In the implementation block
+(id)pageComponentFlowTargetWithFBID:(id)arg1 flowType:(id)arg2 initialInput:(id)arg3 ;
+(id)URLMapping;
-(NSString *)FBID;
-(NSDictionary *)initialInput;
-(id)fallbackURLs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)flowType;
@end
