/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBStateMachineTransition : NSObject {

	NSString* _originState;
	NSString* _destinationState;

}

@property (nonatomic,copy,readonly) NSString * originState; 
@property (nonatomic,copy,readonly) NSString * destinationState; 
+(id)transitionFromState:(id)arg1 toState:(id)arg2 ;
-(NSString *)originState;
-(NSString *)destinationState;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

