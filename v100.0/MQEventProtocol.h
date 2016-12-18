/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol MQEventProtocol <NSObject>
@property (nonatomic,readonly) BOOL bubbles; 
@property (nonatomic,readonly) id target; 
@property (nonatomic,readonly) id currentTarget; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSDictionary * info; 
@property (nonatomic,readonly) long long tag; 
@required
-(id)currentTarget;
-(void)stopPropagation;
-(void)stopImmediatePropagation;
-(NSString *)type;
-(id)target;
-(long long)tag;
-(NSDictionary *)info;
-(BOOL)bubbles;

@end

